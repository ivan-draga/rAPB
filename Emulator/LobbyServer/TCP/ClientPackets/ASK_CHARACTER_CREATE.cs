using FrameWork.NetWork;
using System;
using MyDB;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_CREATE, "onAskCharacterCreate")]
    public class ASK_CHARACTER_CREATE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            Byte freeSlot = GetFreeSlot(cclient);
            if (freeSlot == 0) ANS_CHARACTER_CREATE.Send(cclient);
            else
            { 
                cclient.Pending.Slot = freeSlot;
                cclient.Pending.Faction = packet.GetUint8();
                cclient.Pending.Gender = packet.GetUint8();
                cclient.Pending.Version = (Byte)packet.GetUint32Reversed();
                packet.GetUint32Reversed();
                Byte[] Custom = new Byte[packet.Length - packet.Position];
                packet.Read(Custom, 0, Custom.Length);
                cclient.Pending.Appearance = BitConverter.ToString(Custom);
                Databases.CharacterTable.Add(cclient.Pending);
                ANS_CHARACTER_CREATE.Send(cclient);
            }
            return 0;
        }

        public Byte GetFreeSlot(LobbyClient client)
        {
            try
            {
                Byte[] slots = new Byte[] { 1, 2, 3, 4, 5, 6, 7, 8 };
                if (client.Characters.Count != 0)
                {
                    for (int i = 0; i < slots.Length; i++)
                        foreach (CharacterEntry ch in client.Characters)
                            if (ch.Slot != slots[i])
                                return slots[i];
                }
                else return 1;
            }
            catch(Exception e)
            {
                Console.WriteLine(e.ToString());
                return 0;
            }
            return 0;
        }
    }
}
