using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using FrameWork.Logger;
using FrameWork.NetWork;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_LIST, "onAskWorldList")]
    public class ASK_WORLD_LIST : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            WORLD_LIST.Send(cclient);
            return 0;
        }
    }
}
