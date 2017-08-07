using LobbyServer.World.LW;
using System.Net.Sockets;

namespace LobbyServer.World
{
    public class World
    {
        public TcpClient tcp
        {
            get;
            private set;
        }

        public string Name = "(undefined)";
        public uint Id = 0xFFFFFFFF;
        public byte IP1;
        public byte IP2;
        public byte IP3;
        public byte IP4;
        public uint Port;

        public World(TcpClient client)
        {
            tcp = client;
        }

        public void Send(Packet packet)
        {
            byte[] array = packet.ToArray();
            tcp.GetStream().Write(array, 0, array.Length);
            tcp.GetStream().Flush();
        }
    }
}
