using FrameWork.NetWork;
using FrameWork.Logger;
using System;
using WorldServer.TCP.ServerPackets;
using MySql.Data.MySqlClient;
using MySql.Data.Types;

namespace WorldServer.TCP.ClientPackets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.LOGOUT, "onLogout")]
    public class LOGOUT : PacketOut, IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            MySqlCommand cmd = new MySqlCommand("DELETE FROM `clientstatus` WHERE `name` = @name", WorldServer.Database.Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@name", cclient.Name);
                cmd.ExecuteNonQuery();
            }
            catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
            finally { cmd.Dispose(); }
            Program.Lobby.Send(new Lobby.WL.Logout(cclient.Email, cclient.account.SessionId));
            PacketOut Out = new PacketOut((UInt32)Opcodes.LOGOUT);
            cclient.Send(Out);
            cclient.Disconnect();
            return 0;
        }
    }
}
