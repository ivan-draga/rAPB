using FrameWork.NetWork;
using MyDB;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTERFINDER_INFO, "onAskCharacterFinderInfo")]
    public class CHARACTERFINDER_INFO : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            string charName = packet.GetParsedString();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CHARACTERFINDER_INFO);
            int count = Databases.CharacterTable.Count(c => c.Name == charName);
            CharacterEntry chr = Databases.CharacterTable.SingleOrDefault(c => c.Name == charName);
            if (cclient.Character.Name == charName) Out.WriteUInt32Reverse(0x01);
            else
            {
                if (cclient.Account.Index == chr.AccountIndex) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FAILED);
                else
                {
                    if (count < 1) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTERFINDER_INFO_NO_CHARACTER);
                    else
                    {
                        if (chr.IsOnline == 1)
                        {
                            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            Out.WriteUInt32Reverse((uint)chr.Index);
                            Out.WriteParsedString(charName);
                            Out.WriteByte(chr.Faction);
                            Out.WriteByte(chr.LFG);
                            Out.WriteByte(chr.GroupStatus);
                            Out.WriteByte(chr.IsGroupPublic);
                            Out.WriteByte(chr.GroupInvite);
                            uint code = (uint)(chr.DistrictType << 24);
                            code += chr.DistrictID;
                            Districts.District d;
                            Program.districtsListener.Districts.TryGetValue(code, out d);
                            Out.WriteUInt32(code);
                            Out.WriteByte(d.isFull());
                            Out.WriteFloat(1.00f);
                        }
                        else Out.WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTERFINDER_INFO_NO_CHARACTER);
                    }
                }
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
