namespace WorldServer.Districts.WD
{
    class MessageInfo : Packet
    {
        public MessageInfo(string connection) : base()
        {
            WriteByte((byte)OpCodes.WD_MSG_INFO);
            WriteS(connection);
        }
    }
}
