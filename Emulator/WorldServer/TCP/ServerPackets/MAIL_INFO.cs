using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class MAIL_INFO : PacketOut
    {
        public MAIL_INFO(Byte infoType, UInt32 total, UInt32 unread, UInt32 expired) : base((UInt32)Opcodes.MAIL_INFO)
        {
            WriteByte(infoType);
            WriteUInt32Reverse(total);
            WriteUInt32Reverse(unread);
            WriteUInt32Reverse(expired);
        }
    }
}
