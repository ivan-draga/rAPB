namespace WorldServer.Lobby
{
    public class Acc
    {
        public uint Character;
        public byte[] SessionId;
        public Acc(uint character, byte[] sessionId)
        {
            Character = character;
            SessionId = sessionId;
        }
    }
}
