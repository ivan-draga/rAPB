using FrameWork.NetWork;
using System;

namespace WorldServer.TCP.Packets
{
    [PacketHandlerAttribute(PacketHandlerType.TCP, (int)Opcodes.ASK_DISTRICT_ENTER, "onAskDistrictEnter")]
    public class DISTRICT_ENTER : IPacketHandler
    {
        public int HandlePacket(BaseClient client, PacketIn packet)
        {
            SendDistrictEnter((WorldClient)client);
            return 0;
        }

        public static void SendDistrictEnter(WorldClient cclient)
        {
            PacketOut Out = new PacketOut((uint)Opcodes.ANS_DISTRICT_ENTER);
            if (cclient.Reserved != null)
            {
                Out.WriteInt32((int)ResponseCodes.RC_SUCCESS);
                string[] result = cclient.Reserved.IP.Split('.');
                foreach (string s in result) Out.WriteByte(Convert.ToByte(s));
                Out.WriteUInt16Reverse(cclient.Reserved.Port);
                ulong timestamp = (ulong)TCPManager.GetTimeStamp();
                Out.WriteUInt64Reverse(timestamp);

                var timestampBytes = BitConverter.GetBytes(timestamp);
                var sha1 = new Sha1Digest();
                sha1.BlockUpdate(cclient.Crypto.Key, 0, cclient.Crypto.Key.Length);
                sha1.BlockUpdate(timestampBytes, 0, timestampBytes.Length);
                var handshakeHash = new byte[sha1.GetDigestSize()];
                sha1.DoFinal(handshakeHash, 0);

                byte[] hash = new byte[handshakeHash.Length];
                Buffer.BlockCopy(handshakeHash, 0, hash, 0, handshakeHash.Length);

                sha1 = new Sha1Digest();
                sha1.BlockUpdate(cclient.Crypto.Key, 0, cclient.Crypto.Key.Length);
                sha1.BlockUpdate(handshakeHash, 0, handshakeHash.Length);
                var encryptionHash = new byte[sha1.GetDigestSize()];
                sha1.DoFinal(encryptionHash, 0);
                var encryptionKey = new byte[16];
                Buffer.BlockCopy(encryptionHash, 0, encryptionKey, 0, 16);

                cclient.Reserved.tcp.Client.Send(new byte[] { 0x31, Convert.ToByte(cclient.Account.Index) });
                cclient.Reserved.tcp.Client.Send(encryptionKey);
            }
            else Out.WriteUInt32Reverse((uint)ResponseCodes.RC_DISTRICT_RESERVE_DISTRICT_OFFLINE);
            cclient.Send(Out);
        }
    }
}