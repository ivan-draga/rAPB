using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WorldServer.Districts.WD
{
    class MessageInfo : Packet
    {
        public MessageInfo(String connection) : base()
        {
            WriteByte((Byte)OpCodes.WD_MSG_INFO);
            WriteS(connection);
        }
    }
}
