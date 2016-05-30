using FrameWork;
using FrameWork.Logger;
using MySql.Data.MySqlClient;
using MySql.Data;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using Unreal.IO;
using System.IO;
using System.Text.RegularExpressions;
using DistrictServer.World.WD;

namespace DistrictServer
{
    class Program
    {
        public static World.Client World;

        #region DistrictData

        public static String Password;
        public static Byte Type;
        public static Byte Language;
        public static Byte ID;
        public static String IP;
        public static String Port;

        #endregion

        static void Main(string[] args)
        {
            Log.Info("DistrictServer", "Starting...");

            #region District

            if (!EasyServer.InitLog("World", "Configs/DistrictLog.conf") || !EasyServer.InitConfig("Configs/District.xml", "District")) return;
            switch (EasyServer.GetConfValue<String>("District", "District", "Type"))
            {
                case "social":
                    Type = 1;
                    break;
                case "financial":
                    Type = 2;
                    break;
                case "waterfront":
                    Type = 21;
                    break;
                case "tutorial":
                    Type = 14;
                    break;
            }

            switch (EasyServer.GetConfValue<String>("District", "District", "Language"))
            {
                case "en":
                    Language = 0;
                    break;
                case "fr":
                    Language = 1;
                    break;
                case "it":
                    Language = 2;
                    break;
                case "ge":
                    Language = 3;
                    break;
                case "es":
                    Language = 4;
                    break;
                case "ru":
                    Language = 5;
                    break;
            }

            if ((Type == 21 || Type == 2) && EasyServer.GetConfValue<Boolean>("District", "District", "Hardcore")) Type += 6;

            #endregion

            Log.Info("World.Client", "Connecting to world at 127.0.0.1:2108...");
            Password = "pass";
            ID = EasyServer.GetConfValue<Byte>("District", "District", "Id");
            Port = EasyServer.GetConfValue<String>("District", "District", "Port");
            IP = GetPublicIP();
            if (IP == null) { System.Threading.Thread.Sleep(500); Environment.Exit(2); }
            World = new World.Client("127.0.0.1", 2108);
            EasyServer.StartConsole();
        }

        public static string GetPublicIP()
        {
            string externalIP;
            externalIP = "127.0.0.1";
            return externalIP;

            /*
            try
            {
                string externalIP;
                externalIP = (new WebClient()).DownloadString("http://checkip.dyndns.org/");
                externalIP = (new Regex(@"\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}")).Matches(externalIP)[0].ToString();
                return externalIP;
            }
            catch { Log.Error("GetPublicIP", "IP retreival failed!"); return null; } */
        }

    }
}
