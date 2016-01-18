using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_REMOVE, "onAskFriendListRemove")]
    public class ASK_FRIENDLIST_REMOVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new ANS_FRIENDLIST_REMOVE(packet.GetUint32Reversed()));
            return 0;
        }
    }
}
