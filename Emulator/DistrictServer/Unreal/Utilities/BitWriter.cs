namespace DistrictServer.Unreal.Utilities
{
    public class BitWriter
    {
        private int Num, Max;
        private byte[] Dest;

        public BitWriter(int InMaxBits)
        {
            Num = 0;
            Max = InMaxBits;
            Dest = new byte[((InMaxBits + 7) >> 3)];
        }

        public void Serialize(byte[] Src, int LengthBytes)
        {
            int LengthBits = LengthBytes * 8;
            if (Num + LengthBits <= Max)
            {
                Functions.appBitsCpy(Dest, Num, Src, 0, LengthBits);
                Num += LengthBits;
            }
        }
    }
}
