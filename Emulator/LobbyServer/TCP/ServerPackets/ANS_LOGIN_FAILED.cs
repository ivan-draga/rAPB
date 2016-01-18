using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using FrameWork.NetWork;

namespace LobbyServer
{
    static public class ANS_LOGIN_FAILED
    {
        static public void Send(LobbyClient client, int code)
        {
            PacketOut packet = new PacketOut((UInt32)Opcodes.ANS_LOGIN_FAILED);
            packet.WriteInt32Reverse(code);
            client.Send(packet);
        }
    }
}