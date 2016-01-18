using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_IGNORELIST_ADD, "onAskIgnoreListAdd")]
    public class ASK_IGNORELIST_ADD : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            (client as WorldClient).Send(new ANS_IGNORELIST_ADD(packet.GetParsedString(), cclient));
            return 0;
        }
    }
}
