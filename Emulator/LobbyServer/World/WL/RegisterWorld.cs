using FrameWork.Logger;
using LobbyServer.World;
using System;
using System.Net;
using System.Net.Sockets;
using System.Threading;

namespace LobbyServer.World.WL
{
    class RegisterWorld : Packet, IPacket
    {
        public RegisterWorld()
            : base()
        { }

        public void Handle(World world)
        {
            Position = 0;
            String name = ReadS();
            String password = ReadS();
            Byte ID = (Byte)ReadByte();
            world.Name = name;
            Log.Info("RegisterWorld", name + " tries to register.");
            IPEndPoint address = (IPEndPoint)world.tcp.Client.RemoteEndPoint;
            if (ID != 0)
            {
                if (Program.worlds.Contains(ID) == false)
                {
                    Log.Succes("RegisterWorld", name + " was registered! World ID: " + ID);
                    world.Id = ID;
                    world.Send(new LW.RegisterSuccess(ID));
                    Program.worlds.Add(ID);
                }
                else
                {
                    Log.Error("RegisterWorld", "World server with ID " + ID + " already exists!");
                    world.tcp.Close();
                }

            }
            else
            {
                Log.Error("RegisterWorld", name + ": wrong host or password - " + address.Address.ToString() + "@" + password);
                Log.Info("RegisterWorld", name + " will be disconnected in 5 seconds");
                Thread.Sleep(5 * 1000);
                world.tcp.Close();
            }
        }
    }
}
