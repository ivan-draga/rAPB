using FrameWork.NetWork;
using FrameWork.Logger;
using WorldServer.Districts;
using System;
using WorldServer.TCP;
using WorldServer.Districts.WD;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_DISTRICT_ENTER : PacketOut
    {
        public ANS_DISTRICT_ENTER(District district, WorldClient client) : base((UInt32)Opcodes.ANS_DISTRICT_ENTER)
        {
            if (district != null)
            {
                //tell district server to start server on 6969
                WriteInt32((int)ResponseCodes.RC_SUCCESS);
                string[] delimiter = new string[] { "." };
                string[] result = district.IP.Split(delimiter, StringSplitOptions.None);
                foreach (string s in result) WriteByte(Convert.ToByte(s));
                
                WriteUInt16Reverse(Program.districtPort);
                WriteInt32Reverse(TcpServer.GetTimeStamp());
                Log.Notice("World.DistrictEnter", "District port expected to be hosting on port 6969!");

            }
            else WriteUInt32Reverse((uint)ResponseCodes.RC_DISTRICT_RESERVE_DISTRICT_OFFLINE);
        }
    }
}