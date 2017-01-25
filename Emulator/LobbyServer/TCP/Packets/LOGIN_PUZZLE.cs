using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    static public class LOGIN_PUZZLE
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.LOGIN_PUZZLE);
            if (Program.version == GameVersion.RTW_LAST)
            {
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(4);
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(555239);
            }
            else if (Program.version == GameVersion.G1_LATEST)
            {
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(19);
                Out.WriteInt32Reverse(4);
                Out.WriteInt32Reverse(775065);
            }
            Out.WriteByte(0x05);
            for (int i = 0; i < client.ECrypt.Key.Length; i++) Out.WriteByte(client.ECrypt.Key[i]);
            Out.WriteUInt32Reverse(0);
            Out.WriteUInt32Reverse(0);
            Out.WriteUInt32Reverse(0);
            client.SendTCP(Out);
        }
    }
}