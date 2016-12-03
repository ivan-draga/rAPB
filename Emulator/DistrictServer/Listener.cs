using System;
using System.Net;
using System.Net.Sockets;
using System.IO;
using FrameWork.Logger;

namespace DistrictServer
{
    public class Listener
    {
        public Listener(int Port)
        {
            bool done = false;
            UdpClient receivingUdpClient = new UdpClient(Port);
            receivingUdpClient.DontFragment = true;
            receivingUdpClient.EnableBroadcast = true;
            Log.Notice("Listener", "Starting UDP server on port " + Port);
            uint[] key = null;
            string enc = null, dec = null;
            int count = 0;
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    enc = ByteToHexBitFiddle(receiveBytes);
                    Console.WriteLine("Data:\n\n" + enc + "\n\n");
                    StreamWriter file = new StreamWriter("Packets\\packet" + count + ".log");
                    if (!IsFirstPacket(receiveBytes))
                    {
                        key = new uint[Program.xtea_key.Length / 4];
                        Buffer.BlockCopy(Program.xtea_key, 0, key, 0, Program.xtea_key.Length);
                        byte[] result = XTEA.Code(receiveBytes, key, XTEA.Mode.Decrypt);
                        dec = ByteToHexBitFiddle(result);
                        Console.WriteLine("Data (decrypted):\n\n" + dec + "\n\n");
                        try
                        {
                            UnrealPacket p = UnrealParser.Parse(result);
                            Console.WriteLine("\n\n" + p.ToString() + "\n\n");
                            file.WriteLine("Encrypted: " + enc + " || Decrypted: " + dec + " || UnrealPacket: " + p.ToString());
                        }
                        catch(Exception ex)
                        {
                            Console.WriteLine(ex.ToString());
                        }                        
                    }
                    else file.WriteLine("Data: " + enc + " || Key: " + ByteToHexBitFiddle(Program.xtea_key) + " || Handshake: " + ByteToHexBitFiddle(Program.handshake_hash));
                    file.Close();
                    count++;
                }
                catch (Exception e)
                {
                    Log.Error("District.Listener", "Following exception was thrown when trying to receive UDP packet:\n\n");
                    Console.WriteLine(e.ToString());
                    return;
                }
            }
        }

        public static byte[] first_packet_header = new byte[42]
        {
            0x00, 0x00, 0x00, 0x80, 0x05, 0x20, 0x80,
            0x60, 0xC9, 0x11, 0x00, 0x00, 0x40, 0x50,
            0x15, 0x15, 0x12, 0x48, 0xD0, 0xD0, 0x50,
            0x12, 0x51, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C,
            0x0C, 0x0C, 0x0C, 0x0C, 0x4C, 0x0C, 0x48,
            0x50, 0x15, 0x15, 0xD2, 0x52, 0x51, 0x56
        };

        public static bool IsFirstPacket(byte[] data)
        {
            byte[] header = new byte[42];
            Buffer.BlockCopy(data, 0, header, 0, 42);
            int count = 0;
            for (int i = 0; i < 42; i++) if (header[i] == first_packet_header[i]) count++;
            if (count == 42) return true;
            else return false;
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