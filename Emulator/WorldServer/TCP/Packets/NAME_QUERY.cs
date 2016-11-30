using FrameWork.NetWork;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_NAME_QUERY, "onAskNameQuery")]
    public class NAME_QUERY : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            ushort type = packet.GetUint16Reversed();
            uint charUID = packet.GetUint32Reversed();
            string charName = packet.GetPascalString();

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_NAME_QUERY);
            Out.WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
            Out.WriteUInt16Reverse(type);
            Out.WriteUInt32Reverse(charUID);
            Out.WriteParsedString(charName);
            cclient.Send(Out);
            return 0;
        }
    }
}
