using FrameWork.Logger;
using FrameWork.NetWork;
using LobbyServer.World.LW;
using MyDB;

namespace LobbyServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_ENTER, "onAskWorldEnter")]
    public class WORLD_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            LobbyClient cclient = (LobbyClient)client;
            byte slotId = packet.GetUint8();
            CharacterEntry character = Databases.CharacterTable.SingleOrDefault(c => c.AccountIndex == cclient.Account.Index && c.Slot == slotId);
            if (character.Index < 1) Log.Error(cclient.Account.Username, "Wrong slot specified!");
            World.World info = null;
            lock (Program.worldListener.Worlds)
            {
                Program.worldListener.Worlds.TryGetValue((uint)character.World, out info);
            }

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_WORLD_ENTER);
            if (info == null) Out.WriteUInt32Reverse((uint)ResponseCodes.RC_FAILED);
            else
            {
                info.Send(new AccountEnter((uint)cclient.Account.Index, (uint)character.Index, cclient.SessionId));
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteByte(info.IP1);
                Out.WriteByte(info.IP2);
                Out.WriteByte(info.IP3);
                Out.WriteByte(info.IP4);
                Out.WriteUInt16Reverse((ushort)info.Port);
                Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
            }
            cclient.Send(Out);
            return 0;
        }
    }
}