using FrameWork.NetWork;
using System.Collections.Generic;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_GROUP_LIST : PacketOut
    {
        public ANS_GROUP_LIST(UInt32 instanceUID)
            : base((UInt32)Opcodes.ANS_GROUP_LIST)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32(instanceUID);
            Byte group_amount = (Byte)(Group.GetNewGroupID() - 1);
            if (group_amount > 0)
            {
                WriteByte(group_amount);
                foreach (Group group in Program.groups)
                {
                    WriteUInt32Reverse(0); //charUID of leader
                    WriteParsedString(group.GetGroupLeader());
                    WriteByte(group.GetGroupMembersAmount());
                    WriteByte(0); //rating
                    WriteByte(0); //threat
                }
            }
            else if (group_amount <= 0) WriteByte(0);
        }
    }
}
