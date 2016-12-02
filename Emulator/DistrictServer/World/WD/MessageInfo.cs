using FrameWork.Logger;

namespace DistrictServer.World.WD
{
    class MessageInfo : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            string message = ReadS();
            if(message == "hashes")
            {
                byte[] key = new byte[16];
                Read(key, 0, 16);
                Program.xtea_key = key;
                int len = ReadByte();
                byte[] handshake = new byte[len];
                Read(handshake, 0, len);
                Program.handshake_hash = handshake;
                System.Threading.Thread.Sleep(500);
            }            
            else Log.Debug("Host", message);
        }
    }
}
