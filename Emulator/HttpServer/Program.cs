using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using FrameWork;
using System.Timers;

namespace HttpServer
{
    class Program
    {
        static void Main(string[] args)
        {
            if(!EasyServer.InitConfig("Configs/Database.xml", "Database")) return;
            Databases.InitDB();
            Databases.Load();
            HttpServer.MapHandlers();
            HttpServer server = new HttpServer();
            server.Start();
            Timer aTimer = new Timer(10000);
            aTimer.Elapsed += OnTimedEvent;
            aTimer.AutoReset = true;
            aTimer.Enabled = true;
            Console.ReadLine();
        }

        private static void OnTimedEvent(object source, ElapsedEventArgs e)
        {
            Databases.Load();
        }
    }
}
