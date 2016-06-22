using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using FrameWork.NetWork;

namespace LobbyServer
{
    static public class LOGIN_PUZZLE
    {
        static public void Send(LobbyClient client)
        {
            PacketOut Out = new PacketOut((UInt32)Opcodes.LOGIN_PUZZLE);
            if(Program.version == GameVersion.RTW_CB)
            {
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(6);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(509927);
            }
            else if(Program.version == GameVersion.RTW_DVD)
            {
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(534979);
            }
            else if (Program.version == GameVersion.RTW_LAST)
            {
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(4);
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(555239);
            }
            else if (Program.version == GameVersion.G1_LATEST)
            {
                Out.WriteInt32Reverse(1);
                Out.WriteInt32Reverse(19);
                Out.WriteInt32Reverse(4);
                Out.WriteInt32Reverse(766569);
            }
            else if (Program.version == GameVersion.G1_ENGUPD)
            {
                Out.WriteInt32Reverse(2);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(750394);
            }
            Out.WriteByte(0x05);
            for (int i = 0; i < client.ECrypt.Key.Length; i++) Out.WriteByte(client.ECrypt.Key[i]);
            Out.WriteUInt32Reverse(0);
            Out.WriteUInt32Reverse(0);
            Out.WriteUInt32Reverse(0);
            client.SendTCP(Out);
        }
    }
}