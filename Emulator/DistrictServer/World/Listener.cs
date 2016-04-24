//#define ENABLE_PACKET_SAVING

using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using FrameWork.Logger;
using Unreal.IO;

public class Listener
{
    private const int listenPort = 2121;
    private static void StartListener()
    {
        bool done = false;
        IPEndPoint groupEP = new IPEndPoint(IPAddress.Any, listenPort);
        UdpClient listener = new UdpClient(groupEP);
        Log.Notice("Listener", "Waiting for broadcast");
        #if ENABLE_PACKET_SAVING
        int count = 0;
        #endif
        try
        {
            while (!done)
            {
                byte[] bytes = listener.Receive(ref groupEP);
                String data = BitConverter.ToString(bytes);
                Log.Info("District", "Data:\n" + data);
                String new_data = data.Replace('-', ' ');
                byte[] byte_data = Encoding.ASCII.GetBytes(new_data);
                #if ENABLE_PACKET_SAVING
                string file = "Logs\\District Packets\\packet" + count + ".log";
                FileStream f = File.Open(file, FileMode.Create);
                f.Write(byte_data, 0, byte_data.Length);
                f.Close();
                f.Dispose();
                Logger.ShowInfo("Client packet #"+count+" saved.");
                count++;
                #endif
            }
        }
        catch (Exception e)
        {
            FrameWork.Logger.Log.Error("Listener", e.ToString());
        }
        finally
        {
            listener.Close();
        }
    }

    public static int Start()
    {
        StartListener();
        return 0;
    }
}