using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_NAME_QUERY : PacketOut
    {
        public ANS_NAME_QUERY(UInt16 type, UInt32 charUID, String charname, WorldClient client) : base((UInt32)Opcodes.ANS_NAME_QUERY)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt16Reverse(type);
            WriteUInt32Reverse(charUID);
            WriteParsedString(charname);
            //WritePascalString ?
        }
    }
}
