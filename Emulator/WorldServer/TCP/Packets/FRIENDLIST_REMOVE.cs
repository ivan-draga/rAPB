using FrameWork.NetWork;
using MyDB;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_REMOVE, "onAskFriendListRemove")]
    public class FRIENDLIST_REMOVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint charUID = packet.GetUint32Reversed();

            FriendEntry frnd = Databases.FriendTable.SingleOrDefault(f => f.CharacterFriendIndex == charUID);
            Databases.FriendTable.Remove(frnd);
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_FRIENDLIST_REMOVE);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteUInt32Reverse(charUID);
            cclient.Send(Out);
            return 0;
        }
    }
}
