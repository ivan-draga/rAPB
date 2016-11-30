using System;

namespace MyDB
{
    public class DatabaseTable : Attribute
    {
        public string Name
        {
            get;
            private set;
        }

        public DatabaseTable(string name)
        {
            Name = name;
        }
    }
}
