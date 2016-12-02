namespace WorldServer.Districts.WD
{
    class MessageInfo : Packet
    {
        public MessageInfo(string msg, byte[] key, byte[] handshake) : base()
        {
            WriteByte((byte)OpCodes.WD_MSG_INFO);
            WriteS(msg);
            Write(key, 0, key.Length);
            WriteByte((byte)handshake.Length);
            Write(handshake, 0, handshake.Length);
        }
    }
}
