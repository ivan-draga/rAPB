using System.IO;

namespace LobbyServer.World.LW
{
    public class Packet : MemoryStream
    {
        public Packet() : base() { }

        public void WriteD(uint value)
        {
            WriteByte((byte)(value >> 24));
            WriteByte((byte)((value >> 16) & 0xff));
            WriteByte((byte)((value & 0xffff) >> 8));
            WriteByte((byte)((value & 0xffff) & 0xff));
        }
    }
}
