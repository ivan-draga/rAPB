using FrameWork.Logger;
using FrameWork.NetWork;

using LobbyServer.SRP;
using LobbyServer.Database;
using LobbyServer.TCP;

using System;
using System.IO;
using System.Reflection;
using MySql.Data.MySqlClient;
using MySql.Data.Types;

namespace LobbyServer
{
    public enum ClientState
    {
        kCLIENT_STATE_LOGINSERVER_CONNECT_IN_PROGRESS = 1,
        kCLIENT_STATE_LOGINSERVER_CONNECT_COMPLETE = 2,
        kCLIENT_STATE_LOGIN_IN_PROGRESS = 3,
        kCLIENT_STATE_LOGIN_SUCCESS = 4,
        kCLIENT_STATE_CHARACTER_LIST_RECEIVED = 5,
        kCLIENT_STATE_WORLD_LIST_RECEIVED = 6
    };

    public class LobbyClient : BaseClient
    {
        #region Database

        public Account Account = null;
        public Characters Characters = null;
        public Character Pending;

        #endregion

        #region SRP

        public Byte[] Salt;
        public FrameWork.NetWork.Crypto.BigInteger Verifier;
        public ServerModulus serverModulus;
        public FrameWork.NetWork.Crypto.BigInteger clientModulus;
        public Byte[] Proof;

        #endregion

        public Encryption ECrypt;
        public Byte[] SessionId;
        #region Client state

        private String _state;
        private ClientState _cstate;

        public void SetState(ClientState state)
        {
            _cstate = state;
            switch (state)
            {
                case ClientState.kCLIENT_STATE_LOGINSERVER_CONNECT_IN_PROGRESS:
                    _state = "kCLIENT_STATE_LOGINSERVER_CONNECT_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_LOGINSERVER_CONNECT_COMPLETE:
                    _state = "kCLIENT_STATE_LOGINSERVER_CONNECT_COMPLETE";
                    break;
                case ClientState.kCLIENT_STATE_LOGIN_IN_PROGRESS:
                    _state = "kCLIENT_STATE_LOGIN_IN_PROGRESS";
                    break;
                case ClientState.kCLIENT_STATE_LOGIN_SUCCESS:
                    _state = "kCLIENT_STATE_LOGIN_SUCCESS";
                    break;
                case ClientState.kCLIENT_STATE_CHARACTER_LIST_RECEIVED:
                    _state = "kCLIENT_STATE_CHARACTER_LIST_RECEIVED";
                    break;
                case ClientState.kCLIENT_STATE_WORLD_LIST_RECEIVED:
                    _state = "kCLIENT_STATE_WORLD_LIST_RECEIVED";
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

        #region Base

        public LobbyClient(TCPManager srv)
            : base(srv)
        {
        }

        public override void OnConnect()
        {
            Program.clients.Add(this);
            ECrypt = new Encryption();
            LOGIN_PUZZLE.Send(this);
        }

        public override void OnDisconnect()
        {
            Program.clients.Remove(this);
            this.Proof = null;
            this.Salt = null;
            this.Verifier = null;
            this.serverModulus = null;
            this.clientModulus = null;
            this.SessionId = null;
            /*MySqlCommand cmd = new MySqlCommand("UPDATE `accounts` SET `extrn_login` = 0 WHERE `email` = @email", Connection.Instance);
            try
            {
                cmd.Prepare();
                cmd.Parameters.AddWithValue("@email", this.Account.Email);
                cmd.ExecuteNonQuery();
            }
            catch (MySqlException ex) { Log.Error("OnDisconnect()", "MySQL failed! " + ex.ToString()); }*/
        }

        #endregion

        #region TCP

        protected override void OnReceive(PacketIn packet)
        {
            lock (this)
            {
                PacketIn decrypted;
                decrypted = ECrypt.Decrypt(packet);
                Server.HandlePacket(this, decrypted);
            }
        }

        public void Send(PacketOut packet)
        {
            byte[] toSend = ECrypt.Encrypt(packet);
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