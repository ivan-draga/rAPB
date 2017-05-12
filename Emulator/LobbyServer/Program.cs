using LobbyServer.RpcFile;
using FrameWork;
using FrameWork.Logger;
using System;
using System.Collections.Generic;
using System.Timers;
using System.IO;

namespace LobbyServer
{
    class Program
    {
        static public FileManager FileMgr;
        static public World.Listener worldListener;
        static public List<byte> worlds = new List<byte>();
        static public List<LobbyClient> clients = new List<LobbyClient>();

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

            try
            {
                HttpServer.MapHandlers();
                HttpServer server = new HttpServer();
                server.Start();
            }
            catch
            {
                Log.Error("HTTP", "If you want to use HTTP stuff, start this server with Admin rights");
            }

            Log.Succes("LobbyServer", "Server initialisation complete!");
            clients.Clear();
            worlds.Clear();
            Timer aTimer = new Timer(1000);
            aTimer.Elapsed += OnTimedEvent;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
            string[] dirs = Directory.GetDirectories("ClientFiles");
            foreach (string dir in dirs) Directory.Delete(dir, true);
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
