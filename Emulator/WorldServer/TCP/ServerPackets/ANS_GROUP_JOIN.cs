using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_GROUP_JOIN : PacketOut
    {
        public ANS_GROUP_JOIN(String grp_leader) : base((UInt32)Opcodes.ANS_GROUP_JOIN)
        {
            WriteUInt32((uint)ResponseCodes.RC_GROUP_JOIN_NOT_FOUND);
            WriteString(grp_leader);
        }
    }
}