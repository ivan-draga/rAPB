using FrameWork.NetWork;
using System;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_MAIL_LIST, "onAskMailInfo")]
    public class ASK_MAIL_INFO : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            (client as WorldClient).Send(new MAIL_INFO(1, 0, 0, 0));
            return 0;
        }
    }
}
