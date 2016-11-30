using FrameWork.Logger;

namespace WorldServer.Lobby.LW
{
    class AccountEnter : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            uint accountId = ReadD();
            uint charId = ReadD();
            byte[] sessionId = new byte[40];
            Read(sessionId, 0, 40);
            lock (Program.expectingAccounts)
            {
                Program.expectingAccounts.Add(accountId, new Acc(charId, sessionId));
            }
            Log.Succes("AccountEnter", "Account " + accountId + " now can connect to the world!");
        }
    }
}
