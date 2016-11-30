using FrameWork.NetWork;
using System;
using MyDB;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_CREATE, "onAskCharacterCreate")]
    public class CHARACTER_CREATE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CHARACTER_CREATE);
            byte freeSlot = GetFreeSlot(cclient);
            if (freeSlot == 0) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                cclient.Pending.Slot = freeSlot;
                cclient.Pending.Faction = packet.GetUint8();
                cclient.Pending.Gender = packet.GetUint8();
                cclient.Pending.Version = (byte)packet.GetUint32Reversed();
                packet.GetUint32Reversed();
                byte[] Custom = new byte[packet.Length - packet.Position];
                packet.Read(Custom, 0, Custom.Length);
                cclient.Pending.Appearance = BitConverter.ToString(Custom);
                Databases.CharacterTable.Add(cclient.Pending);
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteInt32Reverse(cclient.Pending.Slot);
            }
            cclient.Send(Out);
            System.Threading.Thread.Sleep(200);
            cclient.Pending = default(CharacterEntry);
            System.Threading.Thread.Sleep(200);
            cclient.Disconnect();
            return 0;
        }

        public byte GetFreeSlot(LobbyClient client)
        {
            try
            {
                byte[] slots = new byte[] { 1, 2, 3, 4, 5, 6, 7, 8 };
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
