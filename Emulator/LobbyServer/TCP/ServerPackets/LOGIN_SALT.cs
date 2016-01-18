using LobbyServer.SRP;

using FrameWork.Logger;
using FrameWork.NetWork;

using System;
using System.Text;

namespace LobbyServer
{
    static public class LOGIN_SALT
    {
        static public void Send(LobbyClient client)
        {
            Log.Debug("LOGIN_SALT", "Send to " + client.Account.Email);
            client.serverModulus = Auth.computeServerModulus(client.Verifier);
            PacketOut Out = new PacketOut((UInt32)Opcodes.LOGIN_SALT);
            Out.WriteUInt32Reverse(client.Account.Id);
            Out.Write(client.serverModulus.B.ToByteArrayUnsigned(), 0, 64);
            Out.WriteByte(0x40);
            Out.WriteByte(0);
            Out.Write(client.Salt, 0, 10);
            client.Send(Out);
        }
    }
}
