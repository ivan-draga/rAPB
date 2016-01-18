using System;
using System.IO;
using System.Text;

namespace WorldServer.Lobby.LW
{
    class Packet : MemoryStream
    {
        public Packet() : base() { }

        protected String ReadS()
        {
            int length = ReadByte();
            if (length > Length - Position) return "";
            Byte[] str = new Byte[length];
            Read(str, 0, length);
            return Encoding.ASCII.GetString(str);
        }

        protected UInt32 ReadD()
        {
            return (uint)((ReadByte() << 24) | (ReadByte() << 16) | (ReadByte() << 8) | ReadByte());
        }
    }
}
