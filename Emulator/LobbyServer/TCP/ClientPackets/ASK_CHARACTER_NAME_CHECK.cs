using FrameWork.NetWork;
using System;
using System.Text.RegularExpressions;
using MyDB;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_NAME_CHECK, "onAskCharacterNameCheck")]
    public class ASK_CHARACTER_NAME_CHECK : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            UInt32 WorldUid = packet.GetUint32Reversed();
            string Name = packet.GetParsedString();
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_NAME_CHECK);
            if (isValid(Name) && Databases.CharacterTable.Count(c => c.Name == Name) == 0)
            {
                cclient.Pending = new CharacterEntry();
                cclient.Pending.Index = Databases.CharacterTable.GenerateIndex();
                cclient.Pending.AccountIndex = cclient.Account.Index;
                cclient.Pending.Name = Name;
                cclient.Pending.World = (int)WorldUid;
                cclient.Pending.Rank = 1;
                cclient.Pending.Money = 0;
                cclient.Pending.Threat = 1;
                cclient.Pending.Playtime = 0;
                cclient.Pending.Clan = "APB-EMU";
                cclient.Pending.IsOnline = 0;
                cclient.Pending.DistrictID = 0;
                cclient.Pending.DistrictType = 0;
                cclient.Pending.LFG = 0;
                cclient.Pending.IsGroupPublic = 0;
                cclient.Pending.GroupInvite = 0;
                cclient.Pending.GroupStatus = 0;
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
            }
            else
            {
                cclient.Pending = default(CharacterEntry);
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTER_NAME_CHECK_IN_USE);
            }
            cclient.Send(Out);
            return 0;
        }

        static public Boolean isValid(string name)
        {
            Regex objAlphaNumericPattern = new Regex(".[a-zA-Z0-9]");
            return objAlphaNumericPattern.IsMatch(name);
        }
    }
}
