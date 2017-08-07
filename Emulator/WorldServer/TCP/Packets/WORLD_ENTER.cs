using FrameWork.Logger;
using FrameWork.NetWork;
using WorldServer.Lobby;
using System.Collections.Generic;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_ENTER, "onAskWorldEnter")]
    public class WORLD_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            uint accountId = packet.GetUint32Reversed();
            Log.Debug("AskWorldEnter", "New client! Account = " + accountId);
            cclient.Account = Databases.AccountTable.SingleOrDefault(a => a.Index == accountId);
            cclient.Character = Databases.CharacterTable.SingleOrDefault(c => c.AccountIndex == accountId);
            lock (Program.expectingAccounts)
            {
                Program.expectingAccounts.TryGetValue(accountId, out cclient.account);
            }

            PacketOut Out = new PacketOut((uint)Opcodes.ANS_WORLD_ENTER);
            if (cclient.account == null) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteUInt32Reverse(cclient.account.Character);
                Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
                Out.WriteFloat(5.00f);
                Out.WriteByte(cclient.Character.IsGroupPublic);
                Out.WriteByte(cclient.Character.GroupInvite);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(0);
                Out.WriteInt32Reverse(0);
                Out.WriteByte(1); //has completed tutorial
                Out.WriteByte(cclient.Character.LFG);
                Out.WriteByte(0);
            }
            cclient.Crypto = new Encryption(cclient.account.SessionId);
            cclient.Send(new DISTRICT_LIST());
            cclient.Send(Out);
            lock (Program.expectingAccounts)
            {
                foreach (KeyValuePair<uint, Acc> a in Program.expectingAccounts)
                {
                    if (a.Value == cclient.account)
                    {
                        Program.expectingAccounts.Remove(a.Key);
                        break;
                    }
                }      
            }
            return 0;
        }
    }
}