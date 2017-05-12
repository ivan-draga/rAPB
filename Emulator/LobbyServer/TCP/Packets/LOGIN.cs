using FrameWork.Logger;
using FrameWork.NetWork;
using LobbyServer.SRP;
using System;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_LOGIN, "onAskLogin")]
    public class LOGIN : IPacketHandler
    {
        public int HandlePacket(BaseClient bcclient, PacketIn packet)
        {
            LobbyClient client = bcclient as LobbyClient;
            packet.Skip(25);
            string Username = packet.GetParsedString();
            Log.Notice("ASK_LOGIN", "Account: " + Username);
            try
            {
                client.Account = Databases.AccountTable.SingleOrDefault(a => a.Username == Username);
            }
            catch (ArgumentNullException)
            {
                Log.Error("ASK_LOGIN", "Database is busy");
                LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_DATABASE_BUSY);
                client.Disconnect();
                return 0;
            }
            catch (Exception e)
            {
                Log.Error("ASK_LOGIN", "Account is not found");
                Log.Debug("ASK_LOGIN", e.ToString());
                LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_LOGIN_INVALID_ACCOUNT);
                client.Disconnect();
                return 0;
            }
            Log.Succes("ASK_LOGIN", "Account exists: " + client.Account.Username);
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
                LOGIN_FAILED.Send(client, (int)ResponseCodes.RC_LOGIN_APB_INACTIVATED);
                client.Disconnect();
                return 0;
            }
        }

        static public void Register(LobbyClient client)
        {
            string Id = Convert.ToString(client.Account.Index);
            byte[] salt = new byte[10];
            Random random = new Random();
            random.NextBytes(salt);
            random = null;
            client.Account.Salt = (new FrameWork.NetWork.Crypto.BigInteger(1, salt)).ToString(16);
            client.Account.Verifier = Auth.computeVerifier(salt, Id, client.Account.Password).ToString(16);
            Databases.AccountTable.Update(client.Account);
        }
    }
}
