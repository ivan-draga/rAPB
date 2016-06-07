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

        public String Name = "(undefined)";
        public UInt32 Id = 0xFFFFFFFF;

        #region IPAddress

        public Byte IP1;
        public Byte IP2;
        public Byte IP3;
        public Byte IP4;

        #endregion

        public UInt32 Port;
        public Byte Population;

        public World(TcpClient client)
        {
            tcp = client;
        }

        public void Send(Packet packet)
        {
            Byte[] array = packet.ToArray();
            tcp.GetStream().Write(array, 0, array.Length);
            tcp.GetStream().Flush();
        }
    }
}
