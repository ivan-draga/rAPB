﻿using System;
using System.Security.Cryptography;
using System.Text;
using FrameWork.NetWork.Crypto;

namespace LobbyServer.SRP
{
    public class ServerModulus
    {
        public BigInteger b;
        public BigInteger B;
        public ServerModulus(BigInteger serverModulus, BigInteger privateServerModulus)
        {
            B = serverModulus;
            b = privateServerModulus;
        }
    }

    public class Auth
    {
        public static readonly BigInteger N = new BigInteger("D4C7F8A2B32C11B8FBA9581EC4BA4F1B04215642EF7355E37C0FC0443EF756EA2C6B8EEB755A1C723027663CAA265EF785B8FF6A9B35227A52D86633DBDFCA43", 16);
        public static readonly BigInteger G = BigInteger.Two;
        public static readonly BigInteger K = new BigInteger("B7867F1299DA8CC24AB93E08986EBC4D6A478AD0", 16);
        public static BigInteger computeVerifier(Byte[] salt, String name, String password)
        {
            Byte[] partA = Encoding.ASCII.GetBytes(name);
            Byte[] partB = Encoding.ASCII.GetBytes(password);
            Byte[] credentials = new Byte[20];
            FrameWork.NetWork.Sha1Digest digest = new FrameWork.NetWork.Sha1Digest();
            digest.BlockUpdate(partA, 0, partA.Length);
            digest.BlockUpdate(Encoding.ASCII.GetBytes(":"), 0, 1);
            digest.BlockUpdate(partB, 0, partB.Length);
            digest.DoFinal(credentials, 0);
            digest.Reset();
            digest.BlockUpdate(salt, 0, salt.Length);
            digest.BlockUpdate(credentials, 0, credentials.Length);
            digest.DoFinal(credentials, 0);
            BigInteger x = new BigInteger(1, credentials);
            return G.ModPow(x, N);
        }

        public static ServerModulus computeServerModulus(BigInteger verifier)
        {
            BigInteger b = new BigInteger(8 * 64, new Random());
            FrameWork.NetWork.Sha1Digest digest = new FrameWork.NetWork.Sha1Digest();
            Console.WriteLine("N = " + N.ToString(16));
            Console.Write("G = ");
            for (int i = 0; i < G.ToByteArrayUnsigned().Length; i++)
            {
                Console.Write(" " + G.ToByteArrayUnsigned()[i]);

            } 
            Console.WriteLine();
            Console.WriteLine("b: " + b.ToString(16));
            Console.WriteLine("B: " + verifier.Multiply(K).Add(G.ModPow(b, N)).Remainder(N).ToString(16));
            return new ServerModulus(verifier.Multiply(K).Add(G.ModPow(b, N)).Remainder(N), b);
        }

