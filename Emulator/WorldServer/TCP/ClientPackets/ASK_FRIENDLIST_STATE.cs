using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_STATE, "onAskFriendListInfo")]
    public class ASK_FRIENDLIST_STATE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new ANS_FRIENDLIST_STATE(packet.GetUint32Reversed(), (client as WorldClient)));
            return 0;
        }
    }
}
