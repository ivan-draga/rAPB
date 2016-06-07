using FrameWork.NetWork;
using System;
using MyDB;

namespace LobbyServer
{
    static class ANS_CHARACTER_CREATE
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_CREATE);
            if (client.Pending.Index < 1) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteInt32Reverse(client.Pending.Slot);
            }
            client.Pending = default(CharacterEntry);
            client.Send(Out);
            System.Threading.Thread.Sleep(200);
            client.Disconnect();
        }
    }
}
