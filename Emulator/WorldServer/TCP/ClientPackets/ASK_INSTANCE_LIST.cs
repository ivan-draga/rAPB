using FrameWork.Logger;
using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_INSTANCE_LIST, "onAskInstanceList")]
    public class ASK_INSTANCE_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new ANS_INSTANCE_LIST());
            return 0;
        }
    }
}
