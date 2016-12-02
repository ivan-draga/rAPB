namespace MyDB
{
    public class Utils
    {
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

        public static string ByteToBitToString(byte[] array)
        {
            System.Collections.BitArray bits = new System.Collections.BitArray(array);
            string s = null;
            for (int i = 0; i < bits.Count; i++)
            {
                char c = bits[i] ? '1' : '0';
                s += c;
            }
            return s;
        }
    }
}
