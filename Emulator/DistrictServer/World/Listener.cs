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
            while (!done)
            {
                IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
                try
                {
                    Byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                    string data1 = BitConverter.ToString(receiveBytes);
                    string data2 = data1.Replace('-', ' ');
                    //string ascii = Encoding.ASCII.GetString(receiveBytes);
                    Console.WriteLine("Data:\n\n" + data2 + "\n\n");
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