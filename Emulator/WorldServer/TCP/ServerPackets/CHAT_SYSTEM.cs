using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class CHAT_SYSTEM : PacketOut
    {
        public CHAT_SYSTEM(Int32 duration, String message) : base((UInt32)Opcodes.CHAT_SYSTEM)
        {
            WriteInt32(duration);
            WriteParsedString(message);
        }
    }
}