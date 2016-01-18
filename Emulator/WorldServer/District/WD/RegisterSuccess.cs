using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WorldServer.Districts.WD
{
    class RegisterSuccess : Packet
    {
        public RegisterSuccess(UInt32 worldId) : base()
        {
            WriteByte((Byte)OpCodes.WD_REGISTER_SUCCESS);
            WriteD(worldId);
        }
    }
}
