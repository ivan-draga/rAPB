using FrameWork.NetWork;
using System;
using MyDB;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_GROUP_INVITE : PacketOut
    {
        public ANS_GROUP_INVITE(String charName, WorldClient client) : base((UInt32)Opcodes.ANS_GROUP_INVITE)
        {
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            if (client.Character.Name == charName) WriteUInt32Reverse((uint)ResponseCodes.RC_GROUP_INVITE_SELF);
            else
            {
                if (count < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_GROUP_INVITE_NOT_FOUND);
                else if (count >= 1)
                {
                    WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                    WriteParsedString(charName);
                }
            }
        }
    }
}
