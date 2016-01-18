using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_DISTRICT_ENTER, "onAskDistrictEnter")]
    public class ASK_DISTRICT_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient wclient = (WorldClient)client;
            wclient.Send(new ANS_DISTRICT_ENTER(wclient.Reserved, wclient));
            return 0;
        }
    }
}
