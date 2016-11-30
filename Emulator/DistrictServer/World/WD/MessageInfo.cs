using FrameWork.Logger;

namespace DistrictServer.World.WD
{
    class MessageInfo : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            string message = ReadS();
            if(message == "key")
            {
                byte[] key = new byte[16];
                Read(key, 0, 16);
                Program.xtea_key = key;
                System.Threading.Thread.Sleep(500);
            }            
            else Log.Debug("Host", message);
        }
    }
}
