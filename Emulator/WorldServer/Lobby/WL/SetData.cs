using System;

namespace WorldServer.Lobby.WL
{
    class SetData : Packet
    {
        public SetData(byte IP1, byte IP2, byte IP3, byte IP4, uint Port, byte Population) : base()
        {
            WriteByte((byte)OpCodes.WL_SET_DATA);
            WriteByte(IP1);
            WriteByte(IP2);
            WriteByte(IP3);
            WriteByte(IP4);
            WriteD(Port);
            WriteByte(Population);
        }
    }
}
