using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LobbyServer.World.LW
{
    class RegisterSuccess : Packet
    {
        public RegisterSuccess(UInt32 worldId) : base()
        {
            WriteByte((Byte)OpCodes.LW_REGISTER_SUCCESS);
            WriteD(worldId);
        }
    }
}
