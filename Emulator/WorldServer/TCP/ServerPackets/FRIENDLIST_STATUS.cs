using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class FRIENDLIST_STATUS : PacketOut
    {
        public FRIENDLIST_STATUS(UInt32 charuid, Byte status) : base((UInt32)Opcodes.FRIENDLIST_STATUS)
        {
            WriteUInt32Reverse(charuid);
            WriteByte(status);
        }
    }
}