        public static Byte[] computeProof(String username, ServerModulus serverModulus, BigInteger clientModulus, BigInteger verifier, Byte[] salt, out Byte[] sessionId)
        {
            FrameWork.NetWork.Sha1Digest digest = new FrameWork.NetWork.Sha1Digest();
            Byte[] a = clientModulus.ToByteArrayUnsigned();
            Byte[] b = serverModulus.B.ToByteArrayUnsigned();
            Byte[] binU = new Byte[20];
            digest.BlockUpdate(a, 0, a.Length);
            digest.BlockUpdate(b, 0, b.Length);
            digest.DoFinal(binU, 0);
            digest.Reset();
            BigInteger U = new BigInteger(1, binU);
            Console.WriteLine("U: " + U.ToString(16));
            Console.WriteLine("A: " + clientModulus.ToString(16));
            Console.WriteLine("b: " + serverModulus.b.ToString(16));
            BigInteger S = verifier.ModPow(U, N).Multiply(clientModulus).Mod(N).ModPow(serverModulus.b, N);
            Console.WriteLine("S: " + S.ToString(16));
            Byte[] sessionKey = MGF1(S.ToByteArrayUnsigned());
            sessionId = sessionKey;
            Console.Write("SK = ");
            for (int i = 0; i < sessionKey.Length; i++)
            {
                Console.Write(" " + sessionKey[i]);

            } 
            Console.WriteLine();
            Byte[] hashN = new Byte[20];
            Byte[] hashG = new Byte[20];
            digest.BlockUpdate(N.ToByteArrayUnsigned(), 0, N.ToByteArrayUnsigned().Length);
            digest.DoFinal(hashN, 0);
            digest.Reset();
            digest.BlockUpdate(G.ToByteArrayUnsigned(), 0, G.ToByteArrayUnsigned().Length);
            digest.DoFinal(hashG, 0);
            digest.Reset();
            Byte[] un = Encoding.ASCII.GetBytes(username);
            digest.BlockUpdate(un, 0, un.Length);
            un = new Byte[20];
            digest.DoFinal(un, 0);
            digest.Reset();
            for (int i = 0; i < 20; i++) hashN[i] ^= hashG[i];
            Console.Write("Hash:");
            for (int i = 0; i < hashN.Length; i++)
            {
                Console.Write(" " + hashN[i]);

            } 
            Console.WriteLine();
            Byte[] proof = new Byte[20];
            digest.BlockUpdate(hashN, 0, hashN.Length);
            digest.BlockUpdate(un, 0, un.Length);
            digest.BlockUpdate(salt, 0, salt.Length);
            digest.BlockUpdate(clientModulus.ToByteArrayUnsigned(), 0, clientModulus.ToByteArrayUnsigned().Length);
            digest.BlockUpdate(serverModulus.B.ToByteArrayUnsigned(), 0, serverModulus.B.ToByteArrayUnsigned().Length);
            digest.BlockUpdate(sessionKey, 0, sessionKey.Length);
            digest.DoFinal(proof, 0);
            digest.Reset();
            return proof;
        }

        private static Byte[] getEvenBytes(Byte[] array)
        {
            Byte[] result = new Byte[array.Length / 2];
            for (int i = 0; i < result.Length; i++) result[i] = array[i * 2];
            return result;
        }

        private static Byte[] getOddBytes(Byte[] array)
        {
            Byte[] result = new Byte[array.Length / 2];
            for (int i = 0; i < result.Length; i++) result[i] = array[i * 2 + 1];
            return result;
        }

        private static Byte[] interleave(Byte[] a, Byte[] b)
        {
            Byte[] result = new Byte[40];
            for (int i = 0; i < 20; i++)
            {
                result[i * 2] = a[i];
                result[i * 2 + 1] = b[i];
            }
            return result;
        }

        static public void Reverse<T>(T[] buffer, int length)
        {
            for (int i = 0; i < length / 2; i++)
            {
                T temp = buffer[i];
                buffer[i] = buffer[length - i - 1];
                buffer[length - i - 1] = temp;
            }
        }

        public static byte[] MGF1(byte[] seed)
        {
            UInt32 i = 0;
            int pos = 0;
            Byte[] cnt = new Byte[4];
            Byte[] hout = new Byte[20];
            FrameWork.NetWork.Sha1Digest digest = new FrameWork.NetWork.Sha1Digest();
            Byte[] mask = new Byte[40];
            int masklen = 40;
            while (pos < masklen)
            {
                cnt[0] = (Byte)((i >> 24) & 0xFF);
                cnt[1] = (Byte)((i >> 16) & 0xFF);
                cnt[2] = (Byte)((i >> 8) & 0xFF);
                cnt[3] = (Byte)(i & 0xFF);
                digest.Reset();
                digest.BlockUpdate(seed, 0, seed.Length);
                digest.BlockUpdate(cnt, 0, 4);
                if (pos + 20 > masklen)
                {
                    digest.DoFinal(hout, 0);
                    Buffer.BlockCopy(mask, pos, hout, 0, masklen - pos);
                    pos = masklen;
                }
                else
                {
                    digest.DoFinal(mask, pos);
                    pos += 20;
                }
                ++i;
            }
            return mask;
        }

        private static Byte[] I2OSP(int i)
        {
            Byte[] cnt = new Byte[4];
            cnt[0] = (Byte)((i >> 24) & 0xFF);
            cnt[1] = (Byte)((i >> 16) & 0xFF);
            cnt[2] = (Byte)((i >> 8) & 0xFF);
            cnt[3] = (Byte)(i & 0xFF);
            return cnt;
        }

    }
}