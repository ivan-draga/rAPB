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
            UInt32 social = 16777216;
            UInt32 social_2 = 16777217;
            UInt32 financial = 33554432;
            UInt32 financial_2 = 33554433;
            UInt32 waterfront = 352321536;
            UInt32 waterfront_2 = 352321537;
            if (code != social && code != financial && code != waterfront)
            {
                lock (Program.districtsListener.Districts)
                {
                    foreach (KeyValuePair<UInt32, District> district in Program.districtsListener.Districts)
                    {
                        if (code == social_2)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.SOCIAL)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new SocialDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                        else if (code == financial_2)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.FINANCIAL)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new FinancialDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                        else if (code == waterfront_2)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.WATERFRONT)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new WaterFrontDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            else 
            {
                lock (Program.districtsListener.Districts)
                {
                    foreach (KeyValuePair<UInt32, District> district in Program.districtsListener.Districts)
                    {
                        if (code == social)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.SOCIAL)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new SocialDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                        else if (code == financial)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.FINANCIAL)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new FinancialDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                        else if (code == waterfront)
                        {
                            if (district.Value.Type == (Byte)DistrictTypes.WATERFRONT)
                            {
                                if (district.Value.isFull() == 0)
                                {
                                    client.Reserved = new WaterFrontDistrict(district.Value.Id);
                                    client.Reserved.Key = district.Key;
                                    client.Reserved.Id = district.Value.Id;
                                    client.Reserved.IP = district.Value.IP;
                                    client.Reserved.Criminals = district.Value.Criminals;
                                    client.Reserved.Enforcers = district.Value.Enforcers;
                                    client.Reserved.Queue = district.Value.Queue;
                                    client.Reserved.tcp = district.Value.tcp;
                                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                                    WriteUInt32(client.Reserved.Key);
                                    WriteByte(group);
                                    WriteByte(0);
                                    client.Send(new ANS_DISTRICT_ENTER(client.Reserved, client));
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
