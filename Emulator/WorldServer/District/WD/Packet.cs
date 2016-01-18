using System;
using System.IO;

namespace WorldServer.Districts.WD
{
    public class Packet : MemoryStream
    {
        public Packet() : base() { }

        public void WriteS(String s)
        {
            WriteByte((Byte)s.Length);
            for (int i = 0; i < s.Length; i++) WriteByte((Byte)s[i]);
        }

        public void WriteD(UInt32 value)
        {
            WriteByte((Byte)(value >> 24));
            WriteByte((Byte)((value >> 16) & 0xff));
            WriteByte((Byte)((value & 0xffff) >> 8));
            WriteByte((Byte)((value & 0xffff) & 0xff));
        }
    }
}
