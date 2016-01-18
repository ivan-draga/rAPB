using FrameWork.NetWork;
using MySql.Data.MySqlClient;
using MySql.Data.Types;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_IGNORELIST_ADD : PacketOut
    {
        public ANS_IGNORELIST_ADD(String charName, WorldClient client)
            : base((UInt32)Opcodes.ANS_IGNORELIST_ADD)
        {
            MySqlCommand cmd = new MySqlCommand("SELECT COUNT(*) FROM `characters` WHERE `name`= @name", WorldServer.Database.Connection.Instance);
            MySqlCommand cmd2 = new MySqlCommand("SELECT * FROM `characters` WHERE `name` = @name", WorldServer.Database.Connection.Instance);
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
                    }
                }
                catch (MySqlException e) { FrameWork.Logger.Log.Error("MySQL", e.ToString()); }
                finally { reader.Close(); reader.Dispose(); }
                Byte rows = Convert.ToByte(cmd.ExecuteScalar());
                if (client.Name == charName) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SELF);
                else if (client.Name != charName)
                {
                    if (client.AccountId == charAccID) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_SAME_ACCOUNT);
                    else if (client.AccountId != charAccID)
                    {
                        if (rows < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_IGNORELIST_ADD_NOT_FOUND);
                        else if (rows >= 1)
                        {
                            WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                            WriteUInt32Reverse(charID);
                            WriteParsedString(charName);
                        }
                    }
                }
            }
            finally
            {
                cmd.Dispose();
                cmd2.Dispose();
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

        private UInt32 charAccID = 0;
        private UInt32 charID = 0;

        #endregion
    }
}
