using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class CHAT_WHISPER : PacketOut
    {
        public CHAT_WHISPER(UInt32 charUID, Byte fromGM, String message) : base((UInt32)Opcodes.CHAT_WHISPER)
        {
            WriteUInt32Reverse(charUID);
            WriteByte(fromGM);
            WriteParsedString(message);
        }
    }
}