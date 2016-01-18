using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_IGNORELIST_REMOVE : PacketOut
    {
        public ANS_IGNORELIST_REMOVE(UInt32 charUID) : base((UInt32)Opcodes.ANS_IGNORELIST_REMOVE)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32Reverse(charUID);
        }
    }
}
