using MyDB;
using FrameWork;

namespace LobbyServer
{
    public static class Databases
    {
        private static Database rebornAPB;
        public static Table<AccountEntry> AccountTable; 
        public static Table<CharacterEntry> CharacterTable;

        public static void InitDB()
        {
            rebornAPB = new Database(EasyServer.GetConfValue<string>("Database", "Database", "IP"), EasyServer.GetConfValue<int>("Database", "Database", "Port"), EasyServer.GetConfValue<string>("Database", "Database", "Username"), EasyServer.GetConfValue<string>("Database", "Database", "Password"), EasyServer.GetConfValue<string>("Database", "Database", "Database"));
            AccountTable = new Table<AccountEntry>(rebornAPB);
            CharacterTable = new Table<CharacterEntry>(rebornAPB);
        }

        public static void Load(bool first_load = false)
        {
            AccountTable.Load();
            CharacterTable.Load();
            if(first_load) Reset();
        }

        private static void Reset()
        {
            foreach (AccountEntry acc in AccountTable.Select(a => a.InUse == 1))
            {
                AccountEntry ac = acc;
                ac.InUse = 0;
                AccountTable.Update(ac);
            }

            foreach (CharacterEntry chr in CharacterTable.Select(c => c.IsOnline == 1))
            {
                CharacterEntry ch = chr;
                ch.IsOnline = 0;
                ch.DistrictID = 0;
                ch.DistrictType = 0;
                ch.LFG = 0;
                ch.GroupStatus = 0;
                ch.GroupInvite = 0;
                ch.IsGroupPublic = 0;
                CharacterTable.Update(ch);
            }
        }
    }
}
