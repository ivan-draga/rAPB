using FrameWork.Logger;

using System;
using System.Collections.Generic;
using System.Text;
using System.Net.Sockets;
using System.Threading;
using System.Net;

using WorldServer.Districts.DW;

namespace WorldServer.Districts
{
    class Listener
    {
        private TcpListener tcpListener;
        private Thread listenThread;
        private String IP;
        private int Port;
        public Dictionary<UInt32, District> Districts
        {
            get;
            private set;
        }


        public Listener(String ip, Int32 port)
        {
            Districts = new Dictionary<UInt32, District>();
            IPAddress address = IPAddress.Any;
            try
            {
                address = IPAddress.Parse(ip);
            }
            catch
            { }

            IP = address.ToString();
            Port = port;
            tcpListener = new TcpListener( address, port);
            listenThread = new Thread(new ThreadStart(listenForClients));
            listenThread.Start();
        }

        private void listenForClients()
        {
            try
            {
                this.tcpListener.Start();
            }
            catch (SocketException)
            {
                Log.Error("Districts.Listener","Failed to bind to the address " + IP + ":" + Port + "! Retry in 5 seconds.");
                Thread.Sleep(5 * 1000);
                listenForClients();
            }
            Log.Succes("Districts.Listener", "Expecting districts to connect at " + IP + ":" + Port);
            while (true)
            {
                TcpClient client = this.tcpListener.AcceptTcpClient();
                Thread clientThread = new Thread(new ParameterizedThreadStart(handleWorld));
                clientThread.Start(client);
            }
        }

        private void handleWorld(object client)
        {
            TcpClient tcpClient = (TcpClient)client;
            NetworkStream clientStream = tcpClient.GetStream();
            District district = new District(0, 0);
            district.tcp = tcpClient;
            Byte[] message = new Byte[4096];
            Int32 bytesRead;
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

                IPacket packet = null;
                switch (message[0])
                {
                    case (Byte)OpCodes.DW_REGISTER_DISTRICT:
                        packet = new RegisterDistrict();
                        break;
                }
                packet.Write(message, 1, bytesRead - 1);
                packet.Handle(district);
            }
            tcpClient.Close();
        }
    }
}
