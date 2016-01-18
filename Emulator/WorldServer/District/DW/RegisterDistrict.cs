using FrameWork.Logger;
using FrameWork;
using System;
using System.Net;
using System.Net.Sockets;
using System.Collections.Generic;
using System.Threading;
using WorldServer.Districts.WD;

namespace WorldServer.Districts.DW
{
    class RegisterDistrict : Packet, IPacket
    {
        public RegisterDistrict() : base() { }

        public void Handle(District district)
        {
            Position = 0;
            Byte type = (Byte)ReadByte();
            Byte ID = (Byte)ReadByte();
            LanguageCodes language = (LanguageCodes)ReadByte();
            TcpClient client = district.tcp;
            String regpass = ReadS();
            String IP = ReadS();
            IPEndPoint address = (IPEndPoint)district.tcp.Client.RemoteEndPoint;
            switch ((DistrictTypes)type)
            {
                case DistrictTypes.FINANCIAL:
                    district = new FinancialDistrict(ID, language);
                    break;
                case DistrictTypes.FINANCIAL_HARDCORE:
                    district = new FinancialDistrict(ID, language, true);
                    break;
                case DistrictTypes.SOCIAL:
                    district = new SocialDistrict(ID);
                    break;
                case DistrictTypes.TUTORIAL:
                    district = new TutorialDistrict(ID);
                    break;
                case DistrictTypes.WATERFRONT:
                    district = new WaterFrontDistrict(ID, language);
                    break;
                case DistrictTypes.WATERFRONT_HARDCORE:
                    district = new WaterFrontDistrict(ID, language, true);
                    break;
            }

            district.tcp = client;
            Log.Info("RegisterDistrict", district.ToString() + " tries to register.");
            if (ID != 0)
            {
                district.Id = ID;
                lock (Program.districtsListener.Districts)
                {
                    UInt32 code = (UInt32)(district.Type << 24);
                    code += district.Id;
                    foreach (KeyValuePair<UInt32, District> dist in Program.districtsListener.Districts)
                    {
                        if (dist.Value.IP == IP && Program.districtsListener.Districts.ContainsKey(code))
                        {
                            Program.districtsListener.Districts.Remove(code);
                            break;
                        }
                        else if (dist.Value.IP != IP && Program.districtsListener.Districts.ContainsKey(code))
                        {
                            Log.Error("RegisterDistrict", "Fail try of district registration that already exists!");
                            break;
                        }
                    }
                    Program.districtsListener.Districts.Add(code, district);
                }
                Log.Succes("RegisterDistrict", district + " was registered! (" + IP + ")");
                district.IP = IP;
                district.Send(new DBInfo(Database.Connection.connectionString));
            }
            else
            {
                Log.Error("RegisterDistrict", "Invalid ID! Please choose an ID that's not 0.");
                System.Threading.Thread.Sleep(3000);
                Environment.Exit(2);
            }
        }
    }
}
