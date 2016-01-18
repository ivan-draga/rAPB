using FrameWork.Logger;
using FrameWork.NetWork;

using LobbyServer.Database;

using System;
using System.Text.RegularExpressions;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_CHARACTER_NAME_CHECK, "onAskCharacterNameCheck")]
    public class ASK_CHARACTER_NAME_CHECK : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = client as LobbyClient;
            UInt32 WorldUid = packet.GetUint32Reversed();
            string Name = packet.GetParsedString();
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_CHARACTER_NAME_CHECK);
            if (isValid(Name) && !cclient.Characters.Exists(Name))
            {
                cclient.Pending = new Character();
                cclient.Pending.Name = Name;
                cclient.Pending.WorldId = WorldUid;
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
            }
            else
            {
                cclient.Pending = null;
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_CHARACTER_NAME_CHECK_IN_USE);
            }
            cclient.Send(Out);
            return 0;
        }

        static public Boolean isValid(string name)
        {
            Regex objAlphaNumericPattern = new Regex(".[a-zA-Z0-9]");
            return objAlphaNumericPattern.IsMatch(name);
        }
    }
}
