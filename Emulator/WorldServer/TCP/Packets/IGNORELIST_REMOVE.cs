using FrameWork.NetWork;
using MyDB;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_IGNORELIST_REMOVE, "onAskIgnoreListRemove")]
    public class IGNORELIST_REMOVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint charUID = packet.GetUint32Reversed();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_IGNORELIST_REMOVE);
            IgnoreEntry ign = Databases.IgnoreTable.SingleOrDefault(i => i.CharacterIgnoreIndex == charUID);
            Databases.IgnoreTable.Remove(ign);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteUInt32Reverse(charUID);
            cclient.Send(Out);
            return 0;
        }
    }
}
