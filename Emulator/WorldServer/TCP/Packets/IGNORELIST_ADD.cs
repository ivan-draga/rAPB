using FrameWork.NetWork;
using MyDB;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_IGNORELIST_ADD, "onAskIgnoreListAdd")]
    public class IGNORELIST_ADD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            string charName = packet.GetParsedString();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_IGNORELIST_ADD);
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (cclient.Character.Name == charName) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SELF);
            else
            {
                if (cclient.Character.AccountIndex == chr.AccountIndex) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SAME_ACCOUNT);
                else
                {
                    if (count < 1) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_NOT_FOUND);
                    else if (count >= 1)
                    {
                        Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                        Out.WriteUInt32Reverse((uint)chr.Index);
                        Out.WriteParsedString(charName);
                        IgnoreEntry ign = new IgnoreEntry();
                        ign.Index = Databases.FriendTable.GenerateIndex();
                        ign.CharacterOwnerIndex = cclient.Character.Index;
                        ign.CharacterIgnoreIndex = chr.Index;
                        Databases.IgnoreTable.Add(ign);
                    }
                }
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
