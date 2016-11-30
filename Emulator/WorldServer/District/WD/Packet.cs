using System.IO;

namespace WorldServer.Districts.WD
{
    public class Packet : MemoryStream
    {
        public Packet() : base() { }

        public void WriteS(string s)
        {
            WriteByte((byte)s.Length);
            for (int i = 0; i < s.Length; i++) WriteByte((byte)s[i]);
        }

        public void WriteD(uint value)
        {
            WriteByte((byte)(value >> 24));
            WriteByte((byte)((value >> 16) & 0xff));
            WriteByte((byte)((value & 0xffff) >> 8));
            WriteByte((byte)((value & 0xffff) & 0xff));
        }
    }
}
