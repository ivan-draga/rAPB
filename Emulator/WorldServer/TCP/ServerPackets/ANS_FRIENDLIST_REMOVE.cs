using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_FRIENDLIST_REMOVE : PacketOut
    {
        public ANS_FRIENDLIST_REMOVE(UInt32 charUID) : base((UInt32)Opcodes.ANS_FRIENDLIST_REMOVE)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32Reverse(charUID);
        }
    }
}
