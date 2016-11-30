namespace WorldServer.Districts.WD
{
    class MessageInfo : Packet
    {
        public MessageInfo(string msg, byte[] data) : base()
        {
            WriteByte((byte)OpCodes.WD_MSG_INFO);
            WriteS(msg);
            Write(data, 0, data.Length);
        }
    }
}
