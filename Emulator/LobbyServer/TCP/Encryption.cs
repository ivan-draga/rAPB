using FrameWork.NetWork;
using FrameWork.Logger;
using System;
using System.Security.Cryptography;

namespace LobbyServer.TCP
{
    public class Encryption
    {
        private ARC4 encryption;
        private ARC4 decryption;
        public byte[] Key;

        private string DumpData(byte[] buffer)
        {
            string tmp2 = "";
            for (int i = 0; i < buffer.Length; i++)
            {
                tmp2 += (string.Format("{0:X2} ", buffer[i]));
                if (((i + 1) % 16 == 0) && (i != 0)) tmp2 += "\r\n";
            }
            return tmp2;
        }

        public Encryption(byte[] key = null)
        {
            if (key == null)
            {
                key = new byte[8];
                Random generator = new Random();
                generator.NextBytes(key);
                generator = null;
            }
            Key = key;
            SHA1 digest = new SHA1CryptoServiceProvider();
            key = digest.ComputeHash(key);
            digest.Dispose();
            Log.Info("[ENCRYPTION-KEY]", DumpData(key));
            encryption = new ARC4(key);
            decryption = new ARC4(key);
        }

        public byte[] Encrypt(PacketOut packet)
        {
            byte[] data = packet.ToArray();
            Log.Info("[SERVER PRE-ENCRYPT]", DumpData(data));
            encryption.Process(data, 4, data.Length - 4);
            return data;
        }

        public PacketIn Decrypt(PacketIn packet)
        {
            byte[] data = packet.ToArray();
            decryption.Process(data, 4, data.Length - 4);
            PacketIn result = new PacketIn(data, 0, data.Length);
            result.Size = result.GetUint32Reversed();
            result.Opcode = result.GetUint32Reversed();
            Log.Info("[CLIENT POST-ENCRYPT]", DumpData(data));
            return result;
        }

        public void SetKey(byte[] key)
        {
            Key = key;
            SHA1 digest = new SHA1CryptoServiceProvider();
            key = digest.ComputeHash(key);
            digest.Dispose();
            Log.Info("[ENCRYPTION-KEY]", DumpData(key));
            encryption = new ARC4(key);
            decryption = new ARC4(key);
        }
    }
}
