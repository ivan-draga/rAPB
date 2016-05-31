using FrameWork.Logger;
using System;
using System.IO;

namespace DistrictServer.World.WD
{
    class MessageInfo : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            String message = ReadS();
            Log.Debug("Host", message);
        }
    }
}
