using MySql.Data.MySqlClient;
using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Text;

namespace MyDB
{
    public class Database
    {
        private bool Connected
        {
            get
            {
                return m_connection.State == ConnectionState.Open;
            }
        }

        private string m_connectionString;
        private MySqlConnection m_connection;
        private List<string> m_tables;

        public Database(string host, int port, string username, string password, string database)
        {
            m_connectionString = String.Format("server={0};port={1};uid={2};pwd={3};database={4};", host, port, username, password, database);
            m_connection = new MySqlConnection();

            m_connection.ConnectionString = m_connectionString;
        }

        public List<T> GetObjects<T>() where T : struct
        {
            if (!Connected)
                Connect();

            object[] tableAttribute = typeof(T).GetCustomAttributes(typeof(DatabaseTable), false);
            Debug.Assert(tableAttribute != null && tableAttribute.Length > 0);

            DatabaseTable t = (DatabaseTable)tableAttribute[0];

            using (MySqlCommand cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("SELECT * FROM `{0}`;", t.Name);

                using (var reader = cmd.ExecuteReader())
                {
                    if (reader.HasRows)
                    {
                        List<T> rows = new List<T>();

                        while (reader.Read())
                        {
                            object o = new T();

                            for (int i = 0; i < reader.FieldCount; i++)
                            {
                                string name = reader.GetName(i);
                                FieldInfo f = o.GetType().GetField(name);
                                f.SetValue(o, reader.GetValue(i));
                            }

                            rows.Add((T)o);
                        }

                        return rows;
                    }
                    else
                        return new List<T>();
                }
            }
        }

        public void Insert<T>(T value) where T : struct
        {
            if (!Connected)
                Connect();

            object val = value;
            StringBuilder queryBuilder = new StringBuilder(4096);

            Type type = typeof(T);
            object[] o = type.GetCustomAttributes(typeof(DatabaseTable), false);
            if (o.Length <= 0)
                throw new Exception("Expected this to have a table attribute.");

            DatabaseTable t = (DatabaseTable)o[0];
            queryBuilder.AppendFormat("INSERT INTO `{0}` (", t.Name);

            StringBuilder valueBuilder = new StringBuilder(4096);
            using (var cmd = m_connection.CreateCommand())
            {
                bool first = true;

                foreach (var field in type.GetFields(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance))
                {
                    if (first)
                        first = false;
                    else
                    {
                        valueBuilder.Append(",");
                        queryBuilder.Append(",");
                    }

                    string parameter = String.Format("@param{0}", field.Name);
                    valueBuilder.Append(parameter);
                    cmd.Parameters.AddWithValue(parameter, field.GetValue(val));

                    queryBuilder.AppendFormat("`{0}`", field.Name);
                }

                queryBuilder.Append(") VALUES (");
                queryBuilder.Append(valueBuilder);
                queryBuilder.Append(");");

                cmd.CommandText = queryBuilder.ToString();
                int reuslt = cmd.ExecuteNonQuery();
            }
        }

        public void Update<T>(T value) where T : struct
        {
            if (!Connected)
                Connect();

            object val = value;
            StringBuilder queryBuilder = new StringBuilder(4096);

            Type type = typeof(T);
            object[] o = type.GetCustomAttributes(typeof(DatabaseTable), false);
            if (o.Length <= 0)
                throw new Exception("Expected this to have a table attribute.");

            DatabaseTable t = (DatabaseTable)o[0];
            queryBuilder.AppendFormat("UPDATE `{0}` SET ", t.Name);

            using (var cmd = m_connection.CreateCommand())
            {
                bool first = true;

                foreach (var field in type.GetFields(System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.Instance))
                {
                    if (field.Name == "Index")
                        continue;

                    if (first)
                        first = false;
                    else
                        queryBuilder.Append(",");

                    string parameter = String.Format("@param{0}", field.Name);
                    queryBuilder.AppendFormat("`{0}` = " + parameter, field.Name);
                    cmd.Parameters.AddWithValue(parameter, field.GetValue(val));
                }

                queryBuilder.Append(" WHERE `Index` = @paramIndex");
                cmd.Parameters.AddWithValue("@paramIndex", type.GetField("Index").GetValue(val));

                cmd.CommandText = queryBuilder.ToString();
                int result = cmd.ExecuteNonQuery();
            }
        }

        public void Remove<T>(T value) where T : struct
        {
            if (!Connected)
                Connect();

            object val = value;
            StringBuilder queryBuilder = new StringBuilder(4096);

            Type type = typeof(T);
            object[] o = type.GetCustomAttributes(typeof(DatabaseTable), false);
            if (o.Length <= 0)
                throw new Exception("Expected this to have a table attribute.");

            DatabaseTable t = (DatabaseTable)o[0];
            queryBuilder.AppendFormat("DELETE FROM `{0}` WHERE `Index` = @paramIndex", t.Name);

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.Parameters.AddWithValue("@paramIndex", type.GetField("Index").GetValue(val));
                cmd.CommandText = queryBuilder.ToString();
                int reuslt = cmd.ExecuteNonQuery();
            }
        }

