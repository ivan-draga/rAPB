using FrameWork.NetWork;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CONFIGFILE_SAVE, "onAskConfigfileSave")]
    public class CONFIGFILE_SAVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;
            byte FileId = packet.GetUint8();
            uint Version = packet.GetUint32Reversed();
            byte[] File = new byte[packet.Length - packet.Position];
            packet.Read(File, 0, File.Length);
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CONFIGFILE_SAVE);
            Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteByte(FileId);
            Out.Write(File, 0, File.Length);
            cclient.Send(Out);
            return 0;
        }
    }
}
