using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    static public class LOGIN_SUCCES
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_LOGIN_SUCCESS);
            Out.WriteParsedString("Welcome to rebornAPB", 48);
            Out.WriteUInt32Reverse(1);
            Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
            Out.WriteUInt32Reverse(client.Account.IsAdmin);
            for (int i = 1; i < 6; ++i) Out.WriteInt32Reverse(0);
            Out.WriteString("");
            Out.WriteInt32(0);
            Out.WriteInt32(0);
            Out.WriteInt32Reverse(0);
            Out.WriteString("");
            Out.WriteInt32Reverse(0);
            client.Send(Out);
        }
    }
}