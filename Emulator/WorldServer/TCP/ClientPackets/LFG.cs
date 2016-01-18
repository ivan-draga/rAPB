using FrameWork.NetWork;
using System;
using MySql.Data.MySqlClient;
using MySql.Data.Types;
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
            if (cclient.LFG == 0)
            {
                MySqlCommand cmd = new MySqlCommand("UPDATE `clientstatus` SET `lfg` = 1 WHERE `name` = @name", WorldServer.Database.Connection.Instance);
                try
                {
                    cmd.Prepare();
                    cmd.Parameters.AddWithValue("@name", cclient.Name);
                    cmd.ExecuteNonQuery();
                }
                catch (MySqlException e) { FrameWork.Logger.Log.Error("MySQL", e.ToString()); }
                finally { cmd.Dispose(); }
                cclient.LFG = 1;
                Out.WriteByte(1);
            }
            else if (cclient.LFG == 1)
            {
                MySqlCommand cmd = new MySqlCommand("UPDATE `clientstatus` SET `lfg` = 0 WHERE `name` = @name", WorldServer.Database.Connection.Instance);
                try
                {
                    cmd.Prepare();
                    cmd.Parameters.AddWithValue("@name", cclient.Name);
                    cmd.ExecuteNonQuery();
                }
                catch (MySqlException e) { FrameWork.Logger.Log.Error("MySQL", e.ToString()); }
                finally { cmd.Dispose(); }
                cclient.LFG = 0;
                Out.WriteByte(0);
            }
            cclient.Send(Out);
            return 0;
        }
    }
}