        public void CreateStructure(Type t)
        {
            if (!Connected)
                Connect();

            object[] tableAttributes = t.GetCustomAttributes(typeof(DatabaseTable), false);
            if (tableAttributes.Length < 1)
                throw new Exception("Can't create a database structure when the structure is not a DatabaseTable.");

            DatabaseTable table = (DatabaseTable)tableAttributes[0];

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("DROP TABLE IF EXISTS `{0}`", table.Name);
                int result = cmd.ExecuteNonQuery();
            }

            StringBuilder createBuilder = new StringBuilder(4096);
            createBuilder.AppendFormat("CREATE TABLE `{0}` (", table.Name);

            bool first = true;
            foreach (FieldInfo f in t.GetFields())
            {
                if (first)
                    first = false;
                else
                    createBuilder.Append(",");

                createBuilder.AppendFormat("`{0}` {1}{2}", f.Name, TypeToColumnDescription(f.FieldType), f.Name == "Index" ? " AUTO_INCREMENT" : "");
            }

            createBuilder.Append(",PRIMARY KEY(`Index`)) ENGINE=MyISAM DEFAULT CHARSET=latin1");

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = createBuilder.ToString();
                int result = cmd.ExecuteNonQuery();
            }
        }

        public void UpdateStructure(Type t)
        {
            if (!Connected)
                Connect();

            object[] tableAttributes = t.GetCustomAttributes(typeof(DatabaseTable), false);
            if (tableAttributes.Length < 1)
                throw new Exception("Can't create a database structure when the structure is not a DatabaseTable.");

            DatabaseTable table = (DatabaseTable)tableAttributes[0];

            List<KeyValuePair<string, Type>> databaseColumns = GetColumns(table);
            if (!databaseColumns.Exists(c => c.Key == "Index"))
                throw new Exception("Database structure missing the Index column.");

            List<KeyValuePair<string, Type>> structColumns = t.GetFields().Select(f => new KeyValuePair<string, Type>(f.Name, f.FieldType)).ToList();

            var unusedColumns = databaseColumns.Except(structColumns).ToArray();
            if (unusedColumns.Length > 0)
            {
                foreach (var col in unusedColumns)
                    RemoveColumn(table, col.Key);
            }

            var missingColumns = structColumns.Except(databaseColumns).ToArray();
            if (missingColumns.Length > 0)
            {
                foreach (var col in missingColumns)
                    AddColumn(table, col.Key, col.Value);
            }
        }

        public bool ContainsTable(DatabaseTable t)
        {
            if (!Connected)
                Connect();

            return m_tables.Contains(t.Name);
        }

        private List<KeyValuePair<string, Type>> GetColumns(DatabaseTable table)
        {
            if (!Connected)
                Connect();

            List<KeyValuePair<string, Type>> columns = new List<KeyValuePair<string, Type>>();

            using (MySqlCommand cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("SELECT * FROM `{0}`", table.Name);

                using (var reader = cmd.ExecuteReader(CommandBehavior.SchemaOnly))
                {
                    for (int i = 0; i < reader.FieldCount; i++)
                        columns.Add(new KeyValuePair<string, Type>(reader.GetName(i), reader.GetFieldType(i)));
                }
            }

            return columns;
        }

        private List<string> GetTables()
        {
            if (!Connected)
                Connect();

            List<string> tables = new List<string>();

            using (MySqlCommand cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = "SHOW TABLES";

                using (var reader = cmd.ExecuteReader())
                {
                    if (reader.HasRows)
                    {
                        while (reader.Read())
                            tables.Add(reader.GetString(0));
                    }
                }
            }

            return tables;
        }

        private void AddColumn(DatabaseTable table, string name, Type t)
        {
            if (!Connected)
                Connect();

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("ALTER TABLE `{0}` ADD `{1}` {2}", table.Name, name, TypeToColumnDescription(t));
                int result = cmd.ExecuteNonQuery();
            }
        }

        private void RemoveColumn(DatabaseTable table, string name)
        {
            if (!Connected)
                Connect();

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("ALTER TABLE `{0}` DROP COLUMN `{1}`", table.Name, name);
                int result = cmd.ExecuteNonQuery();
            }
        }

        private void RenameColumn(DatabaseTable table, string oldName, string newName)
        {
            if (!Connected)
                Connect();

            using (var cmd = m_connection.CreateCommand())
            {
                cmd.CommandText = String.Format("ALTER TABLE `{0}` RENAME COLUMN `{1}` TO `{2}`", table.Name, oldName, newName);
                int result = cmd.ExecuteNonQuery();
            }
        }

        private string TypeToColumnDescription(Type t)
        {
            if (t == typeof(long))
                return "bigint(21)";
            else if (t == typeof(int))
                return "int(11)";
            else if (t == typeof(short))
                return "smallint(6)";
            else if (t == typeof(sbyte))
                return "tinyint(4)";
            else if (t == typeof(ulong))
                return "bigint(21) UNSIGNED";
            else if (t == typeof(uint))
                return "int(11) UNSIGNED";
            else if (t == typeof(ushort))
                return "smallint(6) UNSIGNED";
            else if (t == typeof(byte))
                return "tinyint(4) UNSIGNED";
            else if (t == typeof(string))
                return "text";
            else
                throw new Exception("Not a valid column type.");
        }

        private void Connect()
        {
            m_connection.Open();

            m_tables = GetTables();
        }
    }
}