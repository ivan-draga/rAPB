using FrameWork.NetWork;
using FrameWork.Logger;
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
                string[] delimiter = new string[] { "." };
                string[] result = cclient.Reserved.IP.Split(delimiter, StringSplitOptions.None);
                foreach (string s in result) Out.WriteByte(Convert.ToByte(s));
                Out.WriteUInt16Reverse(cclient.Reserved.Port);
                int timestamp = TcpServer.GetTimeStamp();
                Out.WriteInt32Reverse(timestamp);

                var timestampBytes = BitConverter.GetBytes(timestamp);
                var sha1 = new Sha1Digest();
                sha1.BlockUpdate(cclient.Crypto.Key, 0, cclient.Crypto.Key.Length);
                sha1.BlockUpdate(timestampBytes, 0, timestampBytes.Length);
                var handshakeHash = new byte[sha1.GetDigestSize()];
                sha1.DoFinal(handshakeHash, 0);

                Log.Succes("handshakeHash", Program.ByteToHexBitFiddle(handshakeHash));

                sha1 = new Sha1Digest();
                sha1.BlockUpdate(cclient.Crypto.Key, 0, cclient.Crypto.Key.Length);
                sha1.BlockUpdate(handshakeHash, 0, handshakeHash.Length);
                var encryptionHash = new byte[sha1.GetDigestSize()];
                sha1.DoFinal(encryptionHash, 0);
                var encryptionKey = new byte[16];
                Buffer.BlockCopy(encryptionHash, 0, encryptionKey, 0, 16);

                Log.Succes("encryptionKey", Program.ByteToHexBitFiddle(encryptionKey));
            }
            else Out.WriteUInt32Reverse((uint)ResponseCodes.RC_DISTRICT_RESERVE_DISTRICT_OFFLINE);
            cclient.Send(Out);
        }
    }
}
