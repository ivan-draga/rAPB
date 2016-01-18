using MySql.Data.MySqlClient;
using MySql.Data.Types;

using System;
using System.Collections.Generic;

namespace LobbyServer.Database
{
    public class Characters
    {
        #region MySQLCommands

        public static MySqlCommand getById
        {
            get
            {
                return new MySqlCommand("SELECT * FROM `characters` WHERE `account` = @account", Connection.Instance);
            }
        }

        public static MySqlCommand create
        {
            get
            {
                return new MySqlCommand("INSERT INTO `characters` VALUES(0,@account,@slot,@name,@faction,@gender,@rank,@money,@threat,@playtime,@clan,@version,@appearence,@custom,@world)", Connection.Instance);
            }
        }

        public static MySqlCommand delete
        {
            get
            {
                return new MySqlCommand("DELETE FROM `characters` WHERE `account` = @account AND `slot` = @slot", Connection.Instance);
            }
        }

        public static MySqlCommand exists
        {
            get
            {
                return new MySqlCommand("SELECT `id` FROM `characters` WHERE `name` = @name", Connection.Instance);
            }
        }

        #endregion

        #region Properties

        private Dictionary<Byte, Character> characters = new Dictionary<Byte, Character>();
        public Dictionary<Byte, Character> List
        {
            get
            {
                return characters;
            }
        }
        private Byte length = 0;
        public Byte Length
        {
            get
            {
                return length;
            }
        }
        private Boolean[] busySlots = new Boolean[8];
        public UInt32 AccountId
        {
            get;
            private set;
        }

        #endregion

        public Characters(UInt32 accountId)
        {
            MySqlCommand command = getById;
            command.Prepare();
            command.Parameters.AddWithValue("@account", accountId);
            MySqlDataReader reader = command.ExecuteReader();
            try
            {
                while (reader.Read())
                {
                    Character character = toObject(reader);
                    busySlots[character.Slot-1] = true;
                    characters.Add(character.Slot, character);
                    length++;
                }
            }
            finally
            {
                reader.Close();
                command.Dispose();
                AccountId = accountId;
            }
        }

        public Byte getFreeSlot()
        {
            Byte i;
            for (i = 0; i < 8; i++) if (!busySlots[i]) break;
            return (i==8)?(Byte)0:(Byte)(i+1);
        }

        public void Create(Character character)
        {
            MySqlCommand command = create;
            command.Prepare();
            command.Parameters.AddWithValue("@account", AccountId);
            command.Parameters.AddWithValue("@slot", character.Slot);
            command.Parameters.AddWithValue("@name", character.Name);
            command.Parameters.AddWithValue("@faction", character.Faction);
            command.Parameters.AddWithValue("@gender", character.Gender);
            command.Parameters.AddWithValue("@rank", 9);
            command.Parameters.AddWithValue("@money", character.Money);
            command.Parameters.AddWithValue("@threat", 1);
            command.Parameters.AddWithValue("@playtime", character.Playtime);
            command.Parameters.AddWithValue("@clan", character.Clan);
            command.Parameters.AddWithValue("@version", character.Version);
            command.Parameters.AddWithValue("@appearence", character.Appearence);
            command.Parameters.AddWithValue("@custom", character.Custom);
            command.Parameters.AddWithValue("@world", character.WorldId);
            try
            {
                if (command.ExecuteNonQuery() == 0) throw (new Exception("Failed to create a character"));
                else
                {
                    busySlots[character.Slot - 1] = true; 
                    characters.Add(character.Slot, character);
                }
            }
            finally
            {
                command.Dispose();
            }
        }

        public void Delete(Byte slotId)
        {
            if (!busySlots[slotId - 1]) return;
            MySqlCommand command = delete;
            command.Prepare();
            command.Parameters.AddWithValue("@account", AccountId);
            command.Parameters.AddWithValue("@slot", slotId);
            try
            {
                if (command.ExecuteNonQuery() == 0) throw (new Exception("Failed to delete a character"));
                else
                {
                    busySlots[slotId - 1] = false;
                    characters.Remove(slotId);
                }
            }
            finally
            {
                command.Dispose();
            }
        }

        public Character Get(Byte slotId)
        {
            Character result = null;
            characters.TryGetValue(slotId, out result);
            return result;
        }

        public Boolean Exists(String name)
        {
            MySqlCommand command = exists;
            command.Prepare();
            command.Parameters.AddWithValue("@name", name);
            object result = null;
            try
            {
                result = command.ExecuteScalar();
            }
            finally
            {
                command.Dispose();
            }
            return result != null;
        }

        #region Helper
        
        private Character toObject(MySqlDataReader reader)
        {
            Character character = new Character();
            character.Id = reader.GetUInt32(0);
            character.Slot = reader.GetByte(2);
            character.Name = reader.GetString(3);
            character.Faction = reader.GetByte(4);
            character.Gender = reader.GetByte(5);
            character.Rank = reader.GetUInt32(6);
            character.Money = reader.GetUInt32(7);
            character.Threat = reader.GetByte(8);
            character.Playtime = reader.GetUInt32(9);
            character.Clan = reader.GetString(10);
            character.Version = reader.GetUInt32(11);
            character.Appearence = reader.GetString(12);
            character.Custom = reader.GetString(13);
            character.WorldId = reader.GetUInt32(14);
            return character;
        }

        #endregion
    }

    public class Character
    {
        public UInt32 Id;
        public Byte Slot;
        public String Name;
        public Byte Faction;
        public Byte Gender;
        public UInt32 Rank;
        public UInt32 Money;
        public Byte Threat;
        public UInt32 Playtime;
        public String Clan = "APB-EMU";
        public UInt32 Version;
        public String Appearence = "";
        public String Custom;
        public UInt32 WorldId;
        bool _Online = false; 
        public bool Online
        {
            get { return _Online; }
            set { _Online = value; }
        }

        public Byte[] getCustom()
        {
            Byte[] result = null;
            if (Custom != null && Custom.Length > 1)
            {
                String[] values = Custom.Split('-');
                result = new Byte[values.Length];
                for (int i = 0; i < values.Length; ++i) result[i] = values[i].Length > 1 ? Convert.ToByte(values[i], 16) : (byte)0;
            }
            return result;
        }
    }
}
