using FrameWork.NetWork;
using MySql.Data.MySqlClient;
using MySql.Data.Types;
using System;

namespace WorldServer.TCP.ServerPackets
{
    public class ANS_GROUP_INVITE : PacketOut
    {
        public ANS_GROUP_INVITE(String charName, WorldClient client) : base((UInt32)Opcodes.ANS_GROUP_INVITE)
        {
            MySqlCommand cmd = new MySqlCommand("SELECT COUNT(*) FROM `characters` WHERE `name`= @name", WorldServer.Database.Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@name", charName);
                Byte rows = Convert.ToByte(cmd.ExecuteScalar());
                if (client.Name == charName) WriteUInt32Reverse((uint)ResponseCodes.RC_GROUP_INVITE_SELF);
                else if (client.Name != charName)
                {
                    if (rows < 1) WriteUInt32Reverse((uint)ResponseCodes.RC_GROUP_INVITE_NOT_FOUND);
                    else if (rows >= 1)
                    {
                        WriteUInt32((uint)ResponseCodes.RC_SUCCESS);
                        WriteParsedString(charName);
                    }
                }
            }
            finally
            {
                cmd.Dispose();
            }
        }
    }
}
