using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class VOICE_CHANNEL_INFO : PacketOut
    {
        public VOICE_CHANNEL_INFO(UInt32 channeluid, Byte channeltype, String channeluri) : base((UInt32)Opcodes.VOICE_CHANNEL_INFO)
        {
            WriteUInt32Reverse(channeluid);
            WriteByte(channeltype);
            WriteParsedString(channeluri);
        }
    }
}
