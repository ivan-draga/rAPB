using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.LFG, "onChangeLFG")]
    public class LFG : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            if (cclient.Character.LFG == 0)
            {
                cclient.Character.LFG = 1;
                Databases.CharacterTable.Update(cclient.Character);
            }
            else if (cclient.Character.LFG == 1)
            {
                cclient.Character.LFG = 0;
                Databases.CharacterTable.Update(cclient.Character);
            }
            return 0;
        }
    }
}
