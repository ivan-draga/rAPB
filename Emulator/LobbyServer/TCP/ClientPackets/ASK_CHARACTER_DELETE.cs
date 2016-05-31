using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using FrameWork.NetWork;
using MyDB;

namespace LobbyServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_DELETE, "onAskCharacterDelete")]
    public class ASK_CHARACTER_DELETE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            Byte slot = packet.GetUint8();
            foreach(CharacterEntry ch in cclient.Characters)
            {
                if(ch.Slot == slot)
                {
                    cclient.Characters.Remove(ch);
                    Databases.CharacterTable.Remove(ch);
                    break;
                }
            }
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_DELETE);
            Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
            cclient.Send(Out);
            return 0;
        }
    }
}
