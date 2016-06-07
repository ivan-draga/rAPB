using FrameWork.NetWork;
using FrameWork.Logger;
using WorldServer.Districts;
using System;
using System.Collections.Generic;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_DISTRICT_RESERVE : PacketOut
    {
        public ANS_DISTRICT_RESERVE(UInt32 code, UInt32 charUID, Byte group, WorldClient client) : base((UInt32)Opcodes.ANS_DISTRICT_RESERVE)
        {
            UInt32 soc = 16777216;
            UInt32 fin = 2 * soc;
            UInt32 wat = fin * 10 + soc;
            lock (Program.districtsListener.Districts)
            {
                foreach (KeyValuePair<UInt32, District> district in Program.districtsListener.Districts)
                {
                    if (code - soc < 100) if (district.Value.Type == (Byte)DistrictTypes.SOCIAL) client.Reserved = new SocialDistrict(district.Value.Id);
                    if (code - fin < 100) if (district.Value.Type == (Byte)DistrictTypes.FINANCIAL) client.Reserved = new FinancialDistrict(district.Value.Id);
                    if (code - wat < 100) if (district.Value.Type == (Byte)DistrictTypes.WATERFRONT) client.Reserved = new WaterFrontDistrict(district.Value.Id);

                    if(client.Reserved != null)
                    {
                        if (district.Value.isFull() == 0)
                        {
                            client.Reserved.Key = district.Key;
                            client.Reserved.Id = district.Value.Id;
                            client.Reserved.IP = district.Value.IP;
                            client.Reserved.Port = district.Value.Port;
                            client.Reserved.Criminals = district.Value.Criminals;
                            client.Reserved.Enforcers = district.Value.Enforcers;
                            client.Reserved.Queue = district.Value.Queue;
                            client.Reserved.tcp = district.Value.tcp;
                            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            WriteUInt32(client.Reserved.Key);
                            WriteByte(group);
                            WriteByte(0);
                            client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                        }
                    }
                    else
                    {
                        WriteUInt32Reverse((uint)ResponseCodes.RC_DISTRICT_RESERVE_INVALID_DISTRICT);
                        WriteUInt32(0);
                        WriteByte(0);
                        WriteByte(0);
                    }
                }
            }
        }
    }
}
