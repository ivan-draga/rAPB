using System;

namespace WorldServer.Lobby.WL
{
    class Logout : Packet
    {
        public Logout(String username, Byte[] sessionid) : base()
        {
            WriteByte((Byte)OpCodes.WL_LOGOUT);
            WriteS(username);
            WriteByte((Byte)sessionid.Length);
            Write(sessionid, 0, sessionid.Length);
        }
    }
}
