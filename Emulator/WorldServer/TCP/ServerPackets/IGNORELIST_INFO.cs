using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class IGNORELIST_INFO : PacketOut
    {
        public IGNORELIST_INFO(Byte totalIgnores, UInt32 charUID, String charName) : base((UInt32)Opcodes.IGNORELIST_INFO)
        {
            WriteByte(totalIgnores);
            WriteUInt32Reverse(charUID);
            WriteParsedString(charName);
        }
    }
}
