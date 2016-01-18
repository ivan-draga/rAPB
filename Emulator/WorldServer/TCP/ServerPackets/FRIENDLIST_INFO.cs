using FrameWork.NetWork;
using MySql.Data.MySqlClient;
using MySql.Data.Types;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class FRIENDLIST_INFO : PacketOut
    {
        public FRIENDLIST_INFO(Byte totalFriends, UInt32 friendUID, String friendName, Byte friendStatus, Byte friendFaction) : base((UInt32)Opcodes.FRIENDLIST_INFO)
        {
            WriteByte(totalFriends);
            WriteUInt32Reverse(friendUID);
            WriteParsedString(friendName);
            WriteByte(friendStatus);
            WriteByte(friendFaction);
        }
    }
}
