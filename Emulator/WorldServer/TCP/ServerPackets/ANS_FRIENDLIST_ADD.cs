using FrameWork.NetWork;
using System;
using MyDB;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_FRIENDLIST_ADD : PacketOut
    {
        public ANS_FRIENDLIST_ADD(String charName, WorldClient client) : base((UInt32)Opcodes.ANS_FRIENDLIST_ADD)
        {
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (client.Character.Name == charName) WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SELF);
            else
            {
                if (client.Character.AccountIndex == chr.AccountIndex) WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SAME_ACCOUNT);
                else
                {
                    if (count < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_INVALID_NAME);
                    else if (count >= 1)
                    {
                        WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                        WriteParsedString(charName);
                        WriteByte(chr.Faction);
                        WriteByte(chr.IsOnline);
                        WriteUInt32Reverse((uint)chr.Index);
                        WriteByte(chr.LFG);
                        WriteByte(chr.GroupStatus);
                        WriteByte(chr.IsGroupPublic);
                        WriteByte(chr.GroupInvite);
                        UInt32 code = (UInt32)(chr.DistrictType << 24);
                        code += chr.DistrictID;
                        WriteUInt32(code);
                        WriteByte(0); //districtstatus
                        FriendEntry frnd = new FriendEntry();
                        frnd.Index = Databases.FriendTable.GenerateIndex();
                        frnd.CharacterOwnerIndex = client.Character.Index;
                        frnd.CharacterFriendIndex = chr.Index;
                        Databases.FriendTable.Add(frnd);
                    }
                }
            }
        }
    }
}
