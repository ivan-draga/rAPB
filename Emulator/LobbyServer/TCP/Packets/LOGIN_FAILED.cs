using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    static public class LOGIN_FAILED
    {
        static public void Send(LobbyClient client, int code)
        {
            PacketOut packet = new PacketOut((uint)Opcodes.ANS_LOGIN_FAILED);
            packet.WriteInt32Reverse(code);
            packet.WriteInt32Reverse(0);
            client.Send(packet);
        }
    }
}