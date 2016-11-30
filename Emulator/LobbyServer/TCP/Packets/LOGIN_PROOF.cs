using System;
using FrameWork.NetWork;
using LobbyServer.SRP;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.LOGIN_PROOF, "onLoginProof")]
    public class LOGIN_PROOF : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            byte[] clientModulus = new byte[64];
            for (int i = 0; i < 64; ++i) clientModulus[i] = packet.GetUint8();
            cclient.clientModulus = new FrameWork.NetWork.Crypto.BigInteger(1, clientModulus);
            ushort unk = packet.GetUint16();
            byte[] Proof = new byte[20];
            for (int i = 0; i < 20; ++i) Proof[i] = packet.GetUint8();
            cclient.Proof = Proof;
            if (IsBanned(cclient))
            {
                LOGIN_FAILED.Send(cclient, (int)ResponseCodes.RC_LOGIN_ACCOUNT_BLOCKED);
                cclient.Disconnect();
            }
            else
            {
                if (IsValid(cclient))
                {
                    LOGIN_SUCCES.Send(cclient);
                    cclient.ECrypt = new Encryption(cclient.SessionId);
                    CHARACTER_LIST.Send(cclient);
                }
                else
                {
                    LOGIN_FAILED.Send(cclient, (int)ResponseCodes.RC_LOGIN_INVALID_ACCOUNT);
                    cclient.Disconnect();
                }
            }
            return 0;
        }

        static public bool IsValid(LobbyClient client)
        {
            if (client.Account.Index < 1) return false;
            Console.WriteLine("Account ID: " + Convert.ToString(client.Account.Index));
            byte[] proof = Auth.computeProof(Convert.ToString(client.Account.Index), client.serverModulus, client.clientModulus, client.Verifier, client.Salt, out client.SessionId);
            for (int i = 0; i < proof.Length; i++) if (proof[i] != client.Proof[i]) return false;
            return true;
        }

        static public bool IsBanned(LobbyClient client)
        {
            if (client.Account.IsBanned.Equals(1)) return true;
            else return false;
        }
    }
}