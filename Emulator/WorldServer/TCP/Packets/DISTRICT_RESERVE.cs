using FrameWork.NetWork;
using System.Collections.Generic;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_DISTRICT_RESERVE, "onAskDistrictReserve")]
    public class DISTRICT_RESERVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint code = packet.GetUint32();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_DISTRICT_RESERVE);
            uint soc = 16777216;
            uint fin = 2 * soc;
            uint wat = fin * 10 + soc;
            lock (Program.districtsListener.Districts)
            {
                foreach (KeyValuePair<uint, Districts.District> district in Program.districtsListener.Districts)
                {
                    if (code - soc < 100) if (district.Value.Type == (byte)Districts.DistrictTypes.SOCIAL) cclient.Reserved = new Districts.SocialDistrict(district.Value.Id);
                    if (code - fin < 100) if (district.Value.Type == (byte)Districts.DistrictTypes.FINANCIAL) cclient.Reserved = new Districts.FinancialDistrict(district.Value.Id);
                    if (code - wat < 100) if (district.Value.Type == (byte)Districts.DistrictTypes.WATERFRONT) cclient.Reserved = new Districts.WaterFrontDistrict(district.Value.Id);

                    if (cclient.Reserved != null)
                    {
                        if (district.Value.isFull() == 0)
                        {
                            cclient.Reserved.Key = district.Key;
                            cclient.Reserved.Id = district.Value.Id;
                            cclient.Reserved.IP = district.Value.IP;
                            cclient.Reserved.Port = district.Value.Port;
                            cclient.Reserved.Criminals = district.Value.Criminals;
                            cclient.Reserved.Enforcers = district.Value.Enforcers;
                            cclient.Reserved.Queue = district.Value.Queue;
                            cclient.Reserved.tcp = district.Value.tcp;
                            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            Out.WriteUInt32(cclient.Reserved.Key);
                            Out.WriteByte(0); //group
                            Out.WriteByte(0);
                            DISTRICT_ENTER.SendDistrictEnter(cclient);
                        }
                    }
                    else
                    {
                        Out.WriteUInt32Reverse((uint)ResponseCodes.RC_DISTRICT_RESERVE_INVALID_DISTRICT);
                        Out.WriteUInt32(0);
                        Out.WriteByte(0);
                        Out.WriteByte(0);
                    }
                }
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
