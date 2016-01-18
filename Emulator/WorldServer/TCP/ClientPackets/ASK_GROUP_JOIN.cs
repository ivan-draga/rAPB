using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;
using WorldServer.Districts;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_GROUP_JOIN, "onAskGroupJoin")]
    public class ASK_GROUP_JOIN : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            cclient.Send(new ANS_GROUP_JOIN(packet.GetParsedString()));
            return 0;
        }
    }
}
