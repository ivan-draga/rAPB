using FrameWork.Logger;
using FrameWork.NetWork;

using LobbyServer.Database;
using LobbyServer.SRP;

using System;
using System.Text;

using MySql.Data.MySqlClient;
using MySql.Data.Types;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_LOGIN, "onAskLogin")]
    public class ASK_LOGIN : IPacketHandler
    {
        public int HandlePacket(BaseClient bcclient, PacketIn packet)
        {
            LobbyClient client = bcclient as LobbyClient;
            packet.Skip(24);
            String Email = packet.GetParsedString();
            Log.Notice("ASK_LOGIN", "Account: " + Email);
            Account account;
            try
            {
                if (Program.logouts.ContainsKey(Email))
                {
                    Program.logouts.TryGetValue(Email, out client.SessionId);
                    account = new Account(Email);
                    Log.Info("ASK_LOGIN", "Client " + Email + " is returning to lobby");
                }
                else account = new Account(Email);
            }
            catch (ArgumentNullException)
            {
                Log.Error("ASK_LOGIN", "Database is busy");
                ANS_LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_DATABASE_BUSY);
                client.Disconnect();
                return 0;
            }
            catch (Exception e)
            {
                Log.Error("ASK_LOGIN", "Account's not found");
                Log.Debug("ASK_LOGIN", e.ToString());
                ANS_LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_LOGIN_INVALID_ACCOUNT);
                client.Disconnect();
                return 0;
            }
            Log.Succes("ASK_LOGIN", "Account exists");
            client.Account = account;
            if (client.Account.extrn_login == 1)
            {
                if (client.Account.Verifier.Length <= 2 || client.Account.Salt.Length <= 2) Register(client);
                client.Salt = new FrameWork.NetWork.Crypto.BigInteger(client.Account.Salt, 16).ToByteArrayUnsigned();
                client.Verifier = new FrameWork.NetWork.Crypto.BigInteger(client.Account.Verifier, 16);
                LOGIN_SALT.Send(client);
                return 0;
            }
            else
            {
                ANS_LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_LOGIN_APB_INACTIVATED);
                client.Disconnect();
                return 0;
            }
        }

        static public void Register(LobbyClient client)
        {
            //TODO - generate token when registering from site and give user download link for "token.id" file
            Random getrandom = new Random();
            String token = getrandom.Next(10000000, 99999999).ToString();
            MySqlCommand cmd = new MySqlCommand("UPDATE `accounts` SET `token` = @token WHERE `email` = @email", Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@email", client.Account.Email);
                cmd.Parameters.AddWithValue("@token", token);
                cmd.ExecuteNonQuery();
                client.Account.token = token;
            }
            catch (MySqlException ex) { Log.Error("Register()", "MySQL failed! " + ex.ToString()); }
            String Id = Convert.ToString(client.Account.Id);
            String Pass = client.Account.Password;
            Byte[] salt = new byte[10];
            Random random = new Random();
            random.NextBytes(salt);
            random = null;
            client.Account.Salt = (new FrameWork.NetWork.Crypto.BigInteger(1, salt)).ToString(16);
            client.Account.Verifier = Auth.computeVerifier(salt, Id, Pass).ToString(16);
            client.Account.Save();
        }
    }
}
