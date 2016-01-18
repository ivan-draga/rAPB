using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class WORLD_SHUTDOWN_NOTIFY : PacketOut
    {
        public WORLD_SHUTDOWN_NOTIFY(Byte minutesLeft) : base((UInt32)Opcodes.WORLD_SHUTDOWN_NOTIFY)
        {
            WriteByte(minutesLeft);
        }
    }
}
