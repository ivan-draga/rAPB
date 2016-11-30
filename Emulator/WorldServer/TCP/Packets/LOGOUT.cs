using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.LOGOUT, "onLogout")]
    public class LOGOUT : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            cclient.Character.IsOnline = 0;
            cclient.Character.LFG = 0;
            cclient.Character.DistrictID = 0;
            cclient.Character.DistrictType = 0;
            cclient.Character.GroupInvite = 0;
            cclient.Character.GroupStatus = 0;
            cclient.Character.IsGroupPublic = 0;
            Databases.CharacterTable.Update(cclient.Character);
            PacketOut Out = new PacketOut((uint)Opcodes.LOGOUT);
            cclient.Send(Out);
            cclient.Disconnect();
            return 0;
        }
    }
}
