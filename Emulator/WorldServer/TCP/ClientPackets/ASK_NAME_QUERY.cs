using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_NAME_QUERY, "onAskNameQuery")]
    public class ASK_NAME_QUERY : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            (client as WorldClient).Send(new ANS_NAME_QUERY(packet.GetUint16Reversed(), packet.GetUint32Reversed(), packet.GetPascalString(), cclient));
            return 0;
        }
    }
}
