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
            Out.WriteByte(1);
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
            /*
             * 
             * Receive [WS2GC_ANS_FRIENDLIST_STATE]
             * m_nReturnCode 0
             * m_nMembers 49
             * m_nCharacterUID[0] 1104126
             * m_bLookingForGroup[0] false
             * m_nGroupStatus[0] 0
             * m_nGroupPublic[0] 0
             * m_nGroupInvite[0] 0
             * m_nInstanceUID[0] (0,0)
             * m_nDistrictStatus[0] 0
             * m_nStatus[0] 0
             * m_nCharacterUID[1] 2509488
             * m_bLookingForGroup[1] false
             * m_nGroupStatus[1] 0
             * m_nGroupPublic[1] 0
             * m_nGroupInvite[1] 0
             * m_nInstanceUID[1] (0,0)
             * m_nDistrictStatus[1] 0
             * m_nStatus[1] 0
             */
            return 0;
        }
    }
}
