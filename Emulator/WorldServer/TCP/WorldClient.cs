using System;
using System.IO;
using FrameWork.NetWork;
using WorldServer.TCP;
using WorldServer.Districts;
using MyDB;

namespace WorldServer
{
    public class WorldClient : BaseClient
    {
        public District Reserved;
        public Lobby.Acc account;

        #region Database stuff

        public AccountEntry Account;
        public CharacterEntry Character;

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
            tcpOut.WriteByte((byte)((toSend.Length & 0xffff) & 0xff));
            tcpOut.WriteByte((byte)((toSend.Length & 0xffff) >> 8));
            tcpOut.WriteByte((byte)((toSend.Length >> 16) & 0xff));
            tcpOut.WriteByte((byte)(toSend.Length >> 24));
            tcpOut.Write(toSend, 4, toSend.Length - 4);
            SendTCP(tcpOut.ToArray());
            tcpOut.Dispose();
            toSend = null;
        }

        #endregion
    }
}
