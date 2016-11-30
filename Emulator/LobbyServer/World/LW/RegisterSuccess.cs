namespace LobbyServer.World.LW
{
    class RegisterSuccess : Packet
    {
        public RegisterSuccess(uint worldId) : base()
        {
            WriteByte((byte)OpCodes.LW_REGISTER_SUCCESS);
            WriteD(worldId);
        }
    }
}
