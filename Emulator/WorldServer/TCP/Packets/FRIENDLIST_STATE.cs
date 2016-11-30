using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_STATE, "onAskFriendListInfo")]
    public class FRIENDLIST_STATE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint charUID = packet.GetUint32Reversed();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_FRIENDLIST_STATE);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteByte(1); //count
            Out.WriteByte(cclient.Character.LFG);
            Out.WriteByte(cclient.Character.GroupStatus);
            Out.WriteByte(cclient.Character.IsGroupPublic);
            Out.WriteByte(cclient.Character.GroupInvite);
            uint code = (uint)(cclient.Character.DistrictType << 24);
            code += cclient.Character.DistrictID;
            Out.WriteUInt32(code);
            Out.WriteByte(0);
            Out.WriteUInt32Reverse(charUID);
            cclient.Send(Out);
            return 0;
        }
    }
}
