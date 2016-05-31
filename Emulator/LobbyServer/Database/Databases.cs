using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using MyDB;

namespace LobbyServer
{
    public static class Databases
    {
        private static Database rebornAPB = new Database("127.0.0.1", 3306, "root", "", "rapb");
        public static Table<AccountEntry> AccountTable = new Table<AccountEntry>(rebornAPB);
        public static Table<CharacterEntry> CharacterTable = new Table<CharacterEntry>(rebornAPB);

        public static void Load(bool first_load = false)
        {
            AccountTable.Load();
            CharacterTable.Load();
            if(first_load) Reset();
        }

        private static void Reset()
        {
            foreach (AccountEntry acc in Databases.AccountTable.Select(a => a.InUse == 1))
            {
                AccountEntry ac = acc;
                ac.InUse = 0;
                Databases.AccountTable.Update(ac);
            }

            foreach (CharacterEntry chr in Databases.CharacterTable.Select(c => c.IsOnline == 1))
            {
                CharacterEntry ch = chr;
                ch.IsOnline = 0;
                ch.DistrictID = 0;
                ch.DistrictType = 0;
                ch.LFG = 0;
                ch.GroupStatus = 0;
                ch.GroupInvite = 0;
                ch.IsGroupPublic = 0;
                Databases.CharacterTable.Update(ch);
            }
        }
    }
}
