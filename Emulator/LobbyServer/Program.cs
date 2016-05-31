using LobbyServer.RpcFile;
using FrameWork;
using FrameWork.Logger;
using System;
using System.Net;
using System.Collections.Generic;
using System.Timers;

namespace LobbyServer
{
    class Program
    {
        static public byte[] Version;
        static public int Build = 0;
        static public FileManager FileMgr;
        static public World.Listener worldListener;
        static public List<Byte> worlds = new List<Byte>();
        static public List<LobbyClient> clients = new List<LobbyClient>();
        static public Dictionary<String, Byte[]> logouts = new Dictionary<String, Byte[]>();

        [STAThread]
        static void Main(string[] args)
        {
            Log.Info("LobbyServer", "Starting...");
            if (!EasyServer.InitLog("Lobby", "Configs/LobbyLog.conf") || !EasyServer.InitConfig("Configs/Lobby.xml", "Lobby") || !EasyServer.InitConfig("Configs/Database.xml", "Database")) return;
            if (!EasyServer.Listen<TcpServer>(EasyServer.GetConfValue<int>("Lobby", "ClientServer", "Port"), "ClientServer")) return;
            worldListener = new World.Listener(EasyServer.GetConfValue<String>("Lobby", "Worlds", "Ip"), EasyServer.GetConfValue<int>("Lobby", "Worlds", "Port"));
            Databases.InitDB();
            Databases.Load(true);
            FileMgr = new FileManager();
            string[] sVersion = EasyServer.GetConfValue<string>("Lobby", "ClientServer", "Version").Split('.');
            Build = EasyServer.GetConfValue<int>("Lobby", "ClientServer", "Build");
            Version = new byte[sVersion.Length];
            for (int i = 0; i < Version.Length; ++i) Version[i] = byte.Parse(sVersion[i]);
            Log.Info("LobbyServer", "Version = " + Version[0] + "." + Version[1] + "." + Version[2] + " : Build = " + Build);
            Log.Succes("LobbyServer", "Server initialisation complete!");
            clients.Clear();
            worlds.Clear();
            Log.Enter();
            Console.WriteLine("For available console commands, type /commands");
            Log.Enter();
            Timer aTimer = new Timer(10000);
            aTimer.Elapsed += OnTimedEvent;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
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
                Byte count = 0;
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
