using System;
using System.IO;

namespace LobbyServer.World.LW
{
    public class Packet : MemoryStream
    {
        public Packet() : base() { }

        public void WriteD(UInt32 value)
        {
            WriteByte((Byte)(value >> 24));
            WriteByte((Byte)((value >> 16) & 0xff));
            WriteByte((Byte)((value & 0xffff) >> 8));
            WriteByte((Byte)((value & 0xffff) & 0xff));
        }
    }
}
