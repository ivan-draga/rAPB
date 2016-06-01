using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

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
