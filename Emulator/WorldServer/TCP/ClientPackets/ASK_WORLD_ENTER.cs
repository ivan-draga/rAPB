using FrameWork.Logger;
using FrameWork.NetWork;
using System;
using WorldServer.Lobby;
using WorldServer.TCP.ServerPackets;
using WorldServer.Database;
using MySql.Data.MySqlClient;
using MySql.Data.Types;

namespace WorldServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_ENTER, "onAskWorldEnter")]
    public class ASK_WORLD_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            UInt32 accountId = packet.GetUint32Reversed();
            cclient.AccountId = accountId;
            Log.Debug("AskWorldEnter", "New client! Account = " + accountId);
            lock (Program.expectingAccounts) Program.expectingAccounts.TryGetValue(accountId, out cclient.account);

            #region Character stuff

            MySqlCommand cmd = new MySqlCommand("SELECT * FROM `characters` WHERE `id` = @id", WorldServer.Database.Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@id", cclient.account.Character.ToString());
                cmd.ExecuteNonQuery();
                MySqlDataReader reader = cmd.ExecuteReader();
                try
                {
                    while (reader.Read())
                    {
                        cclient.CharacterId = getID(reader);
                        cclient.Name = getName(reader);
                        cclient.Faction = getFaction(reader);
                        cclient.Gender = getGender(reader);
                        cclient.Rank = getRank(reader);
                        cclient.Money = getMoney(reader);
                        cclient.Threat = getThreat(reader);
                        cclient.Playtime = getPlayTime(reader);
                        cclient.Clan = getClan(reader);
                        cclient.districtID = 0;
                        cclient.districtType = 0;
                        cclient.groupInvite = 0;
                        cclient.groupStatus = 0;
                        cclient.groupPublic = 0;
                    }
                }
                catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
                finally { reader.Dispose(); }
            }
            catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
            finally { cmd.Dispose(); }

            #endregion

            #region Account stuff
            MySqlCommand cmd2 = new MySqlCommand("SELECT * FROM `accounts` WHERE `id` = @id", WorldServer.Database.Connection.Instance);
            try
            {
                cmd2.Prepare();
                cmd2.Parameters.AddWithValue("@id", accountId.ToString());
                cmd2.ExecuteNonQuery();
                MySqlDataReader reader2 = cmd2.ExecuteReader();
                try
                {
                    while (reader2.Read())
                    {
                        cclient.Email = getEmail(reader2);
                        cclient.isGM = getGm(reader2);
                        cclient.isBanned = getBanned(reader2);
                        cclient.Points = getPoints(reader2);
                    }
                }
                catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
                finally { reader2.Dispose(); }
            }
            catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
            finally { cmd2.Dispose(); }
            #endregion

            #region Client status

            MySqlCommand cmd3 = new MySqlCommand("INSERT INTO `clientstatus` VALUES(@name, 0, 0, 1, 0, 0, 0, 0)", WorldServer.Database.Connection.Instance);
            try
            {
                cmd3.Prepare();
                cmd3.Parameters.AddWithValue("@name", cclient.Name);
                cmd3.ExecuteNonQuery();
            }
            catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
            finally { cmd3.Dispose(); }

            #endregion

            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_WORLD_ENTER);
            if (cclient.account == null) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteUInt32Reverse(cclient.account.Character);
                Out.WriteUInt32Reverse(cclient.Points);
                Out.WriteByte(cclient.isGM);
                Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
                Out.WriteFloat(5.00f);
                Out.WriteByte(0);
                Out.WriteByte(0);
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 1, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 2, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 3, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 4, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 5, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteByte(1);
                Out.WriteByte(cclient.LFG);
            }
            cclient.Crypto = new TCP.Encryption(cclient.account.SessionId);
            cclient.Send(new DISTRICT_LIST());
            cclient.Send(Out);
            return 0;
        }

        #region get Functions
        private UInt32 getID(MySqlDataReader reader)
        {
            UInt32 id = reader.GetUInt32(0);
            return id;
        }

        private String getName(MySqlDataReader reader)
        {
            String name = reader.GetString(3);
            return name;
        }

        private Byte getFaction(MySqlDataReader reader)
        {
            Byte faction = reader.GetByte(4);
            return faction;
        }

        private Byte getGender(MySqlDataReader reader)
        {
            Byte gender = reader.GetByte(5);
            return gender;
        }

        private UInt32 getRank(MySqlDataReader reader)
        {
            UInt32 rank = reader.GetUInt32(6);
            return rank;
        }

        private UInt32 getMoney(MySqlDataReader reader)
        {
            UInt32 money = reader.GetUInt32(7);
            return money;
        }

        private Byte getThreat(MySqlDataReader reader)
        {
            Byte threat = reader.GetByte(8);
            return threat;
        }

        private UInt32 getPlayTime(MySqlDataReader reader)
        {
            UInt32 playtime = reader.GetUInt32(9);
            return playtime;
        }

        private String getClan(MySqlDataReader reader)
        {
            String clan = reader.GetString(10);
            return clan;
        }

        private String getEmail(MySqlDataReader reader)
        {
            String email = reader.GetString(1);
            return email;
        }

        private Byte getBanned(MySqlDataReader reader)
        {
            Byte banned = reader.GetByte(7);
            return banned;
        }

        private Byte getGm(MySqlDataReader reader)
        {
            UInt32 gm = reader.GetUInt32(6);
            Byte gm2 = Convert.ToByte(gm);
            return gm2;
        }

        private UInt32 getPoints(MySqlDataReader reader)
        {
            UInt32 points = reader.GetUInt32(5);
            return points;
        }
        #endregion
    }
}