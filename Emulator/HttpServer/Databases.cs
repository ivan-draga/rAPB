using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyDB;
using FrameWork;
using FrameWork.Logger;

namespace HttpServer
{
    public static class Databases
    {
        private static MyDB.Database rebornAPB;
        public static Table<AccountEntry> AccountTable;

        public static void InitDB()
        {
            rebornAPB = new MyDB.Database(EasyServer.GetConfValue<String>("Database", "Database", "IP"), EasyServer.GetConfValue<int>("Database", "Database", "Port"), EasyServer.GetConfValue<String>("Database", "Database", "Username"), EasyServer.GetConfValue<String>("Database", "Database", "Password"), EasyServer.GetConfValue<String>("Database", "Database", "Database"));
            AccountTable = new Table<AccountEntry>(rebornAPB);
            
        }

        public static void Load()
        {
            AccountTable.Load();
        }
    }
}
