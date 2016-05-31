using FrameWork.NetWork;
using MyDB;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_IGNORELIST_ADD : PacketOut
    {
        public ANS_IGNORELIST_ADD(String charName, WorldClient client) : base((UInt32)Opcodes.ANS_IGNORELIST_ADD)
        {
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (client.Character.Name == charName) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SELF);
            else
            {
                if (client.Character.AccountIndex == chr.AccountIndex) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SAME_ACCOUNT);
                else
                {
                    if (count < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_NOT_FOUND);
                    else if (count >= 1)
                    {
                        WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                        WriteUInt32Reverse((uint)chr.Index);
                        WriteParsedString(charName);
                        IgnoreEntry ign = new IgnoreEntry();
                        ign.Index = Databases.FriendTable.GenerateIndex();
                        ign.CharacterOwnerIndex = client.Character.Index;
                        ign.CharacterIgnoreIndex = chr.Index;
                        Databases.IgnoreTable.Add(ign);
                    }
                }
            }
        }
    }
}
