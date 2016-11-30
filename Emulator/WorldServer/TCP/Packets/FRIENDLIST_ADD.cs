using FrameWork.NetWork;
using MyDB;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_ADD, "onAskFriendListAdd")]
    public class FRIENDLIST_ADD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            string charName = packet.GetParsedString();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_FRIENDLIST_ADD);
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (cclient.Character.Name == charName) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SELF);
            else
            {
                if (cclient.Character.AccountIndex == chr.AccountIndex) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SAME_ACCOUNT);
                else
                {
                    if (count < 1) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_INVALID_NAME);
                    else if (count >= 1)
                    {
                        Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                        Out.WriteParsedString(charName);
                        Out.WriteByte(chr.Faction);
                        Out.WriteByte(chr.IsOnline);
                        Out.WriteUInt32Reverse((uint)chr.Index);
                        Out.WriteByte(chr.LFG);
                        Out.WriteByte(chr.GroupStatus);
                        Out.WriteByte(chr.IsGroupPublic);
                        Out.WriteByte(chr.GroupInvite);
                        uint code = (uint)(chr.DistrictType << 24);
                        code += chr.DistrictID;
                        Out.WriteUInt32(code);
                        Out.WriteByte(0); //districtstatus
                        FriendEntry frnd = new FriendEntry();
                        frnd.Index = Databases.FriendTable.GenerateIndex();
                        frnd.CharacterOwnerIndex = cclient.Character.Index;
                        frnd.CharacterFriendIndex = chr.Index;
                        Databases.FriendTable.Add(frnd);
                    }
                }
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
