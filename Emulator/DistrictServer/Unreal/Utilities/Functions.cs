namespace DistrictServer.Unreal.Utilities
{
    public class Functions
    {
        public static void appBitsCpy(byte[] Dest, int DestBit, byte[] Src, int SrcBit, int BitCount)
        {
            uint DestIndex, SrcIndex, LastDest, LastSrc;
            if (BitCount == 0) return;
            if (BitCount <= 8)
            {
                DestIndex = (uint)(DestBit / 8);
                SrcIndex = (uint)(SrcBit / 8);
                LastDest = (uint)((DestBit + BitCount - 1) / 8);
                LastSrc = (uint)((SrcBit + BitCount - 1) / 8);
                uint ShiftSrc = (uint)(SrcBit & 7);
                uint ShiftDest = (uint)(DestBit & 7);
                uint FirstMask = (uint)0xFF << (int)ShiftDest;
                uint LastMask = (uint)(0xFE << ((DestBit + BitCount - 1) & 7));
                uint Accu;
                if (SrcIndex == LastSrc) Accu = (uint)(Src[SrcIndex] >> (byte)ShiftSrc);
                else Accu = (uint)((Src[SrcIndex] >> (byte)ShiftSrc) | (Src[LastSrc] << (8 - (byte)ShiftSrc)));
                if (DestIndex == LastDest)
                {
                    uint MultiMask = FirstMask & ~LastMask;
                    Dest[DestIndex] = (byte)((Dest[DestIndex] & ~MultiMask) | (((byte)Accu << (byte)ShiftDest) & MultiMask));
                }
                else
                {
                    Dest[DestIndex] = (byte)((Dest[DestIndex] & ~FirstMask) | (((byte)Accu << (byte)ShiftDest) & FirstMask));
                    Dest[LastDest] = (byte)((Dest[LastDest] & LastMask) | (((byte)Accu >> (byte)(8 - ShiftDest)) & ~LastMask));
                }
                return;
            }

            DestIndex = (uint)(DestBit / 8);
            uint FirstSrcMask = (uint)(0xFF << (DestBit & 7));
            LastDest = (uint)((DestBit + BitCount) / 8);
            uint LastSrcMask = (uint)(0xFF << ((DestBit + BitCount) & 7));
            SrcIndex = (uint)(SrcBit / 8);
            LastSrc = (uint)((SrcBit + BitCount) / 8);
            int ShiftCount = (DestBit & 7) - (SrcBit & 7);
            int DestLoop = (int)(LastDest - DestIndex);
            int SrcLoop = (int)(LastSrc - SrcIndex);
            uint FullLoop;
            uint BitAccu;

            if (ShiftCount >= 0)
            {
                FullLoop = (uint)(SrcLoop - DestLoop); //Max(DestLoop, SrcLoop);
                BitAccu = (uint)(Src[SrcIndex] << ShiftCount);
                ShiftCount += 8;
            }
            else
            {
                ShiftCount += 8;
                FullLoop = (uint)((SrcLoop - 1) - DestLoop); //Max(DestLoop, SrcLoop - 1);
                BitAccu = (uint)(Src[SrcIndex] << ShiftCount);
                SrcIndex++;
                ShiftCount += 8; 
                BitAccu = (((uint)Src[SrcIndex] << ShiftCount) + (BitAccu)) >> 8;
            }

            Dest[DestIndex] = (byte)((BitAccu & FirstSrcMask) | (Dest[DestIndex] & ~FirstSrcMask));
            SrcIndex++;
            DestIndex++;

            for (; FullLoop > 1; FullLoop--)
            {   
                BitAccu = (((uint)Src[SrcIndex] << ShiftCount) + (BitAccu)) >> 8;
                SrcIndex++;
                Dest[DestIndex] = (byte)BitAccu; 
                DestIndex++;
            }

            if (LastSrcMask != 0xFF)
            {
                if ((uint)(SrcBit + BitCount - 1) / 8 == SrcIndex) BitAccu = (((uint)Src[SrcIndex] << ShiftCount) + (BitAccu)) >> 8;
                else BitAccu = BitAccu >> 8;
                Dest[DestIndex] = (byte)((Dest[DestIndex] & LastSrcMask) | (BitAccu & ~LastSrcMask));
            }
        }
    }
}
