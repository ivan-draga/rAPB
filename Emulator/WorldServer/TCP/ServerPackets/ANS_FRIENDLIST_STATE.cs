using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_FRIENDLIST_STATE : PacketOut
    {
        public ANS_FRIENDLIST_STATE(UInt32 charUID, WorldClient client) : base((UInt32)Opcodes.ANS_FRIENDLIST_STATE)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteByte(1);
            WriteByte(client.Character.LFG);
            WriteByte(client.Character.GroupStatus);
            WriteByte(client.Character.IsGroupPublic);
            WriteByte(client.Character.GroupInvite);
            UInt32 code = (UInt32)(client.Character.DistrictType << 24);
            code += client.Character.DistrictID;
            WriteUInt32(code);
            WriteByte(0);
            WriteUInt32Reverse(charUID);
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
        }
    }
}
