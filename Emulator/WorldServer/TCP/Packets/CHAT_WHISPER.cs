using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHAT_WHISPER, "onAskChatWhisper")]
    public class CHAT_WHISPER : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint whisperuid = packet.GetUint32Reversed();
            string charname = packet.GetParsedString();
            string message = packet.GetParsedString();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CHAT_WHISPER);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteUInt32Reverse(whisperuid);
            uint charUID = 0x00; //GetCharUid(String charname) TODO
            Out.WriteUInt32Reverse(charUID);
            cclient.Send(Out);

            /*PacketOut Out2 = new PacketOut((uint)Opcodes.CHAT_WHISPER);
            Out2.WriteUInt32Reverse(charUID);
            Out2.WriteByte(1);
            Out2.WriteParsedString(message);
            cclient.Send(Out2);*/
            return 0;
        }
    }
}
