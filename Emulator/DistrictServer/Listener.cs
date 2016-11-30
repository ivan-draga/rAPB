//#define ENABLE_PACKET_SAVING

using System;
using System.Net;
using System.Net.Sockets;
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
            #if ENABLE_PACKET_SAVING
            int count = 1;
            #endif
            byte[] some_data = new byte[50];
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    string data1 = BitConverter.ToString(receiveBytes);
                    string data2 = data1.Replace('-', ' ');
                    Console.WriteLine("Data:\n\n" + data2 + "\n\n");
                    UdpClient client = new UdpClient();
                    IPEndPoint ip = new IPEndPoint(IPAddress.Broadcast, Port);
                    if (first_packet)
                    {
                        for(int i = 42, j = 0; i < receiveBytes.Length; i++, j++) some_data[j] = receiveBytes[i];
                        #if ENABLE_PACKET_SAVING
                        StreamWriter file = new StreamWriter("Packets\\_first_packet.log");
                        file.Write(data2);
                        file.Close();
                        #endif
                        first_packet = false;
                        client.Send(some_data, some_data.Length, ip);
                    }
                    else
                    {
                        #if ENABLE_PACKET_SAVING
                        StreamWriter file = new StreamWriter("Packets\\packet" + count + ".log");
                        file.Write(data2);
                        file.Close();
                        count++;
                        #endif
                    }
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