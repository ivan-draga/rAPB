namespace MyDB
{
    [DatabaseTable("characters")]
    public struct CharacterEntry
    {
        public int Index;
        public int AccountIndex;
        public string Name;
        public byte Slot;
        public byte Gender;
        public byte Faction;
        public int Rank;
        public int Money;
        public int JokerTickets;
        public int Playtime;
        public string Clan;
        public byte Version;
        public string Appearance;
        public int World;
        public byte IsOnline;
        public byte DistrictID;
        public byte DistrictType;
        public byte LFG;
        public byte GroupStatus;
        public byte IsGroupPublic;
        public byte GroupInvite;
    }
}
