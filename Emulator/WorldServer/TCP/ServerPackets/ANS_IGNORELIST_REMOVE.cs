using FrameWork.NetWork;
using MyDB;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_IGNORELIST_REMOVE : PacketOut
    {
        public ANS_IGNORELIST_REMOVE(UInt32 charUID) : base((UInt32)Opcodes.ANS_IGNORELIST_REMOVE)
        {
            IgnoreEntry ign = Databases.IgnoreTable.SingleOrDefault(i => i.CharacterIgnoreIndex == charUID);
            Databases.IgnoreTable.Remove(ign);
            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            WriteUInt32Reverse(charUID);
        }
    }
}
