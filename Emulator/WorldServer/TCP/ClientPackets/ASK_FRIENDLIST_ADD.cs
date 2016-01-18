using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_FRIENDLIST_ADD, "onAskFriendListAdd")]
    public class ASK_FRIENDLIST_ADD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            (client as WorldClient).Send(new ANS_FRIENDLIST_ADD(packet.GetParsedString(), cclient));
            return 0;
        }
    }
}
