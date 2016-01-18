using FrameWork.Logger;
using FrameWork.NetWork;
using LobbyServer.Database;
using System;
using MySql;
using MySql.Data.MySqlClient;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_INFO, "onAskCharacterInfo")]
    public class ASK_CHARACTER_INFO : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            byte slotId = packet.GetUint8();
            Character Info = cclient.Characters.Get(slotId);
            MySqlCommand cmd = new MySqlCommand("DELETE FROM `clientstatus` WHERE `name` = @name", Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@name", Info.Name);
                cmd.ExecuteNonQuery();
            }
            catch (MySqlException) { }
            finally { cmd.Dispose(); }
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_INFO);
            if (Info == null) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
                Out.WriteByte(Info.Slot);
                Out.WriteByte(Info.Gender);
                Out.WriteUInt32Reverse(Info.Playtime);
                Out.WriteUInt32Reverse(Info.Rank);
                Out.WriteByte(Info.Threat);
                Out.WriteUInt32Reverse(Info.Money);
                Out.WriteParsedString("APB-EMU", 60);
                byte[] Custom = Info.getCustom();
                Out.Write(Custom, 0, Custom.Length);
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
