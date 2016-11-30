using FrameWork.NetWork;
using System;
using System.Security.Cryptography;

namespace WorldServer.TCP
{
    public class Encryption
    {
        private ARC4 encryption;
        private ARC4 decryption;
        public readonly byte[] Key;
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
            Console.Write("New key:");
            for (int i = 0; i < 20; i++)
            {
                Console.Write(" " + key[i]);
            }
            Console.WriteLine();
            encryption = new ARC4(key);
            decryption = new ARC4(key);
        }

        public byte[] Encrypt(PacketOut packet)
        {
            byte[] data = packet.ToArray();
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
            Console.Write("Dcrptd:");
            for (int i = 0; i < result.ToArray().Length; i++) Console.Write(" "+ result.ToArray()[i]);
            Console.WriteLine();
            return result;
        }
    }
}
