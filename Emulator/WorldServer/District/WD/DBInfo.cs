using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WorldServer.Districts.WD
{
    class DBInfo : Packet
    {
        public DBInfo(String connection) : base()
        {
            WriteByte((Byte)OpCodes.WD_DB_INFO);
            WriteS(connection);
        }
    }
}
