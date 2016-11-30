using System.IO;
using System.Text;

namespace LobbyServer.World.WL
{
    public class Packet : MemoryStream
    {
        public Packet() : base() { }

        protected string ReadS()
        {
            int length = ReadByte();
            if (length > Length - Position) return "";
            byte[] str = new byte[length];
            Read(str, 0, length);
            return Encoding.ASCII.GetString(str);
        }

        protected uint ReadD()
        {
            return (uint)((ReadByte() << 24) | (ReadByte() << 16) | (ReadByte() << 8) | ReadByte());
        }
    }
}
