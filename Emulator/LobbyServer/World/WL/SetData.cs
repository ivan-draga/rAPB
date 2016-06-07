using FrameWork.Logger;

using System;

namespace LobbyServer.World.WL
{
    class SetData : Packet, IPacket
    {
        public void Handle(World world)
        {
            Position = 0;
            Byte IP1, IP2, IP3, IP4;
            IP1 = (Byte)ReadByte();
            IP2 = (Byte)ReadByte();
            IP3 = (Byte)ReadByte();
            IP4 = (Byte)ReadByte();
            UInt32 port = ReadD();
            Byte population = (Byte)ReadByte();
            world.IP1 = IP1;
            world.IP2 = IP2;
            world.IP3 = IP3;
            world.IP4 = IP4;
            world.Port = port;
            world.Population = population;
            Log.Succes(world.Name, "Address " + IP1 + "." + IP2 + "." + IP3 + "." + IP4 + ":" + port);
            lock (Program.worldListener.Worlds)
            {
                if (Program.worldListener.Worlds.ContainsKey(world.Id))
                {
                    Log.Error("SetData", "This world server is already registered!");
                    world.tcp.Close();
                }
                else Program.worldListener.Worlds.Add(world.Id, world);
            }
        }
    }
}
