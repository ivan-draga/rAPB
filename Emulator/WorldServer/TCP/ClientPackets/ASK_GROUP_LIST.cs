using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_GROUP_LIST, "onAskGroupList")]
    public class ASK_GROUP_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new ANS_GROUP_LIST(packet.GetUint32()));
            return 0;
        }
    }
}
