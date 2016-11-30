using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_GROUP_LIST, "onAskGroupList")]
    public class GROUP_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint instanceUID = packet.GetUint32();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_GROUP_LIST);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteUInt32(instanceUID);
            Out.WriteByte(0);
            Out.WriteUInt32Reverse(0); //charUID of leader
            Out.WriteParsedString(""); //leader
            Out.WriteByte(0); //members
            Out.WriteByte(0); //rating
            Out.WriteByte(0); //threat
            cclient.Send(Out);
            return 0;
        }
    }
}
