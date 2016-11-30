using System;

namespace DistrictServer
{
    public static class XTEA
    {
        public enum Mode
        {
            Encrypt,
            Decrypt
        }

        public static byte[] Code(byte[] data, uint[] k, Mode mode)
        {
            uint[] v = new uint[(int)Math.Ceiling((float)data.Length / 4)];
            Buffer.BlockCopy(data, 0, v, 0, data.Length);

            unchecked
            {
                const uint DELTA = 0x9e3779b9;
                uint y = 0, z = 0, sum = 0, p = 0, rounds = 0, e = 0;
                int n = v.Length;
                Func<uint> MX = () => (((z >> 5 ^ y << 2) + (y >> 3 ^ z << 4)) ^ ((sum ^ y) + (k[(p & 3) ^ e] ^ z)));

                if (mode == Mode.Encrypt)
                {
                    rounds = (uint)(6 + 52 / n);
                    z = v[n - 1];
                    do
                    {
                        sum += DELTA;
                        e = (sum >> 2) & 3;
                        for (p = 0; p < n - 1; p++)
                        {
                            y = v[p + 1];
                            z = v[p] += MX();
                        }
                        y = v[0];
                        z = v[n - 1] += MX();
                    } while (--rounds > 0);
                }
                else
                {
                    rounds = (uint)(6 + 52 / n);
                    sum = rounds * DELTA;
                    y = v[0];
                    do
                    {
                        e = (sum >> 2) & 3;
                        for (p = (uint)(n - 1); p > 0; p--)
                        {
                            z = v[p - 1];
                            y = v[p] -= MX();
                        }
                        z = v[n - 1];
                        y = v[0] -= MX();
                    } while ((sum -= DELTA) != 0);
                }
            }

            byte[] rvl = new byte[v.Length * 4];
            Buffer.BlockCopy(v, 0, rvl, 0, rvl.Length);
            return rvl;
        }

        public static string ByteToHexBitFiddle(byte[] bytes)
        {
            char[] c = new char[bytes.Length * 2];
            int b;
            for (int i = 0; i < bytes.Length; i++)
            {
                b = bytes[i] >> 4;
                c[i * 2] = (char)(55 + b + (((b - 10) >> 31) & -7));
                b = bytes[i] & 0xF;
                c[i * 2 + 1] = (char)(55 + b + (((b - 10) >> 31) & -7));
            }
            return new string(c);
        }
    }
}