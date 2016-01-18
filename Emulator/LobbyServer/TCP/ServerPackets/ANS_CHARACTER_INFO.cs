using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using FrameWork.NetWork;

using LobbyServer.Database;

namespace LobbyServer
{
    static public class ANS_CHARACTER_INFO
    {
        static public void Send(LobbyClient client)
        {
            client.Characters = new Characters(client.Account.Id);
            PacketOut Out = new PacketOut((UInt32)Opcodes.CHARACTER_LIST);
            Out.WriteByte(client.Characters.Length);
            lock (Program.worldListener.Worlds)
            {
                foreach (KeyValuePair<Byte, Character> pair in client.Characters.List)
                {
                    Out.WriteByte(pair.Value.Slot);
                    Out.WriteByte(pair.Value.Faction);
                    Out.WriteByte(1);
                    Out.WriteUInt32Reverse(pair.Value.WorldId);
                    World.World info = null;
                    Program.worldListener.Worlds.TryGetValue(pair.Value.WorldId, out info);
                    if (info != null) Out.WriteParsedString(info.Name, 32);
                    else Out.WriteParsedString("(undefined)", 32);
                    Out.WriteParsedString(pair.Value.Name, 32);
                }
            }
            client.Send(Out);
            if (client.Characters.Length <= 0) WORLD_LIST.Send(client);
        }
    }
}
