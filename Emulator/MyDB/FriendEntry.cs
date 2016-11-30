namespace MyDB
{
    [DatabaseTable("friends")]
    public struct FriendEntry
    {
        public int Index;
        public int CharacterOwnerIndex;
        public int CharacterFriendIndex;
    }
}
