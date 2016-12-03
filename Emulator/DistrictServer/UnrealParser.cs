using System.Text;

namespace DistrictServer
{
    public static class UnrealParser
    {
        public static UnrealPacket Parse(byte[] buffer)
        {
            UnrealPacket result = new UnrealPacket();
            int val4000 = 0x4000;
            int val3ff = 0x3ff;
            int val400 = 0x400;
            int val8 = 0x8;
            int val1000 = 0x1000;
            uint b = buffer[buffer.Length - 1];
            int bsize;
            for (bsize = (buffer.Length * 8) - 1; (b & 0x80) != 0; b <<= 1, bsize--);
            b = 0;
            b = read_unrser(ref result.Id, buffer, b, val4000);
            while (b < bsize)
            {
                if (read_bitx(1, buffer, ref b) != 0)
                {
                    b = read_unrser(ref result.AckId, buffer, b, val4000);
                    continue;
                }
                if (read_bitx(1, buffer, ref b) != 0)
                {
                    result.Open = read_bitx(1, buffer, ref b) != 0 ? true : false;
                    result.Close = read_bitx(1, buffer, ref b) != 0 ? true : false;
                }
                else
                {
                    result.Open = false;
                    result.Close = false;
                }
                result.Reliable = read_bitx(1, buffer, ref b) != 0 ? true : false;
                b = read_unrser(ref result.ChIndex, buffer, b, val3ff);
                if (result.Reliable) b = read_unrser(ref result.ChSequence, buffer, b, val400);
                if (result.Reliable || result.Open) b = read_unrser(ref result.ChType, buffer, b, val8);
                else result.ChType = 0;
                int blen = 0;
                b = read_unrser(ref blen, buffer, b, val1000);
                if (result.ChType != 0) b += (uint)blen;
                if (b + blen > bsize) break;
                if (result.ChType != 0)
                {
                    b += (uint)blen;
                    continue;
                }
                uint btmp;
                for (btmp = (uint)(b + blen); b < btmp;)
                {
                    int len = 0;
                    b = read_unrnum(ref len, buffer, b);
                    if ((len < 0) || (len > 1023)) break;
                    byte[] str = new byte[1023];
                    b = read_bitmem(buffer, len, ref str, b);
                    result.Command = Encoding.ASCII.GetString(str);
                    return result;
                }
                b = btmp;
            }
            return result;
        }

        private static uint read_unrser(ref int num, byte[] buffer, uint bits, int max)
        {
            int b;
            num = 0;
            for (b = 1; b != 0 && (b < max); b <<= 1) if (read_bitx(1, buffer, ref bits) != 0) num += b;
            return bits;
        }

        private static uint read_bitx(uint bits, byte[] buffer, ref uint in_bits)
        {
            uint ret;
            ret = read_bits(bits, buffer, ref in_bits);
            in_bits += bits;
            return ret;
        }

        private static uint read_unrnum(ref int num, byte[] buff, uint bits)
        {
            byte[] mini = new byte[5];
            num = 0;
            read_bitmem(buff, 5, ref mini, bits);
            return (uint)(bits + (read_unreal_index(mini, ref num) << 3));
        }

        private static uint read_bitmem(byte[] _in, int inlen, ref byte[] _out, uint bits)
        {
            for (int index = 0; inlen-- != 0; index++) _out[index] = (byte)read_bitx(8, _in, ref bits);
            return bits;
        }

        private static int read_unreal_index(byte[] index_num, ref int ret)
        {
            byte b0 = index_num[0], b1 = index_num[1], b2 = index_num[2], b3 = index_num[3], b4 = index_num[4];
            int len, result;
            result = 0;
            len = 1;
            if ((b0 & 0x40) != 0)
            {
                len++;
                if ((b1 & 0x80) != 0)
                {
                    len++;
                    if ((b2 & 0x80) != 0)
                    {
                        len++;
                        if ((b3 & 0x80) != 0)
                        {
                            len++;
                            result = b4;
                        }
                        result = (result << 7) | (b3 & 0x7f);
                    }
                    result = (result << 7) | (b2 & 0x7f);
                }
                result = (result << 7) | (b1 & 0x7f);
            }
            result = (result << 6) | (b0 & 0x3f);
            if ((b0 & 0x80) != 0) result = -result;
            ret = result;
            return len;
        }

        private static uint read_bits(uint bits, byte[] buffer, ref uint in_bits)
        {
            uint seek_bits, rem, seek = 0, ret = 0, mask = 0xffffffff;
            if (bits > 32) return 0;
            if (bits < 32) mask = (uint)((1 << (byte)bits) - 1);
            while (true)
            {
                seek_bits = in_bits & 7;
                ret |= (uint)(((buffer[in_bits >> 3] >> (byte)seek_bits) & mask) << (byte)seek);
                rem = 8 - seek_bits;
                if (rem >= bits) break;
                bits -= rem;
                in_bits += rem;
                seek += rem;
                mask = (uint)((1 << (byte)bits) - 1);
            }
            return ret;
        }
    }

    public class UnrealPacket
    {
        public int Id = -1, AckId = -1, ChIndex = -1, ChSequence = -1, ChType = -1;
        public bool Open = false, Close = false, Reliable = false;
        public string Command = "null";
        public override string ToString()
        {
            return "[ID:" + Id + "|AckId:" + AckId + "|Open:" + Open + "|Close:" + Close + "|Reliable:" + Reliable + "|ChIndex:" + ChIndex + "|ChSequence:" + ChSequence + "|ChType:" + ChType + "|Command:" + Command + "]";
        }
    }
}