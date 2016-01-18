using FrameWork.NetWork;

using System;
using System.Collections.Generic;

using LobbyServer.World;

namespace LobbyServer
{
    static public class WORLD_LIST
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((UInt32)Opcodes.WORLD_LIST);
            Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
            lock (Program.worldListener.Worlds)
            {
                Out.WriteUInt16Reverse((UInt16)Program.worldListener.Worlds.Count);
                foreach (KeyValuePair<UInt32, World.World> info in Program.worldListener.Worlds)
                {
                    Out.WriteUInt32Reverse((UInt32)info.Key);
                    Out.WriteParsedString(info.Value.Name, 32);
                    Out.WriteByte(1);
                    Out.WriteByte(info.Value.Population);
                    Out.WriteByte(info.Value.EnforcerRecommended ? (Byte)1 : (Byte)0);
                    Out.WriteByte(info.Value.CriminalRecommended ? (Byte)1 : (Byte)0);
                }
            }
            client.Send(Out);
        }
    }
}