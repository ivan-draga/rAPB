using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using FrameWork.Logger;
using Unreal.IO;

public class Listener
{
    private const int listenPort = 2108;
    private static void StartListener()
    {
        bool done = false;
        IPEndPoint groupEP = new IPEndPoint(IPAddress.Any, listenPort);
        UdpClient listener = new UdpClient(groupEP);
        Log.Notice("Listener", "Waiting for broadcast");
        try
        {
            while (!done)
            {
                byte[] bytes = listener.Receive(ref groupEP);
                Log.Info("Listener", "Client " + groupEP.ToString() + " is trying to connect");
                listener.Connect(groupEP);
                Log.Succes("Listener", "Listener connected to client " + groupEP.ToString());
                done = true;
                //TODO - rest of district server connecting
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