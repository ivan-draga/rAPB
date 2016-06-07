using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace LobbyServer.World
{
    enum OpCodes
    {
        WL_REGISTER_WORLD = 0x00,
        LW_REGISTER_SUCCESS = 0x00,
        WL_SET_DATA = 0x01,
        LW_ACCOUNT_ENTER = 0x01
    }
}
