using FrameWork.NetWork;
using MySql.Data.MySqlClient;
using MySql.Data.Types;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_FRIENDLIST_ADD : PacketOut
    {
        public ANS_FRIENDLIST_ADD(String charName, WorldClient client)
            : base((UInt32)Opcodes.ANS_FRIENDLIST_ADD)
        {
            MySqlCommand cmd = new MySqlCommand("SELECT COUNT(*) FROM `characters` WHERE `name`= @name", WorldServer.Database.Connection.Instance);
            MySqlCommand cmd2 = new MySqlCommand("SELECT * FROM `characters` WHERE `name` = @name", WorldServer.Database.Connection.Instance);
            MySqlCommand cmd3 = new MySqlCommand("SELECT * FROM `clientstatus` WHERE `name` = @name", WorldServer.Database.Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@name", charName);
                cmd2.Prepare();
                cmd2.Parameters.AddWithValue("@name", charName);
                cmd2.ExecuteNonQuery();
                MySqlDataReader reader = cmd2.ExecuteReader();
                try
                {
                    while (reader.Read())
                    {
                        charAccID = getAccID(reader);
                        charID = getCharID(reader);
                        faction = getFaction(reader);
                    }
                }
                catch (MySqlException e) { FrameWork.Logger.Log.Error("MySQL", e.ToString()); }
                finally { reader.Close(); reader.Dispose(); }
                Byte rows = Convert.ToByte(cmd.ExecuteScalar());
                cmd3.Prepare();
                cmd3.Parameters.AddWithValue("@name", charName);
                cmd3.ExecuteNonQuery();
                MySqlDataReader reader2 = cmd3.ExecuteReader();
                if (client.Name == charName)
                {
                    WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SELF);
                    reader2.Close();
                    reader2.Dispose();
                }
                else if (client.Name != charName)
                {
                    if (client.AccountId == charAccID)
                    {
                        WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_SAME_ACCOUNT);
                        reader2.Close();
                        reader2.Dispose();
                    }
                    else if (client.AccountId != charAccID)
                    {
                        if (rows < 1)
                        {
                            WriteUInt32Reverse((uint)ResponseCodes.RC_FRIENDLIST_ADD_INVALID_NAME);
                            reader2.Close();
                            reader2.Dispose();
                        }
                        else if (rows >= 1)
                        {
                            try
                            {
                                while (reader2.Read())
                                {
                                    districtID = getDistrictID(reader2);
                                    districtType = getDistrictType(reader2);
                                    isOnline = getOnlineStatus(reader2);
                                    isLfg = getLfgStatus(reader2);
                                    groupStatus = getGrpStatus(reader2);
                                    groupPubStatus = getGrpPubStatus(reader2);
                                    groupInvStatus = getGrpInvStatus(reader2);
                                }
                            }
                            catch (MySqlException e) { FrameWork.Logger.Log.Error("MySQL", e.ToString()); }
                            finally { reader2.Close(); reader2.Dispose(); }
                            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            WriteParsedString(charName);
                            WriteByte(faction);
                            WriteByte(isOnline);
                            WriteUInt32Reverse(charID);
                            WriteByte(isLfg);
                            WriteByte(groupStatus);
                            WriteByte(groupPubStatus);
                            WriteByte(groupInvStatus);
                            WriteUInt32((uint)(districtID & districtType));
                            WriteByte(0); //districtstatus
                        }
                    }
                }
            }
            finally
            {
                cmd.Dispose();
                cmd2.Dispose();
                cmd3.Dispose();
            }
        }

        #region get Functions

        private UInt32 getAccID(MySqlDataReader reader)
        {
            UInt32 accid = reader.GetUInt32(1);
            return accid;
        }

        private UInt32 getCharID(MySqlDataReader reader)
        {
            UInt32 charid = reader.GetUInt32(0);
            return charid;
        }

        private Byte getFaction(MySqlDataReader reader)
        {
            Byte faction = reader.GetByte(4);
            return faction;
        }

        private Byte getDistrictID(MySqlDataReader reader)
        {
            Byte disid = reader.GetByte(1);
            return disid;
        }

        private Byte getDistrictType(MySqlDataReader reader)
        {
            Byte type = reader.GetByte(2);
            return type;
        }

        private Byte getOnlineStatus(MySqlDataReader reader)
        {
            Byte online = reader.GetByte(3);
            return online;
        }

        private Byte getLfgStatus(MySqlDataReader reader)
        {
            Byte lfg = reader.GetByte(4);
            return lfg;
        }

        private Byte getGrpStatus(MySqlDataReader reader)
        {
            Byte grpstatus = reader.GetByte(5);
            return grpstatus;
        }

        private Byte getGrpPubStatus(MySqlDataReader reader)
        {
            Byte grppub = reader.GetByte(6);
            return grppub;
        }

        private Byte getGrpInvStatus(MySqlDataReader reader)
        {
            Byte grpinv = reader.GetByte(7);
            return grpinv;
        }

        private UInt32 charAccID = 0;
        private UInt32 charID = 0;
        private Byte faction = 0;

        private Byte districtID = 0;
        private Byte districtType = 0;
        private Byte isOnline = 0;
        private Byte isLfg = 0;
        private Byte groupStatus = 0;
        private Byte groupPubStatus = 0;
        private Byte groupInvStatus = 0;

        #endregion
    }
}
