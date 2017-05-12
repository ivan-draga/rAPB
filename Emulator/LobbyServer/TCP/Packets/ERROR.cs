using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    public class ERROR 
    {
        public static void Send(LobbyClient cclient, int MessageID, int QueryID, int ReturnCode, int Param1, int Param2, int Param3, int Param4)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.ERROR);
            Out.WriteInt32Reverse(MessageID);
            Out.WriteInt32Reverse(QueryID);
            Out.WriteInt32Reverse(ReturnCode);
            Out.WriteInt32Reverse(Param1);
            Out.WriteInt32Reverse(Param2);
            Out.WriteInt32Reverse(Param3);
            Out.WriteInt32Reverse(Param4);
            cclient.Send(Out);
        }
    }
}
