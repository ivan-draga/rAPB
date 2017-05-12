using FrameWork.NetWork;
using FrameWork.zlib;
using System.IO;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CONFIGFILE_LOAD, "onAskConfigfileLoad")]
    public class CONFIGFILE_LOAD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;
            byte FileId = packet.GetUint8();
            byte[] Result = ZlibMgr.Compress(Program.FileMgr.GetFileByte(cclient.Account.Index, FileId, true, "", ""));
            string name = Program.FileMgr.GetFileName(FileId, true);
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CONFIGFILE_LOAD);
            Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
            Out.WriteByte(FileId);
            if (File.Exists("ClientFiles\\" + cclient.Account.Index + "\\" + name)) Out.Write(Result, 0, Result.Length);
            cclient.Send(Out);
            return 0;
        }
    }
}
