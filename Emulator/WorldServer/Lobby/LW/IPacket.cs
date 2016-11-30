namespace WorldServer.Lobby.LW
{
    interface IPacket
    {
        void Write(byte[] buffer, int offset, int count);
        void Handle();
    }
}
