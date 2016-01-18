using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTERFINDER_INFO, "onAskCharacterFinderInfo")]
    public class ASK_CHARACTERFINDER_INFO : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            (client as WorldClient).Send(new ANS_CHARACTERFINDER_INFO(packet.GetParsedString(), cclient));
            return 0;
        }
    }
}
