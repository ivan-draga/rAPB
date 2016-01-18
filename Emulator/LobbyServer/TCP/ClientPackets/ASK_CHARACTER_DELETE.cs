using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using FrameWork.NetWork;

namespace LobbyServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_DELETE, "onAskCharacterDelete")]
    public class ASK_CHARACTER_DELETE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            cclient.Characters.Delete(packet.GetUint8());
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_DELETE);
            Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
            cclient.Send(Out);
            return 0;
        }
    }
}
