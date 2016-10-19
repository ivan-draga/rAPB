namespace DistrictServer.Unreal.Utilities
{
    public class BitReader
    {
        private int Num, Pos;
        private byte[] Data;

        public BitReader(byte[] Src, int CountBits)
        {
            Num = CountBits;
            Pos = 0;
            if (Src != null)
            {
                Data = new byte[((CountBits + 7) >> 3)];
                for (int i = 0; i < Src.Length; i++) Data[i] = Src[i];
            }
        }

        public void SetData(ref BitReader Src, int CountBits)
        {
            Num = CountBits;
            Pos = 0;
            Src.Data = null;
            Src.Data = new byte[((CountBits + 7) >> 3)];
            Src.SerializeBits(Src.Data, CountBits);
        }

        public void SerializeBits(byte[] Dest, int LengthBits)
        {
            if (Pos + LengthBits <= Num)
            {
                Functions.appBitsCpy(Dest, 0, Dest, Pos, LengthBits);
                Pos += LengthBits;
            }
        }
    }
}
