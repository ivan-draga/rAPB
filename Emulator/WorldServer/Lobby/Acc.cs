using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace WorldServer.Lobby
{
    public class Acc
    {
        public UInt32 Character;
        public Byte[] SessionId;
        public Acc(UInt32 character, Byte[] sessionId)
        {
            Character = character;
            SessionId = sessionId;
        }
    }
}
