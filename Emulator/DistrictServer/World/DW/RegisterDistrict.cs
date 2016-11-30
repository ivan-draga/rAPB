namespace DistrictServer.World.DW
{
    class RegisterDistrict : Packet
    {
        public RegisterDistrict(byte type, byte Id, byte language, string password, string IP, string Port, string Token) : base()
        {
            WriteByte((byte)OpCodes.WD_REGISTER_DISTRICT);
            WriteByte(type);
            WriteByte(Id);
            WriteByte(language);
            WriteS(password);
            WriteS(IP);
            WriteS(Port);
            WriteS(Token);
        }
    }
}
