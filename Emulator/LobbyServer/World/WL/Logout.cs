using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LobbyServer.World.WL
{
    class Logout : Packet, IPacket
    {
        public Logout() : base()
        { }

        public void Handle(World world)
        {
            Position = 0;
            String username = ReadS();
            int size = ReadByte();
            byte[] buffer = new byte[size];
            int r = Read(buffer, 0, size);
            Program.logouts.Add(username, buffer);
        }
    }
}
