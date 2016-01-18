using MySql.Data.MySqlClient;
using MySql.Data.Types;
using LobbyServer.Database;
using LobbyServer.RpcFile;
using FrameWork;
using FrameWork.Logger;
using System;
using System.Net;
using System.Collections.Generic;

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
        [STAThread]
        static void Main(string[] args)
        {
            Log.Info("LobbyServer", "Starting...");
            if (!EasyServer.InitLog("Lobby", "Configs/LobbyLog.conf") || !EasyServer.InitConfig("Configs/Lobby.xml", "Lobby")) return;
            if (!EasyServer.Listen<TcpServer>(EasyServer.GetConfValue<int>("Lobby", "ClientServer", "Port"), "ClientServer")) return;
            worldListener = new World.Listener(EasyServer.GetConfValue<String>("Lobby", "Worlds", "Ip"), EasyServer.GetConfValue<int>("Lobby", "Worlds", "Port"));
            Connection.connectionString = EasyServer.GetConfValue<String>("Lobby", "Database", "ConnectionString");
            MySqlConnection myconnection = new MySqlConnection(Connection.connectionString);
            MySqlCommand cmd = myconnection.CreateCommand();
            MySqlCommand acccmd = new MySqlCommand("CREATE TABLE IF NOT EXISTS `accounts`(`id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT, `email` varchar(50) NOT NULL DEFAULT '', `username` varchar(32) NOT NULL DEFAULT '', `verifier` varchar(128) DEFAULT '', `salt` varchar(20) DEFAULT '', `points` int(11) unsigned, `admin` int(1) unsigned zerofill NOT NULL DEFAULT '0', `banned` tinyint(1) NOT NULL DEFAULT '0', `extrn_login` tinyint(1) NOT NULL DEFAULT '0', `token` varchar(8), `canhost` tinyint(1) NOT NULL DEFAULT '0', UNIQUE KEY `id` (`id`), UNIQUE KEY `username` (`username`), UNIQUE KEY `email` (`email`)) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;", myconnection);
            MySqlCommand charcmd = new MySqlCommand("CREATE TABLE IF NOT EXISTS `characters`(`id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT, `account` int(10) unsigned zerofill NOT NULL, `slot` tinyint(3) unsigned zerofill NOT NULL DEFAULT '001', `name` varchar(32) NOT NULL, `faction` tinyint(1) NOT NULL, `gender` tinyint(1) NOT NULL, `rank` int(3) unsigned, `money` int(11) unsigned, `threat` tinyint(2), `playtime` int(11) unsigned, `clan` varchar(60) NOT NULL DEFAULT 'APB-EMU', `version` int(11) unsigned NOT NULL, `appearence` text NOT NULL, `custom` text NOT NULL, `world` int(10) unsigned zerofill NOT NULL, PRIMARY KEY (`id`,`account`), UNIQUE KEY `characterId` (`id`), UNIQUE KEY `slot` (`account`,`slot`), UNIQUE KEY `characterName` (`name`)) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;", myconnection);
            MySqlCommand statcmd = new MySqlCommand("CREATE TABLE IF NOT EXISTS `clientstatus`(`name` varchar(32) NOT NULL, `districtID` tinyint(1), `districtType` tinyint(1), `online` tinyint(1), `lfg` tinyint(1), `grpstatus` tinyint(1) , `grppub` tinyint(1), `grpinv` tinyint(1), UNIQUE KEY `name` (`name`)) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;", myconnection);
            try
            {
                myconnection.Open();
                acccmd.ExecuteNonQuery();
                charcmd.ExecuteNonQuery();
                statcmd.ExecuteNonQuery();
                myconnection.Close();
                Log.Succes("MySql", "Database connected!");
            }
            catch (MySqlException e) { Log.Error("MySql Error", e.ToString()); }

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
                    Console.WriteLine("Name: " + client.Account.Email);
                    Console.WriteLine("ID: " + count);
                    Console.WriteLine("isGM: " + client.Account.Admin);
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
    }
}
