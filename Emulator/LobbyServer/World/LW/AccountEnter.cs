using System;

namespace LobbyServer.World.LW
{
    class AccountEnter : Packet
    {
        public AccountEnter(UInt32 accountId, UInt32 characterId, Byte[] sessionId)
        {
            WriteByte((Byte)OpCodes.LW_ACCOUNT_ENTER);
            WriteD(accountId);
            WriteD(characterId);
            Write(sessionId, 0, 40);
        }
    }
}
