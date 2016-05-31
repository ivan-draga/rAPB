using FrameWork.NetWork;
using System;
using MyDB;
using WorldServer.TCP.ServerPackets;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.LFG, "onChangeLFG")]
    public class LFG : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            PacketOut Out = new PacketOut((UInt32)Opcodes.LFG);
            if (cclient.Character.LFG == 0)
            {
                cclient.Character.LFG = 1;
                Databases.CharacterTable.Update(cclient.Character);
                Out.WriteByte(1);
            }
            else if (cclient.Character.LFG == 1)
            {
                cclient.Character.LFG = 0;
                Databases.CharacterTable.Update(cclient.Character);
                Out.WriteByte(0);
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
