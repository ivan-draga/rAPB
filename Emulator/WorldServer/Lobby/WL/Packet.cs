using System.IO;

namespace WorldServer.Lobby.WL
{
    class Packet : MemoryStream
    {
        public Packet() : base() { }

        protected void WriteS(string s)
        {
            WriteByte((byte)s.Length);
            for (int i = 0; i < s.Length; i++) WriteByte((byte)s[i]);
        }

        protected void WriteD(uint value)
        {
            WriteByte((byte)(value >> 24));
            WriteByte((byte)((value >> 16) & 0xff));
            WriteByte((byte)((value & 0xffff) >> 8));
            WriteByte((byte)((value & 0xffff) & 0xff));
        }
    }
}
