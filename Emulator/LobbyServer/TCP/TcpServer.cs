using FrameWork.NetWork;

namespace LobbyServer
{
    public class TcpServer : TCPManager
    {
        public TcpServer() : base()
        {
            PacketOut.SizeLen = sizeof(uint);
            PacketOut.OpcodeInLen = true;
            PacketOut.OpcodeReverse = true;
            PacketOut.SizeReverse = true;
            BaseClient.DisconnectOnNullByte = true;
        }

        protected override BaseClient GetNewClient()
        {
            LobbyClient client = new LobbyClient(this);
            return client;
        }
    }
}
