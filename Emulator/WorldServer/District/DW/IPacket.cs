using System;
using System.Net.Sockets;

namespace WorldServer.Districts.DW
{
    interface IPacket
    {
        void Write(byte[] buffer, int offset, int count);
        void Handle(District district);
    }
}
