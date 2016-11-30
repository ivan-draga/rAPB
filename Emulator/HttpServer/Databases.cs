using MyDB;
using FrameWork;

namespace HttpServer
{
    public static class Databases
    {
        private static Database rebornAPB;
        public static Table<AccountEntry> AccountTable;

        public static void InitDB()
        {
            rebornAPB = new Database(EasyServer.GetConfValue<string>("Database", "Database", "IP"), EasyServer.GetConfValue<int>("Database", "Database", "Port"), EasyServer.GetConfValue<string>("Database", "Database", "Username"), EasyServer.GetConfValue<string>("Database", "Database", "Password"), EasyServer.GetConfValue<string>("Database", "Database", "Database"));
            AccountTable = new Table<AccountEntry>(rebornAPB);
        }

        public static void Load()
        {
            AccountTable.Load();
        }
    }
}
