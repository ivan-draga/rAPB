using System;
using System.Net.Sockets;

namespace LobbyServer.World.WL
{
    interface IPacket
    {
        void Write(byte[] buffer, int offset, int count);
        void Handle(World world);
    }
}
