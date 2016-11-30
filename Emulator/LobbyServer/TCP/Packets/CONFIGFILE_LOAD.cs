using FrameWork.NetWork;
using FrameWork.zlib;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CONFIGFILE_LOAD, "onAskConfigfileLoad")]
    public class CONFIGFILE_LOAD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;
            byte FileId = packet.GetUint8();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CONFIGFILE_LOAD);
            Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
            Out.WriteByte(FileId);
            byte[] Result = ZlibMgr.Compress(Program.FileMgr.GetFileByte(cclient.Account.Index, FileId, true, "", ""));
            cclient.Send(Out);
            return 0;
        }
    }
}
