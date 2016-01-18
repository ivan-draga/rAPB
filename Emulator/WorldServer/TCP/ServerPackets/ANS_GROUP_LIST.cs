using FrameWork.NetWork;
using System.Collections.Generic;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_GROUP_LIST : PacketOut
    {
        public ANS_GROUP_LIST(UInt32 instanceUID) : base((UInt32)Opcodes.ANS_GROUP_LIST)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32(instanceUID);
            WriteByte(0);
            WriteUInt32Reverse(0); //charUID of leader
            WriteParsedString(""); //leader
            WriteByte(0); //members
            WriteByte(0); //rating
            WriteByte(0); //threat
        }
    }
}
