using FrameWork.NetWork;
using System;

namespace LobbyServer
{
    static class ANS_CHARACTER_CREATE
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_CREATE);
            if (client.Pending == null) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteInt32Reverse(client.Pending.Slot);
            }
            client.Pending = null;
            client.Send(Out);
            client.Disconnect(); //temporar fix for hanging after done with char creation
        }
    }
}
