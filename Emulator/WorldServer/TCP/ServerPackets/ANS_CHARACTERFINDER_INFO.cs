using FrameWork.NetWork;
using System;
using MyDB;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_CHARACTERFINDER_INFO : PacketOut
    {
        public ANS_CHARACTERFINDER_INFO(String charName, WorldClient client) : base((UInt32)Opcodes.ANS_CHARACTERFINDER_INFO)
        {
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (client.Character.Name == charName) WriteUInt32Reverse(0x01);
            else
            {
                if (client.Account.Index == chr.AccountIndex) WriteUInt32Reverse(0x01);
                else
                {
                    if (count < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTERFINDER_INFO_NO_CHARACTER);
                    else
                    {
                        if (chr.IsOnline == 1)
                        {
                            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            WriteUInt32Reverse((uint)chr.Index);
                            WriteParsedString(charName);
                            WriteByte(chr.Faction);
                            WriteByte(chr.LFG);
                            WriteByte(chr.GroupStatus);
                            WriteByte(chr.IsGroupPublic);
                            WriteByte(chr.GroupInvite);
                            UInt32 code = (UInt32)(chr.DistrictType << 24);
                            code += chr.DistrictID;
                            WriteUInt32(code);
                            WriteByte(0); //districtstatus
                            WriteFloat(1.00f);
                        }
                        else WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTERFINDER_INFO_NO_CHARACTER);
                    }
                }
            }
        }
    }
}
