using FrameWork.Logger;

namespace DistrictServer.World.WD
{
    class MessageInfo : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            string message = ReadS();
            Log.Debug("Host", message);
        }
    }
}
