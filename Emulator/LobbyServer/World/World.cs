using LobbyServer.World.LW;

using System;
using System.Net.Sockets;

namespace LobbyServer.World
{
    public class World
    {
        #region Internal

        public TcpClient tcp
        {
            get;
            private set;
        }

        #endregion

        public string Name = "(undefined)";
        public uint Id = 0xFFFFFFFF;

        #region IPAddress

        public byte IP1;
        public byte IP2;
        public byte IP3;
        public byte IP4;

        #endregion

        public uint Port;
        public byte Population;

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
