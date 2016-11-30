namespace MyDB
{
    [DatabaseTable("ignores")]
    public struct IgnoreEntry
    {
        public int Index;
        public int CharacterOwnerIndex;
        public int CharacterIgnoreIndex;
    }
}
