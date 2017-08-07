using FrameWork.Logger;

namespace WorldServer.Lobby.LW
{
    class RegisterSuccess : Packet,IPacket
    {
        public void Handle()
        {
            Position = 0;
            Program.WorldId = ReadD();
            Log.Succes("RegisterSuccess","Registered with a following ID: " + Program.WorldId);
            Program.Lobby.Send(new WL.SetData(Program.IP1, Program.IP2, Program.IP3, Program.IP4, (uint)Program.Port));
        }
    }
}
