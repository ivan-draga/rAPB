using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHAT_WHISPER, "onAskChatWhisper")]
    public class ASK_CHAT_WHISPER : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            UInt32 whisperuid = packet.GetUint32Reversed();
            String charname = packet.GetParsedString();
            String message = packet.GetParsedString();
            (client as WorldClient).Send(new ANS_CHAT_WHISPER(cclient, whisperuid, charname, message));
            //cclient.Send(new CHAT_WHISPER(cclient.CharacterId, 1, message));
            return 0;
        }
    }
}
