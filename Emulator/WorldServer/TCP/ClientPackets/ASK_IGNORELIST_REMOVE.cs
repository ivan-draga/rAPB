using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_IGNORELIST_REMOVE, "onAskIgnoreListRemove")]
    public class ASK_IGNORELIST_REMOVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new ANS_IGNORELIST_REMOVE(packet.GetUint32Reversed()));
            return 0;
        }
    }
}
