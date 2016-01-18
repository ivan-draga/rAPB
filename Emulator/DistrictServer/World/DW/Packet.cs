using System;
using System.IO;

namespace DistrictServer.World.DW
{
    class Packet : MemoryStream
    {
        public Packet() : base() { }

        protected void WriteS(String s)
        {
            WriteByte((Byte)s.Length);
            for (int i = 0; i < s.Length; i++) WriteByte((Byte)s[i]);
        }

        protected void WriteD(UInt32 value)
        {
            WriteByte((Byte)(value >> 24));
            WriteByte((Byte)((value >> 16) & 0xff));
            WriteByte((Byte)((value & 0xffff) >> 8));
            WriteByte((Byte)((value & 0xffff) & 0xff));
        }
    }
}
