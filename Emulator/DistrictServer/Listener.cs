#define ENABLE_PACKET_SAVING

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
            bool done = false, first_packet = true;
            UdpClient receivingUdpClient = new UdpClient(Port);
            receivingUdpClient.DontFragment = true;
            receivingUdpClient.EnableBroadcast = true;
            Log.Notice("Listener", "Starting UDP server on port " + Port);
            uint[] key = null;
            string enc = null, dec = null;
            #if ENABLE_PACKET_SAVING
            int count = 1;
            #endif
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    enc = ByteToString(receiveBytes);
                    Console.WriteLine("Data:\n\n" + enc + "\n\n");

                    if (!first_packet)
                    {
                        key = new uint[Program.xtea_key.Length / 4];
                        Buffer.BlockCopy(Program.xtea_key, 0, key, 0, Program.xtea_key.Length);
                        byte[] result = XTEA.Code(receiveBytes, key, XTEA.Mode.Decrypt);
                        dec = ByteToString(result);
                        Console.WriteLine("Data (decrypted):\n\n" + dec + "\n\n");
                    }

                    #if ENABLE_PACKET_SAVING
                    StreamWriter file = new StreamWriter(first_packet == true ? "Packets\\first_packet.log" : "Packets\\packet" + count + ".log");
                    file.WriteLine(first_packet == true ? enc :  "Encrypted: " + enc + " || Decrypted: " + dec);
                    file.Close();
                    if(!first_packet) count++;
                    #endif

                    first_packet = false;
                }
                catch (Exception e)
                {
                    Log.Error("District.Listener", "Following exception was thrown when trying to receive UDP packet:\n\n");
                    Console.WriteLine(e.ToString());
                    return;
                }
            }
        }

        public static string ByteToString(byte[] array)
        {
            return BitConverter.ToString(array).Replace('-', ' ');
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