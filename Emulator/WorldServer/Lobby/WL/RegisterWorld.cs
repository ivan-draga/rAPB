namespace WorldServer.Lobby.WL
{
    class RegisterWorld : Packet
    {
        public RegisterWorld(string worldName, string password, byte ID) : base()
        {
            WriteByte((byte)OpCodes.WL_REGISTER_WORLD);
            WriteS(worldName);
            WriteS(password);
            WriteByte(ID);
        }
    }
}
