using FrameWork.NetWork;
using LobbyServer.SRP;
using LobbyServer.TCP.Packets;
using System.IO;
using System.Collections.Generic;
using MyDB;

namespace LobbyServer
{
    public class LobbyClient : BaseClient
    {
        public AccountEntry Account;
        public List<CharacterEntry> Characters = null;
        public CharacterEntry Pending;

        public byte[] Salt;
        public FrameWork.NetWork.Crypto.BigInteger Verifier;
        public ServerModulus serverModulus;
        public FrameWork.NetWork.Crypto.BigInteger clientModulus;
        public byte[] Proof;

        public TCP.Encryption ECrypt;
        public byte[] SessionId;

        public LobbyClient(TCPManager srv) : base(srv)
        {
        }

        public override void OnConnect()
        {
            Program.clients.Add(this);
            ECrypt = new TCP.Encryption();
            LOGIN_PUZZLE.Send(this);
        }

        public override void OnDisconnect()
        {
            Program.clients.Remove(this);
            Proof = null;
            Salt = null;
            Verifier = null;
            serverModulus = null;
            clientModulus = null;
            SessionId = null;
        }

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
            tcpOut.WriteByte((byte)((toSend.Length & 0xffff) & 0xff));
            tcpOut.WriteByte((byte)((toSend.Length & 0xffff) >> 8));
            tcpOut.WriteByte((byte)((toSend.Length >> 16) & 0xff));
            tcpOut.WriteByte((byte)(toSend.Length >> 24));
            tcpOut.Write(toSend, 4, toSend.Length - 4);
            SendTCP(tcpOut.ToArray());
            tcpOut.Dispose();
            toSend = null;
        }
    }
}