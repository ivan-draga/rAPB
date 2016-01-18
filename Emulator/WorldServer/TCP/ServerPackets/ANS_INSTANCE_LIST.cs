using WorldServer.Districts;

using FrameWork.NetWork;

using System;
using System.Collections.Generic;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_INSTANCE_LIST : PacketOut
    {
        public ANS_INSTANCE_LIST() : base((UInt32)Opcodes.ANS_INSTANCE_LIST)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            lock (Program.districtsListener.Districts)
            {
                WriteUInt16Reverse((UInt16)Program.districtsListener.Districts.Count);
                foreach (KeyValuePair<UInt32, District> district in Program.districtsListener.Districts)
                {
                    WriteUInt32(district.Key);
                    WriteUInt16Reverse(district.Value.Enforcers);
                    WriteUInt16Reverse(district.Value.Criminals);
                    WriteByte(district.Value.isFull());
                    WriteUInt16Reverse(district.Value.Queue);
                }
            }
        }
    }
}
