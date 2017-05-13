using FrameWork.NetWork;
using System.Text;

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
            if (FileId == 2)
            {
                byte[] Result = Encoding.ASCII.GetBytes("[AcceptDates]\nEULA = Hour = 1 Min = 57 Sec = 2 Day = 31 Month = 0 Year = 2017\nPatchNotes = Hour = 16 Min = 47 Sec = 22 Day = 23 Month = 2 Year = 2015\n\n[File]\nversion = 0");
                Out.Write(Result, 0, Result.Length);
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
