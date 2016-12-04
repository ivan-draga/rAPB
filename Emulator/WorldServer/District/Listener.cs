using FrameWork.Logger;
using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Threading;
using System.Net;

namespace WorldServer.Districts
{
    class Listener
    {
        private TcpListener tcpListener;
        private Thread listenThread;
        private string IP;
        private int Port;

        public Dictionary<uint, District> Districts
        {
            get;
            private set;
        }

        public Dictionary<TcpClient, uint> DistrictsTcp
        {
            get;
            private set;
        }

        public Listener(string ip, int port)
        {
            Districts = new Dictionary<uint, District>();
            DistrictsTcp = new Dictionary<TcpClient, uint>();
            IPAddress address = IPAddress.Any;
            try
            {
                address = IPAddress.Parse(ip);
            }
            catch
            { }

            IP = address.ToString();
            Port = port;
            tcpListener = new TcpListener(address, port);
            listenThread = new Thread(new ThreadStart(listenForClients));
            listenThread.Start();
        }

        private void listenForClients()
        {
            try
            {
                tcpListener.Start();
            }
            catch (SocketException)
            {
                Log.Error("Districts.Listener", "Failed to bind to the address " + IP + ":" + Port + "! Retry in 5 seconds.");
                Thread.Sleep(5 * 1000);
                listenForClients();
            }
            Log.Succes("Districts.Listener", "Expecting districts to connect at " + IP + ":" + Port);
            while (true)
            {
                TcpClient client = tcpListener.AcceptTcpClient();
                Thread clientThread = new Thread(new ParameterizedThreadStart(handleDistrict));
                clientThread.Start(client);
            }
        }

        private void handleDistrict(object client)
        {
            TcpClient tcpClient = (TcpClient)client;
            District district = new District(tcpClient);
            NetworkStream clientStream = tcpClient.GetStream();
            byte[] message = new byte[4096];
            int bytesRead;
            while (true)
            {
                bytesRead = 0;
                try
                {
                    bytesRead = clientStream.Read(message, 0, message.Length);
                }
                catch
                {
                    break;
                }

                if (bytesRead == 0)
                {
                    break;
                }
                else
                {
                    byte[] data = new byte[bytesRead];
                    Buffer.BlockCopy(message, 0, data, 0, bytesRead);

                    if(GetValue(data[0]) == 0) //initial packet id
                    {
                        int type = GetValue(data[1]);
                        byte ID = (byte)GetValue(data[2]);
                        LanguageCodes language = (LanguageCodes)GetValue(data[3]);
                        //TODO: receive IP, Port, Token
                        RegisterDistrict.Register(district, tcpClient, type, ID, language, "127.0.0.1", "6969", "55759563");
                    }
                }
            }
            try
            {
                lock (DistrictsTcp)
                {
                    foreach (KeyValuePair<TcpClient, uint> dtcp in DistrictsTcp)
                    {
                        lock (Districts)
                        {
                            foreach (KeyValuePair<uint, District> dis in Districts)
                            {
                                if (dis.Key == dtcp.Value)
                                {
                                    Log.Error("Listener", dis.Value.ToString() + " disconnected!");
                                    break;
                                }
                            }
                            Districts.Remove(dtcp.Value);
                            break;
                        }
                    }
                    DistrictsTcp.Remove(tcpClient);
                }
                tcpClient.Close();
            }
            catch (Exception e)
            {
                Log.Error("Districts.Listener", "Following exception was thrown when trying to remove district server:\n\n");
                Console.WriteLine(e.ToString());
                return;
            }
        }

        public static int GetValue(byte data)
        {
            return (data - 0x30);
        }
    }
}
