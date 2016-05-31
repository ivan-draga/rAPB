using FrameWork.NetWork;
using FrameWork.Logger;
using System;
using WorldServer.TCP.ServerPackets;
using WorldServer.Districts;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_DISTRICT_RESERVE, "onAskDistrictReserve")]
    public class ASK_DISTRICT_RESERVE : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            UInt32 code = packet.GetUint32();
            cclient.Send(new ANS_DISTRICT_RESERVE(code, packet.GetUint32(), cclient.Character.LFG, cclient));
            return 0;
        }
    }
}
