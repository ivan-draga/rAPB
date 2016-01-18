using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using FrameWork.NetWork;

namespace WorldServer
{
    public class TcpServer : TCPManager
    {
        public TcpServer() : base()
        {
            PacketOut.SizeLen = sizeof(UInt32);
            PacketOut.OpcodeInLen = true;
            PacketOut.OpcodeReverse = true;
            PacketOut.SizeReverse = true;
            BaseClient.DisconnectOnNullByte = true;

        }

        protected override BaseClient GetNewClient()
        {
            WorldClient client = new WorldClient(this);
            return client;
        }
    }
}
