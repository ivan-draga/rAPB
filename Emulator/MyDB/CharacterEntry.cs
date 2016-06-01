using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyDB
{
    [DatabaseTable("characters")]
    public struct CharacterEntry
    {
        public int Index;
        public int AccountIndex;
        public string Name;
        public Byte Slot;
        public Byte Gender;
        public Byte Faction;
        public int Rank;
        public int Money;
        public Byte Threat;
        public int Playtime;
        public string Clan;
        public Byte Version;
        public string Appearance;
        public int World;
        public Byte IsOnline;
        public Byte DistrictID;
        public Byte DistrictType;
        public Byte LFG;
        public Byte GroupStatus;
        public Byte IsGroupPublic;
        public Byte GroupInvite;
    }
}
