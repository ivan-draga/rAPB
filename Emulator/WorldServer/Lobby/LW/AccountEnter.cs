using FrameWork.Logger;
using System;

namespace WorldServer.Lobby.LW
{
    class AccountEnter : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            UInt32 accountId = ReadD();
            UInt32 charId = ReadD();
            Byte[] sessionId = new Byte[40];
            Read(sessionId, 0, 40);
            lock (Program.expectingAccounts)
            {
                Program.expectingAccounts.Add(accountId, new Acc(charId, sessionId));
            }
            Log.Succes("AccountEnter", "Account " + accountId + " now can connect to the world!");
        }
    }
}
