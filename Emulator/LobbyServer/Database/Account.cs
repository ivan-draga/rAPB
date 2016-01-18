using MySql.Data.MySqlClient;
using MySql.Data.Types;

using System;

namespace LobbyServer.Database
{
    public class Account
    {
        #region MySQLCommands

        public static MySqlCommand getById
        {
            get
            {
                return new MySqlCommand("SELECT * FROM `accounts` WHERE `id` = @id", Connection.Instance);
            }
        }

        public static MySqlCommand getByEmail
        {
            get
            {
                return new MySqlCommand("SELECT * FROM `accounts` WHERE `email` = @email", Connection.Instance);
            }
        }

        public static MySqlCommand save
        {
            get
            {
                return new MySqlCommand("UPDATE `accounts` SET `email` = @email, `username` = @username, `verifier` = @verifier, `salt` = @salt, `points` = @points, `admin` = @admin, `banned` = @banned WHERE `id` = @id", Connection.Instance);
            }
        }

        #endregion

        #region Properties

        public UInt32 Id;
        public String Email;
        public String Password;
        public String Verifier;
        public String Salt;
        public UInt32 Admin;
        public UInt32 Points;
        public Byte Banned;
        public Byte extrn_login;
        public String token;
        public Byte canhost;
        public int WorldId;

        #endregion

        private Account() { }
        public Account(UInt32 accountId)
        {
            MySqlCommand command = getById;
            command.Prepare();
            command.Parameters.AddWithValue("@id", accountId);
            MySqlDataReader reader = command.ExecuteReader();
            try
            {
                if (reader.FieldCount == 0) throw (new Exception("Not found"));
                reader.Read();
                toObject(reader);
            }
            finally
            {
                reader.Close();
                command.Dispose();
            }
        }

        public Account(String Email)
        {
            MySqlCommand command = getByEmail;
            command.Prepare();
            command.Parameters.AddWithValue("@email", Email);
            MySqlDataReader reader = command.ExecuteReader();
            try
            {
                if (reader.FieldCount == 0) throw (new Exception("Not found"));
                reader.Read();
                toObject(reader);
            }
            finally
            {
                reader.Close();
                reader.Dispose();
                command.Dispose();
            }
        }

        public void Save()
        {
            MySqlCommand command = save;
            command.Prepare();
            command.Parameters.AddWithValue("@id", Id);
            command.Parameters.AddWithValue("@email", Email);
            command.Parameters.AddWithValue("@username", Password);
            command.Parameters.AddWithValue("@verifier", Verifier);
            command.Parameters.AddWithValue("@salt", Salt);
            command.Parameters.AddWithValue("@points", Points);
            command.Parameters.AddWithValue("@admin", Admin);
            command.Parameters.AddWithValue("@banned", Banned);
            try
            {
                if (command.ExecuteNonQuery() == 0) throw (new Exception("Failed to save the account"));
            }
            finally
            {
                command.Dispose();
            }
        }

        private void toObject(MySqlDataReader reader)
        {
            Id = reader.GetUInt32(0);
            Email = reader.GetString(1);
            Password = reader.GetString(2);
            Verifier = reader.GetString(3);
            Salt = reader.GetString(4);
            Points = reader.GetUInt32(5);
            Admin = reader.GetUInt32(6);
            Banned = reader.GetByte(7);
            extrn_login = reader.GetByte(8);
            token = reader.GetString(9);
            canhost = reader.GetByte(10);
        }
    }
}
