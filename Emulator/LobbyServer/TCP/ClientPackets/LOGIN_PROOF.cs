using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Linq;
using System.Text;

using FrameWork.Logger;
using FrameWork.NetWork;
using LobbyServer.SRP;

namespace LobbyServer
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
            UInt16 unk = packet.GetUint16();
            byte[] Proof = new byte[20];
            for (int i = 0; i < 20; ++i) Proof[i] = packet.GetUint8();
            cclient.Proof = Proof;
            if (IsBanned(cclient))
            {
                ANS_LOGIN_FAILED.Send(cclient, (int)ResponseCodes.RC_LOGIN_ACCOUNT_BLOCKED);
                cclient.Disconnect();
            }
            else
            {
                if (IsValid(cclient)) ANS_LOGIN_SUCCES.Send(cclient);
                else
                {
                    ANS_LOGIN_FAILED.Send(cclient, (int)ResponseCodes.RC_LOGIN_INVALID_ACCOUNT);
                    cclient.Disconnect();
                }
            }
            return 0;
        }

        static public bool IsValid(LobbyClient client)
        {
            if (client.Account == null) return false;
            Console.WriteLine("Account ID: " + Convert.ToString(client.Account.Id));
            Byte[] proof = Auth.computeProof(Convert.ToString(client.Account.Id), client.serverModulus, client.clientModulus, client.Verifier, client.Salt, out client.SessionId);
            for (int i = 0; i < proof.Length; i++) if (proof[i] != client.Proof[i]) return false;
            return true;
        }

        static public bool IsBanned(LobbyClient client)
        {
            if (client.Account.Banned.Equals(1)) return true;
            else return false;
        }
    }
}