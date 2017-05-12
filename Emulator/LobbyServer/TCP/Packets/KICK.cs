using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    public class KICK
    {
        public static void Send(LobbyClient cclient, string Reason, string Information)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.KICK);
            Out.WriteParsedString(Reason);
            Out.WriteParsedString(Information);
            cclient.Send(Out);
        }
    }
}
