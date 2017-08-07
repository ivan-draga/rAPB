using FrameWork;
using FrameWork.Logger;
using System;
using System.Collections.Generic;
using WorldServer.Districts;
using WorldServer.Lobby;
using System.Timers;

namespace WorldServer
{
    class Program
    {
        static public Dictionary<uint, Acc> expectingAccounts = new Dictionary<uint, Acc>();
        static public Listener districtsListener;
        static public List<WorldClient> clients = new List<WorldClient>();
        static public byte ID;
        static public uint WorldId;
        static public string WorldName;
        static public string Password;
        static public byte IP1;
        static public byte IP2;
        static public byte IP3;
        static public byte IP4;
        static public int Port;
        static public Client Lobby;

        static void Main(string[] args)
        {
            Log.Info("WorldServer", "Starting...");
            if (!EasyServer.InitLog("World", "Configs/Logs.conf") || !EasyServer.InitConfig("Configs/World.xml", "World") || !EasyServer.InitConfig("Configs/Database.xml", "Database")) return;
            Port = EasyServer.GetConfValue<int>("World", "WorldServer", "Port");
            IP1 = EasyServer.GetConfValue<byte>("World", "WorldServer", "IP1");
            IP2 = EasyServer.GetConfValue<byte>("World", "WorldServer", "IP2");
            IP3 = EasyServer.GetConfValue<byte>("World", "WorldServer", "IP3");
            IP4 = EasyServer.GetConfValue<byte>("World", "WorldServer", "IP4");
            if (!EasyServer.Listen<TcpServer>(Port, "WorldInfo")) return;
            Databases.InitDB();
            Databases.Load(false);
            Password = EasyServer.GetConfValue<string>("World", "LobbyCommunication", "Password");
            WorldName = EasyServer.GetConfValue<string>("World", "WorldInfo", "Name");
            ID = EasyServer.GetConfValue<byte>("World", "WorldInfo", "Id");
            Lobby = new Client(EasyServer.GetConfValue<string>("World", "LobbyCommunication", "Ip"), EasyServer.GetConfValue<int>("World", "LobbyCommunication", "Port"));
            districtsListener = new Listener(EasyServer.GetConfValue<string>("World", "DistrictListener", "Ip"), EasyServer.GetConfValue<int>("World", "DistrictListener", "Port"));
            clients.Clear();
            Timer aTimer = new Timer(1000);
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
                Console.WriteLine("/clear clientstatus - clear 'clientstatus' table in database");
                Console.WriteLine("/clear console - clear console from logs");
                Console.WriteLine("/clients - total clients connected");
                Console.WriteLine("/districts - total districts connected");
                Log.Enter();
            }
            else if (command.Contains("/shutdown"))
            {
                Log.Enter();
                Console.WriteLine("World server shutting down in 3 seconds...");
                System.Threading.Thread.Sleep(3000);
                Environment.Exit(2);
            }
            else if (command.Contains("/clear console"))
            {
                Console.Clear();
            }
            else if (command.Contains("/clients"))
            {
                Log.Enter();
                int count = 0;
                foreach (WorldClient client in clients)
                {
                    count++;
                    Console.WriteLine("Name: " + client.Character.Name);
                    Console.WriteLine("ID: " + count);
                    Console.WriteLine("isGM: " + client.Account.IsAdmin);
                    Log.Enter();
                }
                Console.WriteLine("Total clients connected to world server: " + count);
                count = 0;
                Log.Enter();
            }
            else if (command.Contains("/districts"))
            {
                Log.Enter();
                int count = 0;
                foreach (KeyValuePair<uint, District> district in districtsListener.Districts)
                {
                    count++;
                    Console.WriteLine("IP: " + district.Value.IP);
                    Console.WriteLine("Port: " + district.Value.Port.ToString());
                    Console.WriteLine("ID: " + district.Value.Id);
                    Console.WriteLine("Type: " + district.Value.Type);
                    Console.WriteLine("Enforcers: " + district.Value.Enforcers);
                    Console.WriteLine("Criminals: " + district.Value.Criminals);
                    Console.WriteLine("Full: " + district.Value.isFull());
                    Log.Enter();
                }
                Console.WriteLine("Total districts connected to world server: " + count);
                count = 0;
                Log.Enter();
            }
            else Console.WriteLine("ERROR: Unknown command \"" + command + "\"");
        }

        private static void OnTimedEvent(object source, ElapsedEventArgs e)
        {
            Databases.Load(false);
        }
    }
}
