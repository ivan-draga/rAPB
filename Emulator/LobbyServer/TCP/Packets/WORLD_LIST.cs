using FrameWork.NetWork;
using System.Collections.Generic;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_LIST, "onAskWorldList")]
    public class WORLD_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            SendWorldList(cclient);
            return 0;
        }

        public static void SendWorldList(LobbyClient cclient)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.WORLD_LIST);
            Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
            lock (Program.worldListener.Worlds)
            {
                Out.WriteUInt16Reverse((ushort)Program.worldListener.Worlds.Count);
                foreach (KeyValuePair<uint, World.World> info in Program.worldListener.Worlds)
                {
                    Out.WriteUInt32Reverse(info.Key);
                    Out.WriteParsedString(info.Value.Name, 32);
                    Out.WriteByte((byte)info.Value.Id);
                    Out.WriteByte(info.Value.Population);
                    Out.WriteByte(1);
                    Out.WriteByte(1);
                }
            }
            cclient.Send(Out);
        }
    }
}
