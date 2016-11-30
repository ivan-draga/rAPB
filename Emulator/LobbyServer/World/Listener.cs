using FrameWork.Logger;
using LobbyServer.World.WL;
using System;
using System.Collections.Generic;
using System.Text;
using System.Net.Sockets;
using System.Threading;
using System.Net;

namespace LobbyServer.World
{
    class Listener
    {
        private TcpListener tcpListener;
        private Thread listenThread;
        private string IP;
        private int Port;

        public Dictionary<uint, World> Worlds
        {
            get;
            private set;
        }

        public Listener(string ip, int port)
        {
            Worlds = new Dictionary<uint, World>();
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
                Log.Error("World.Listener", "Failed to bind to the address " + IP + ":" + Port + "! Retry in 5 seconds.");
                Thread.Sleep(5 * 1000);
                listenForClients();
            }
            Log.Succes("World.Listener", "Expecting worlds to connect at " + IP + ":" + Port);
            while (true)
            {
                TcpClient client = tcpListener.AcceptTcpClient();
                Thread clientThread = new Thread(new ParameterizedThreadStart(handleWorld));
                clientThread.Start(client);
            }
        }

        private void handleWorld(object client)
        {
            TcpClient tcpClient = (TcpClient)client;
            World world = new World(tcpClient);
            NetworkStream clientStream = tcpClient.GetStream();
            byte[] message = new byte[4096];
            int bytesRead;
            while (true)
            {
                bytesRead = 0;
                try
                {
                    bytesRead = clientStream.Read(message, 0, 4096);
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
                    case (byte)OpCodes.WL_REGISTER_WORLD: packet = new RegisterWorld(); break;
                    case (byte)OpCodes.WL_SET_DATA: packet = new SetData(); break;
                }
                packet.Write(message, 1, bytesRead - 1);
                packet.Handle(world);
            }
            Log.Error("World.Listener", world.Name + " disconnected!");
            try
            {
                Program.worlds.Remove((byte)world.Id);
                lock (Worlds)
                {
                    Worlds.Remove(world.Id);
                }
                tcpClient.Close();
            }
            catch(Exception e)
            {
                Log.Error("World.Listener", "Failed to remove disconnected world, exception:\n\n");
                Console.WriteLine(e.ToString());
                return;
            }
        }
    }
}
