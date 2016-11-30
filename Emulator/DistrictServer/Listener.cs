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
            bool done = false;
            UdpClient receivingUdpClient = new UdpClient(Port);
            receivingUdpClient.DontFragment = true;
            receivingUdpClient.EnableBroadcast = true;
            Log.Notice("Listener", "Starting UDP server on port " + Port);
            bool first_packet = true;
            string data1 = null, data2 = null, data3 = null, data4 = null;
            uint[] key = null;
            #if ENABLE_PACKET_SAVING
            int count = 1;
            #endif
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    data1 = BitConverter.ToString(receiveBytes);
                    data2 = data1.Replace('-', ' ');
                    Console.WriteLine("Data:\n\n" + data2 + "\n\n");

                    if (!first_packet)
                    {
                        key = new uint[Program.xtea_key.Length / 4];
                        Buffer.BlockCopy(Program.xtea_key, 0, key, 0, Program.xtea_key.Length);
                        byte[] result = XTEA.Code(receiveBytes, key, XTEA.Mode.Decrypt); //do stuff with this
                        data3 = BitConverter.ToString(result);
                        data4 = data3.Replace('-', ' ');
                        Console.WriteLine("Data (decrypted):\n\n" + data4 + "\n\n");
                    }

                    #if ENABLE_PACKET_SAVING
                    StreamWriter file = new StreamWriter(first_packet == true ? "Packets\\first_packet.log" : "Packets\\packet" + count + ".log");
                    file.WriteLine(first_packet == true ? data2 :  "Encrypted: " + data2 + " || Decrypted: " + data4);
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
    }
}