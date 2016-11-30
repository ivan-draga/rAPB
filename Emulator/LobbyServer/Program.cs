using LobbyServer.RpcFile;
using FrameWork;
using FrameWork.Logger;
using System;
using System.Collections.Generic;
using System.Timers;

namespace LobbyServer
{
    public enum GameVersion
    {
        INVALID = 0,
        RTW_CB = 1,
        RTW_DVD = 2,
        RTW_LAST = 3,
        G1_LATEST = 4,
        G1_ENGUPD = 5
    };

    class Program
    {
        static public FileManager FileMgr;
        static public World.Listener worldListener;
        static public List<byte> worlds = new List<byte>();
        static public List<LobbyClient> clients = new List<LobbyClient>();
        static public GameVersion version = GameVersion.INVALID;

        [STAThread]
        static void Main(string[] args)
        {
            Log.Info("LobbyServer", "Starting...");
            if (!EasyServer.InitLog("Lobby", "Configs/Logs.conf") || !EasyServer.InitConfig("Configs/Lobby.xml", "Lobby") || !EasyServer.InitConfig("Configs/Database.xml", "Database")) return;
            if (!EasyServer.Listen<TcpServer>(EasyServer.GetConfValue<int>("Lobby", "LoginServer", "Port"), "LoginServer")) return;
            worldListener = new World.Listener(EasyServer.GetConfValue<string>("Lobby", "WorldListener", "IP"), EasyServer.GetConfValue<int>("Lobby", "WorldListener", "Port"));
            Databases.InitDB();
            Databases.Load(true);
            FileMgr = new FileManager();
            string sVersion = EasyServer.GetConfValue<string>("Lobby", "LoginServer", "GameVersion");
            if(sVersion != "RTW_CB" && sVersion != "RTW_DVD" && sVersion != "RTW_LAST")
            {
                Log.Error("ERROR", "Invalid game version!");
                return;
            }
            else
            {
                if (sVersion == "RTW_CB")
                {
                    version = GameVersion.RTW_CB;
                    Log.Info("Version", "Supported game version: 0.6.0.509927 (RTW closed beta)");
                }
                else if (sVersion == "RTW_DVD")
                {
                    version = GameVersion.RTW_DVD;
                    Log.Info("Version", "Supported game version: 1.1.0.534979 (RTW DVD release)");
                }
                else if (sVersion == "RTW_LAST")
                {
                    version = GameVersion.RTW_LAST;
                    Log.Info("Version", "Supported game version: 1.4.1.555239 (last RTW patch)");
                }
                else if (sVersion == "G1_LATEST")
                {
                    version = GameVersion.G1_LATEST;
                    Log.Info("Version", "Supported game version: 1.19.4.766569 (latest G1 patch)");
                }
                else if (sVersion == "G1_ENGUPD")
                {
                    version = GameVersion.G1_ENGUPD;
                    Log.Info("Version", "Supported game version: 2.0.0.750394 (G1 engine update)");
                }
                else version = GameVersion.INVALID;
            }
            Log.Succes("LobbyServer", "Server initialisation complete!");
            clients.Clear();
            worlds.Clear();
            Timer aTimer = new Timer(10000);
            aTimer.Elapsed += OnTimedEvent;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
            Log.Enter();
            Console.WriteLine("For available console commands, type /commands");
            Log.Enter();
            bool done = false;
            while (!done)
            {
                string command;
                command = Console.ReadLine();
                ProccessCommand(command);
            }
            EasyServer.StartConsole();
        }

        static void ProccessCommand(string command)
        {
            if (command == "/commands")
            {
                Log.Enter();
                Console.WriteLine("Available commands:");
                Console.WriteLine("/commands - shows this list of commands");
                Console.WriteLine("/shutdown - shuts down server");
                Console.WriteLine("/clients - total clients connected");
                Console.WriteLine("/worlds - total world servers connected");
                Console.WriteLine("/clear console - clear console from logs");
            }
            else if (command.Contains("/shutdown"))
            {
                Console.WriteLine("Login server shutting down in 3 seconds...");
                System.Threading.Thread.Sleep(3000);
                Environment.Exit(2);
            }
            else if (command.Contains("/clients"))
            {
                int count = 0;
                foreach (LobbyClient client in clients)
                {
                    count++;
                    Console.WriteLine("Name: " + client.Account.Username);
                    Console.WriteLine("ID: " + count);
                    Console.WriteLine("isGM: " + client.Account.IsAdmin);
                }
                Log.Enter();
                Console.WriteLine("Total clients connected to login server: " + count);
                count = 0;
            }
            else if (command.Contains("/worlds"))
            {
                Console.WriteLine("Total worlds connected to login server: " + worlds.Count);
            }
            else if (command.Contains("/clear console"))
            {
                Console.Clear();
            }
            else Console.WriteLine("ERROR: Unknown command \"" + command + "\"");
        }

        private static void OnTimedEvent(object source, ElapsedEventArgs e)
        {
            Databases.Load(false);
        }
    }
}
