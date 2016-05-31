using FrameWork.NetWork;
using System;
using MyDB;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_FRIENDLIST_REMOVE : PacketOut
    {
        public ANS_FRIENDLIST_REMOVE(UInt32 charUID) : base((UInt32)Opcodes.ANS_FRIENDLIST_REMOVE)
        {
            FriendEntry frnd = Databases.FriendTable.SingleOrDefault(f => f.CharacterFriendIndex == charUID);
            Databases.FriendTable.Remove(frnd);
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32Reverse(charUID);
        }
    }
}
