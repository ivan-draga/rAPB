using FrameWork.Logger;
using FrameWork.NetWork;
using System;
using WorldServer.Lobby;
using WorldServer.TCP.ServerPackets;
using MyDB;
using System.Collections.Generic;

namespace WorldServer
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_WORLD_ENTER, "onAskWorldEnter")]
    public class ASK_WORLD_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            WorldClient cclient = (WorldClient)client;
            UInt32 accountId = packet.GetUint32Reversed();
            Log.Debug("AskWorldEnter", "New client! Account = " + accountId);
            cclient.Account = Databases.AccountTable.SingleOrDefault(a => a.Index == accountId);
            cclient.Character = Databases.CharacterTable.SingleOrDefault(c => c.AccountIndex == accountId);
            lock (Program.expectingAccounts)
            {
                Program.expectingAccounts.TryGetValue(accountId, out cclient.account);
            }
            PacketOut Out = new PacketOut((UInt32)Opcodes.ANS_WORLD_ENTER);
            if (cclient.account == null) Out.WriteInt32Reverse((int)ResponseCodes.RC_FAILED);
            else
            {
                Out.WriteInt32Reverse((int)ResponseCodes.RC_SUCCESS);
                Out.WriteUInt32Reverse(cclient.account.Character);
                Out.WriteUInt32Reverse((uint)cclient.Account.RTW_Points);
                Out.WriteByte(cclient.Account.IsAdmin);
                Out.WriteInt64Reverse(TCPManager.GetTimeStamp());
                Out.WriteFloat(5.00f);
                Out.WriteByte(0);
                Out.WriteByte(0);
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 1, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 2, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 3, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 4, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteInt32Reverse(Program.FileMgr.GetFileVersion((int)accountId, 5, false, Program.WorldName, cclient.account.Character.ToString()));
                Out.WriteByte(1);
                Out.WriteByte(cclient.Character.LFG);
            }
            cclient.Crypto = new TCP.Encryption(cclient.account.SessionId);
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