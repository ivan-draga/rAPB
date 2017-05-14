using FrameWork.NetWork;
using System.Collections.Generic;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_INSTANCE_LIST, "onAskInstanceList")]
    public class INSTANCE_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_INSTANCE_LIST);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);            
            lock (Program.districtsListener.Districts)
            {
                Out.WriteUInt16Reverse((ushort)Program.districtsListener.Districts.Count);
                foreach (KeyValuePair<uint, Districts.District> district in Program.districtsListener.Districts)
                {
                    Out.WriteUInt32(district.Key);
                    Out.WriteUInt16Reverse(district.Value.Enforcers);
                    Out.WriteUInt16Reverse(district.Value.Criminals);
                    Out.WriteByte(district.Value.isFull());
                    Out.WriteUInt16Reverse(district.Value.Queue);
                }
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
