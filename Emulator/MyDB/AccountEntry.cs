namespace MyDB
{
    [DatabaseTable("accounts")]
    public struct AccountEntry
    {
        public int Index;
        public string Username;
        public string Password;
        public string Verifier;
        public string Salt;
        public int RTW_Points;
        public byte IsAdmin;
        public byte IsBanned;
        public byte InUse;
        public byte extrn_login;
        public byte CanHostDistrict;
        public string Token;
    }
}
