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
        private String IP;
        private int Port;

        public Dictionary<UInt32, World> Worlds
        {
            get;
            private set;
        }

        public Listener(String ip, Int32 port)
        {
            Worlds = new Dictionary<UInt32, World>();
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
                this.tcpListener.Start();
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
                TcpClient client = this.tcpListener.AcceptTcpClient();
                Thread clientThread = new Thread(new ParameterizedThreadStart(handleWorld));
                clientThread.Start(client);
            }
        }

        private void handleWorld(object client)
        {
            TcpClient tcpClient = (TcpClient)client;
            World world = new World(tcpClient);
            NetworkStream clientStream = tcpClient.GetStream();
            Byte[] message = new Byte[4096];
            Int32 bytesRead;
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
                    case (Byte)OpCodes.WL_REGISTER_WORLD: packet = new RegisterWorld(); break;
                    case (Byte)OpCodes.WL_SET_DATA: packet = new SetData(); break;
                }
                packet.Write(message, 1, bytesRead - 1);
                packet.Handle(world);
            }
            Log.Error("World.Listener", world.Name + " disconnected!");
            try
            {
                Program.worlds.Remove((Byte)world.Id);
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
