//#define ENABLE_PACKET_SAVING

using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using FrameWork.Logger;
using Unreal.IO;
using System.IO;
using SmartEngine.Network;
using FrameWork;

public class Listener
{
    

    public static void StartListener()
    {
        bool done = false;

        UdpClient receivingUdpClient = new UdpClient(EasyServer.GetConfValue<int>("District", "District", "Port"));
        receivingUdpClient.DontFragment = true;
        receivingUdpClient.EnableBroadcast = true;
        Log.Notice("Listener", "Starting UDP server on port " + EasyServer.GetConfValue<int>("District", "District", "Port"));

        string file = "Logs\\District Packets\\packets" + ".log";
        System.IO.StreamWriter f = new System.IO.StreamWriter(file);
        bool firstpacket = false;
        while (!done)
        {
            
            IPEndPoint RemoteIpEndPoint = new IPEndPoint(IPAddress.Any, 0);
            try
            {
                Byte[] receiveBytes = receivingUdpClient.Receive(ref RemoteIpEndPoint);
                string returnData = BitConverter.ToString(receiveBytes);
                string returnAscii = Encoding.ASCII.GetString(receiveBytes);

                int length = receiveBytes.Length;
                
                XTEA.Decrypt(ref receiveBytes, ref length, 0, null);


                Log.Dump("Listener", RemoteIpEndPoint.Port.ToString() + ": " + returnData.ToString());
                if (!firstpacket)
                {
                    f.WriteLine(returnData);
                    f.Dispose();

                    Log.Notice("Listener", "First packet received...");
                }
                firstpacket = true;
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