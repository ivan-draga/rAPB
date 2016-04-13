using System;
using System.IO;
using System.Net;
using System.Net.Sockets;

using FrameWork.Logger;
using FrameWork.NetWork;

using WorldServer.TCP;
using WorldServer.Districts;
using WorldServer.Database;

namespace WorldServer
{
    public enum ClientState
    {
        kCLIENT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS = 9,
        kCLIENT_STATE_WORLDSERVER_CONNECT_COMPLETE = 10,
        kCLIENT_STATE_DISTRICT_ENTER1_IN_PROGRESS = 14,
        kCLIENT_STATE_DISTRICT_ENTER1_COMPLETE = 15,
        kCLIENT_STATE_DISTRICTSERVER_CONNECT_IN_PROGRESS = 16,
        kCLIENT_STATE_DISTRICTSERVER_CONNECT_COMPLETE = 17,
        kCLIENT_STATE_DISTRICT_ENTER2_IN_PROGRESS = 18,
        kCLIENT_STATE_DISTRICT_ENTER2_COMPLETE = 19,
        kCLIENT_STATE_DISTRICT_EXIT_IN_PROGRESS = 20,
        kCLIENT_STATE_LOGOUT_IN_PROGRESS = 21,
        kCLIENT_STATE_MAX = 22
    };

    public class WorldClient : BaseClient
    {
        public District Reserved;
        public Byte LFG = 0;
        public Lobby.Acc account;

        #region Client state

        private String _state;
        private ClientState _cstate;

        public void SetState(ClientState state)
        {
            _cstate = state;
            switch (state)
            {
                case ClientState.kCLIENT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS:
                    _state = "kCLIENT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_WORLDSERVER_CONNECT_COMPLETE:
                    _state = "kCLIENT_STATE_WORLDSERVER_CONNECT_COMPLETE";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICT_ENTER1_IN_PROGRESS:
                    _state = "kCLIENT_STATE_DISTRICT_ENTER1_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICT_ENTER1_COMPLETE:
                    _state = "kCLIENT_STATE_DISTRICT_ENTER1_COMPLETE";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICTSERVER_CONNECT_IN_PROGRESS:
                    _state = "kCLIENT_STATE_DISTRICTSERVER_CONNECT_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICTSERVER_CONNECT_COMPLETE:
                    _state = "kCLIENT_STATE_DISTRICTSERVER_CONNECT_COMPLETE";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICT_ENTER2_IN_PROGRESS:
                    _state = "kCLIENT_STATE_DISTRICT_ENTER2_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICT_ENTER2_COMPLETE:
                    _state = "kCLIENT_STATE_DISTRICT_ENTER2_COMPLETE";
                    break;
                case ClientState.kCLIENT_STATE_DISTRICT_EXIT_IN_PROGRESS:
                    _state = "kCLIENT_STATE_DISTRICT_EXIT_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_LOGOUT_IN_PROGRESS:
                    _state = "kCLIENT_STATE_LOGOUT_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_MAX:
                    _state = "kCLIENT_STATE_MAX";
                    break;
            }
        }

        public ClientState GetState()
        {
            return this._cstate;
        }

        public String GetStateAsString()
        {
            return this._state;
        }
        #endregion

        #region Account stuff

        public UInt32 AccountId;
        public Byte isGM = 0;
        public Byte isBanned = 0;
        public String Email;
        public UInt32 Points;

        #endregion

        #region Character stuff

        public UInt32 CharacterId;
        public String Name;
        public Byte Faction;
        public Byte Gender;
        public UInt32 Rank;
        public UInt32 Money;
        public Byte Threat;
        public UInt32 Playtime;
        public String Clan = "APB-EMU";
        public Byte districtID;
        public Byte districtType;
        public Byte groupStatus;
        public Byte groupInvite;
        public Byte groupPublic;

        #endregion

        #region Base

        public WorldClient(TCPManager srv)
            : base(srv)
        {
        }

        public override void OnConnect()
        {
            Program.clients.Add(this);
        }

        public override void OnDisconnect()
        {
            Program.clients.Remove(this);
        }

        #endregion

        #region Encryption
        public Encryption Crypto = null;
        #endregion

        #region TCP

        protected override void OnReceive(PacketIn packet)
        {
            lock (this)
            {
                if (Crypto != null)
                {
                    PacketIn decrypted;
                    decrypted = Crypto.Decrypt(packet);
                    Server.HandlePacket(this, decrypted);
                }
                else
                {
                    packet.Size = packet.GetUint32Reversed();
                    packet = DeCrypt(packet);
                    packet.Opcode = packet.GetUint32Reversed();
                    Server.HandlePacket(this, packet);
                }
            }
        }

        public void Send(PacketOut packet)
        {
            Console.Write("Sent:");
            for (int i = 0; i < packet.ToArray().Length; i++) Console.Write(" " + packet.ToArray()[i]);
            Console.WriteLine();
            byte[] toSend = Crypto.Encrypt(packet);
            MemoryStream tcpOut = new MemoryStream();
            tcpOut.WriteByte((Byte)((toSend.Length & 0xffff) & 0xff));
            tcpOut.WriteByte((Byte)((toSend.Length & 0xffff) >> 8));
            tcpOut.WriteByte((Byte)((toSend.Length >> 16) & 0xff));
            tcpOut.WriteByte((Byte)(toSend.Length >> 24));
            tcpOut.Write(toSend, 4, toSend.Length - 4);
            SendTCP(tcpOut.ToArray());
            tcpOut.Dispose();
            toSend = null;
        }

        #endregion
    }
}
