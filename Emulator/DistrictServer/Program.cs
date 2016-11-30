using FrameWork;
using FrameWork.Logger;
using System;
using System.IO;

namespace DistrictServer
{
    class Program
    {
        public static World.Client World;

        public static Listener listener;

        #region DistrictData

        public static string Password;
        public static byte Type;
        public static byte Language;
        public static byte ID;
        public static string IP;
        public static string Port;
        public static string Token;

        #endregion

        static void Main(string[] args)
        {
            Log.Info("DistrictServer", "Starting...");

            #region District

            if (!EasyServer.InitLog("World", "Configs/Logs.conf") || !EasyServer.InitConfig("Configs/District.xml", "District")) return;
            switch (EasyServer.GetConfValue<string>("District", "District", "Type"))
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

            switch (EasyServer.GetConfValue<string>("District", "District", "Language"))
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

            if ((Type == 21 || Type == 2) && EasyServer.GetConfValue<bool>("District", "District", "Hardcore")) Type += 6;

            #endregion

            Log.Info("World.Client", "Connecting to world at 127.0.0.1:2108...");
            Password = "pass";
            ID = EasyServer.GetConfValue<byte>("District", "District", "Id");
            Port = EasyServer.GetConfValue<string>("District", "District", "Port");
            IP = GetPublicIP();
            try
            {
                string line = null;
                StreamReader file = new StreamReader("Configs\\Client stuff (put into 'Binaries' folder)\\_rtoken.id");
                while ((line = file.ReadLine()) != null) Token = line;
                file.Close();
            }
            catch (FileNotFoundException)
            {
                Log.Error("Token", "\"_rtoken.id\" file not found!");
                return;
            }
            if (IP == null) return;
            World = new World.Client("127.0.0.1", 2108);
            listener = new Listener(Convert.ToInt32(Port));
            EasyServer.StartConsole();
        }

        public static string GetPublicIP()
        {
            string externalIP;
            externalIP = "127.0.0.1";
            return externalIP;

            /*try
            {
                string externalIP;
                externalIP = (new WebClient()).DownloadString("http://checkip.dyndns.org/");
                externalIP = (new Regex(@"\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}")).Matches(externalIP)[0].ToString();
                return externalIP;
            }
            catch { Log.Error("GetPublicIP", "IP retreival failed!"); return null; } */
        }

        // v is the data, k is the key
        // https://en.wikipedia.org/wiki/XXTEA
        public static void Encrypt(uint[] v, uint[] k, int rounds)
        {
            const uint DELTA = 0x9E3779B9;
            uint sum, y, z, e;
            int n, p;

            sum = 0;
            n = v.Length;
            z = v[n - 1];

            while (rounds-- > 0)
            {
                sum += DELTA;
                e = (sum >> 2) & 3;

                for (p = 0; p < (n - 1); p++)
                {
                    y = v[p + 1];
                    z = v[p] += (z >> 5 ^ y << 2) + (y >> 3 ^ z << 4) ^ (sum ^ y) + (k[p & 3 ^ e] ^ z);
                }

                y = v[0];
                z = v[n - 1] += (z >> 5 ^ y << 2) + (y >> 3 ^ z << 4) ^ (sum ^ y) + (k[p & 3 ^ e] ^ z);
            }
        }
    }
}
