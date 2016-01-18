using FrameWork.Logger;
using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using WorldServer.Lobby.LW;

namespace WorldServer.Lobby
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
            Log.Succes("Lobby.Client", "Connected to the Lobby Server!");
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
                Log.Error("Lobby.Client", "Failed to connect to the lobby server! Retrying in 5 seconds...");
                Thread.Sleep(5 * 1000);
                connect(serverEndPoint);
            }
        }

        private void handleLobby()
        {
            WL.RegisterWorld initPacket = new WL.RegisterWorld(Program.WorldName, Program.Password, Program.ID);
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
                    case (Byte)OpCodes.LW_REGISTER_SUCCESS:
                        packet = new RegisterSuccess();
                        break;
                    case (Byte)OpCodes.LW_ACCOUNT_ENTER:
                        packet = new AccountEnter();
                        break;
                }
                packet.Write(message, 1, bytesRead - 1);
                packet.Handle();
            }
            Log.Error("Lobby.Client", "Lobby Server disconnected! Reconnecting...");
            client.Close();
            stream.Dispose();
            client = new TcpClient();
            connect(address);
            stream = client.GetStream();
            Log.Succes("Lobby.Client", "Reconnected!");
            handleLobby();
        }

        public void Send(WL.Packet packet)
        {
            Byte[] array = packet.ToArray();
            stream.Write(array, 0, array.Length);
            stream.Flush();
        }
    }
}
