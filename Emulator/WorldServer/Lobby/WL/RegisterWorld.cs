using System;

namespace WorldServer.Lobby.WL
{
    class RegisterWorld : Packet
    {
        public RegisterWorld(String worldName, String password, Byte ID)
            : base()
        {
            WriteByte((Byte)OpCodes.WL_REGISTER_WORLD);
            WriteS(worldName);
            WriteS(password);
            WriteByte(ID);
        }
    }
}
