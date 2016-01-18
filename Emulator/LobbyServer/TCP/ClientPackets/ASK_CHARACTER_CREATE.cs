using FrameWork.Logger;
using FrameWork.NetWork;

using LobbyServer.Database;

using System;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_CREATE, "onAskCharacterCreate")]
    public class ASK_CHARACTER_CREATE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            Byte freeSlot = cclient.Characters.getFreeSlot();
            if (freeSlot == 0) ANS_CHARACTER_CREATE.Send(cclient);
            else
            {
                cclient.Pending.Slot = freeSlot;
                cclient.Pending.Faction = packet.GetUint8();
                cclient.Pending.Gender = packet.GetUint8();
                cclient.Pending.Version = packet.GetUint32Reversed();
                packet.GetUint32Reversed();
                Byte[] Custom = new Byte[packet.Length - packet.Position];
                packet.Read(Custom, 0, Custom.Length);
                cclient.Pending.Custom = BitConverter.ToString(Custom);
                cclient.Characters.Create(cclient.Pending);
                ANS_CHARACTER_CREATE.Send(cclient);
            }
            return 0;
        }
    }
}
