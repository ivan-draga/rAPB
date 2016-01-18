using FrameWork.NetWork;

using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_CHAT_WHISPER : PacketOut
    {
        public ANS_CHAT_WHISPER(WorldClient client, UInt32 whisperUID, String charname, String message) : base((UInt32)Opcodes.ANS_CHAT_WHISPER)
        {
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32Reverse(whisperUID);
            UInt32 charUID = 0x00; //GetCharUid(String charname) TODO
            WriteUInt32Reverse(charUID);
        }
    }
}
