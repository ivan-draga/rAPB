using FrameWork.NetWork;
using MyDB;

namespace LobbyServer.TCP.Packets
{
    static public class CHARACTER_LIST
    {
        static public void Send(LobbyClient client)
        {
            client.Characters = Databases.CharacterTable.Select(c => c.AccountIndex == client.Account.Index);
            PacketOut Out = new PacketOut((uint)Opcodes.CHARACTER_LIST);
            Out.WriteByte((byte)client.Characters.Count);
            Out.WriteInt32Reverse(8); 
            Out.WriteByte(client.Account.Threat); 
            lock (Program.worldListener.Worlds)
            {
                foreach (CharacterEntry chr in client.Characters)
                {
                    Out.WriteByte(chr.Slot);
                    Out.WriteByte(chr.Faction);
                    Out.WriteByte(1);
                    Out.WriteInt32Reverse(chr.World);
                    World.World info = null;
                    Program.worldListener.Worlds.TryGetValue((uint)chr.World, out info);
                    if (info != null) Out.WriteParsedString(info.Name, 32);
                    else Out.WriteParsedString("(unavailable)", 32);
                    Out.WriteParsedString(chr.Name, 32);
                    Out.WriteInt32Reverse(chr.Rank);
                    Out.WriteInt32Reverse(0);
                    Out.WriteByte(0);
                    Out.WriteByte(0);
                    Out.WriteByte(0);
                    Out.WriteByte(0);
                    Out.WriteInt32Reverse(0);
                    Out.WriteInt32Reverse(0);
                }
            }
            client.Send(Out);
            if (client.Characters.Count <= 0) WORLD_LIST.Send(client);
        }
    }
}
