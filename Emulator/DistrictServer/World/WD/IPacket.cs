namespace DistrictServer.World.WD
{
    interface IPacket
    {
        void Write(byte[] buffer, int offset, int count);
        void Handle();
    }
}
