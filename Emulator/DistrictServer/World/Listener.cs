using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using FrameWork.Logger;
using Unreal.IO;
using System.IO;
using FrameWork;

namespace DistrictServer
{
    public class Listener
    {
        public static void StartListener()
        {
            bool done = false;
            UdpClient receivingUdpClient = new UdpClient(Convert.ToInt32(Program.Port));
            receivingUdpClient.DontFragment = true;
            receivingUdpClient.EnableBroadcast = true;
            Log.Notice("Listener", "Starting UDP server on port " + Program.Port);
            bool first_packet = true;
            byte[] some_data = new byte[50];
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    Byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    string data1 = BitConverter.ToString(receiveBytes);
                    string data2 = data1.Replace('-', ' ');
                    Console.WriteLine("Data:\n\n" + data2 + "\n\n");
                    if(first_packet)
                    {
                        for(int i = 42, j = 0; i < receiveBytes.Length; i++, j++) some_data[j] = receiveBytes[i];                        
                        StreamWriter file = new StreamWriter("first_packet.log");
                        file.Write(data2);
                        file.Close();
                        first_packet = false;
                    }
                    UdpClient client = new UdpClient();
                    IPEndPoint ip = new IPEndPoint(IPAddress.Broadcast, Convert.ToInt32(Program.Port));
                    client.Send(some_data, some_data.Length, ip);

                }
                catch (Exception e)
                {
                    Console.WriteLine(e.ToString());
                }
            }
        }

        public static int Start()
        {
            StartListener();
            return 0;
        }
    }
}