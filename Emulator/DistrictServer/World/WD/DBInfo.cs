using FrameWork.Logger;
using System;
using MySql.Data.MySqlClient;
using System.IO;

namespace DistrictServer.World.WD
{
    class DBInfo : Packet, IPacket
    {
        public void Handle()
        {
            Position = 0;
            String connection = ReadS();
            Connection.connectionString = connection;
            Log.Info("DBInfo", "Database info received");
            string line = null;
            string token = null;
            string tokencheck = null;
            Byte canhost = 0;
            try
            {
                System.IO.StreamReader file = new System.IO.StreamReader("Configs\\Client stuff (put into 'Binaries' folder)\\_rtoken.id");
                while ((line = file.ReadLine()) != null) token = line;
                file.Close();
            }
            catch (FileNotFoundException)
            {
                Log.Error("Token", "\"token.id\" file not found!");
                System.Threading.Thread.Sleep(3000);
                Environment.Exit(2);
            }
            Log.Info("Host", "Checking hosting privilege for token: " + token);
            MySqlCommand cmd = new MySqlCommand("SELECT * FROM `accounts` WHERE `token` = @token", Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@token", token);
                cmd.ExecuteNonQuery();
                MySqlDataReader reader = cmd.ExecuteReader();
                try
                {
                    while (reader.Read())
                    {
                        tokencheck = reader.GetString(9);
                        canhost = reader.GetByte(10);
                    }
                }
                catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
                finally { reader.Dispose(); }
            }
            catch (MySqlException e) { Log.Error("MySQL", e.ToString()); }
            finally { cmd.Dispose(); }
            if (tokencheck != token)
            {
                Log.Error("Token", "Your token is invalid!");
                System.Threading.Thread.Sleep(3000);
                Environment.Exit(2);
            }
            else if (tokencheck == token)
            {
                if (canhost == 0)
                {
                    Log.Error("Host", "You are not allowed to host a district!");
                    System.Threading.Thread.Sleep(3000);
                    Environment.Exit(2);
                }
                else if (canhost == 1)
                {
                    Log.Succes("Host", "Token check complete. You are allowed to host a district!");
                    Listener.Start();
                }
            }
        }
    }
}
