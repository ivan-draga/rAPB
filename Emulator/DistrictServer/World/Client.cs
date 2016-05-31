using FrameWork.Logger;

using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;

using DistrictServer.World.DW;
using DistrictServer.World.WD;

namespace DistrictServer.World
{
    class Client
    {
        public TcpClient client
        {
            get;
            private set;
        }

        private Thread clientThread;
        private NetworkStream stream;
        private IPEndPoint address;

        public Client(String ip, int Port)
        {
            address = new IPEndPoint(IPAddress.Parse(ip), Port);
            client = new TcpClient();
            connect(address);
            Log.Succes("World.Client", "Connected to the World Server!");
            stream = client.GetStream();
            clientThread = new Thread(new ThreadStart(handleLobby));
            clientThread.Start();
        }

        private void connect(IPEndPoint serverEndPoint)
        {
            try
            {
                client.Connect(serverEndPoint);
            }
            catch (SocketException)
            {
                Log.Error("World.Client", "Failed to connect to the world server! Retrying in 5 seconds...");
                Thread.Sleep(5 * 1000);
                connect(serverEndPoint);
            }
        }

        private void handleLobby()
        {
            DW.RegisterDistrict initPacket = new DW.RegisterDistrict(Program.Type, Program.ID, Program.Language, Program.Password, Program.IP, Program.Port, Program.Token);
            stream.Write(initPacket.ToArray(), 0, initPacket.ToArray().Length);
            stream.Flush();
            Byte[] message = new Byte[4096];
            int bytesRead;
            while (true)
            {
                bytesRead = 0;
                try
                {
                    bytesRead = stream.Read(message, 0, 4096);
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
                    case (Byte)OpCodes.WD_MSG_INFO:
                        packet = new MessageInfo();
                        break;
                }
                packet.Write(message, 1, bytesRead - 1);
                packet.Handle();
            }
            Log.Error("World.Client", "World server disconnected! Reconnecting...");
            client.Close();
            stream.Dispose();
            client = new TcpClient();
            connect(address);
            stream = client.GetStream();
            Log.Succes("World.Client", "Reconnected!");
            handleLobby();
        }
    }
}