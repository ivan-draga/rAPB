using FrameWork.NetWork;
using System;
using MyDB;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_INFO, "onAskCharacterInfo")]
    public class CHARACTER_INFO : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            byte slotId = packet.GetUint8();
            CharacterEntry Info = Databases.CharacterTable.SingleOrDefault(c => c.AccountIndex == cclient.Account.Index && c.Slot == slotId);
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_CHARACTER_INFO);
            if (Info.Index < 1) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
                Out.WriteByte(Info.Slot);
                Out.WriteByte(Info.Gender);
                Out.WriteUInt32Reverse((uint)Info.Playtime);
                Out.WriteUInt32Reverse((uint)Info.Rank);
                Out.WriteUInt32Reverse((uint)Info.Money);
                Out.WriteUInt32Reverse((uint)Info.JokerTickets);
                Out.WriteParsedString(Info.Clan, 60);
                byte[] Custom = getCustom(Info);
                Out.Write(Custom, 0, Custom.Length);
            }
            cclient.Send(Out);
            return 0;
        }

        public byte[] getCustom(CharacterEntry ch)
        {
            byte[] result = null;
            if (ch.Appearance != null && ch.Appearance.Length > 1)
            {
                string[] values = ch.Appearance.Split('-');
                result = new byte[values.Length];
                for (int i = 0; i < values.Length; ++i) result[i] = values[i].Length > 1 ? Convert.ToByte(values[i], 16) : (byte)0;
            }
            return result;
        }
    }
}
