using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_GROUP_INVITE, "onAskGroupInvite")]
    public class ASK_GROUP_INVITE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            (client as WorldClient).Send(new ANS_GROUP_INVITE(packet.GetParsedString(), cclient));
            return 0;
        }
    }
}
