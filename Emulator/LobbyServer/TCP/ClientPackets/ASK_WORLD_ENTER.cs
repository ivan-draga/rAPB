using FrameWork.Logger;
using FrameWork.NetWork;

using LobbyServer.Database;
using LobbyServer.World;
using LobbyServer.World.LW;

using System;

namespace LobbyServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_ENTER, "onAskWorldEnter")]
    public class ASK_WORLD_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;
            Byte slotId = packet.GetUint8();
            Character character = cclient.Characters.Get(slotId);
            if (character == null) Log.Error(cclient.Account.Email, "Wrong slot specified!");
            World.World info = null;
            lock (Program.worldListener.Worlds)
            {
                Program.worldListener.Worlds.TryGetValue(character.WorldId, out info);
            }
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_WORLD_ENTER);
            if (info == null) Out.WriteUInt32Reverse(1);
            else
            {
                info.Send(new AccountEnter(cclient.Account.Id, character.Id, cclient.SessionId));
                Out.WriteUInt32Reverse((uint)ResponseCodes.RC_SUCCESS);
                Out.WriteByte(info.IP1);
                Out.WriteByte(info.IP2);
                Out.WriteByte(info.IP3);
                Out.WriteByte(info.IP4);
                Out.WriteUInt16Reverse((UInt16)info.Port);
                Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
            }
            cclient.Send(Out);
            return 0;
        }
    }
}