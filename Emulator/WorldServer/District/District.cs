using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using WorldServer.Districts.WD;
using System.Net.Sockets;

namespace WorldServer.Districts
{
    public enum DistrictTypes
    {
        SOCIAL = 1,
        FINANCIAL = 2,
        FINANCIAL_HARDCORE = 8,
        TUTORIAL = 14,
        WATERFRONT = 21,
        WATERFRONT_HARDCORE = 27
    }

    public enum LanguageCodes
    {
        EN = 0,
        FR = 1,
        IT = 2,
        GE = 3,
        ES = 4,
        RU = 5
    }

    public enum DistrictState
    {
        kDISTRICT_STATE_DISCONNECTED = 0,
        kDISTRICT_STATE_WORLDSERVER_LISTENING = 1,
        kDISTRICT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS = 2,
        kDISTRICT_STATE_WORLDSERVER_CONNECT_COMPLETE = 3,
        kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_IN_PROGRESS = 4,
        kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_COMPLETE = 5,
        kDISTRICT_STATE_WORLDSERVER_ATTACH_IN_PROGRESS = 6,
        kDISTRICT_STATE_WORLDSERVER_ATTACH_COMPLETE = 7,
        kDISTRICT_STATE_MAX = 8
    };

    public class District
    {
        #region Internal
        public TcpClient tcp
        {
            get;
            set;
        }

        public void Send(Packet packet)
        {
            Byte[] array = packet.ToArray();
            tcp.GetStream().Write(array, 0, array.Length);
            tcp.GetStream().Flush();
        }
        #endregion

        #region Limits

        public const UInt16 SocialLimit = 200;
        public const UInt16 ActionLimit = 100;

        #endregion

        public District(TcpClient Tcp)
        {
            tcp = Tcp;
        }

        public District(DistrictTypes type, Byte id, LanguageCodes langCode = LanguageCodes.EN)
        {
            _type = type;
            _lang = langCode;
            Type = (Byte)((Byte)type + (Byte)langCode);
            Id = id;
        }

        #region PrivateData

        private DistrictTypes _type;
        private LanguageCodes _lang;
        private String _state;
        private DistrictState _dstate;

        #endregion

        #region APBData

        public Byte Type
        {
            get;
            private set;
        }
        public Byte Id;
        public UInt16 Enforcers = 0;
        public UInt16 Criminals = 0;
        public UInt16 Queue = 0;
        public String IP = null;
        public ushort Port;
        public UInt32 Key = 0;

        public Byte isFull()
        {
            if (Type == (Byte)DistrictTypes.SOCIAL)
                return Enforcers + Criminals >= SocialLimit ? (Byte)1 : (Byte)0;
            else
                return Enforcers + Criminals >= ActionLimit ? (Byte)1 : (Byte)0;

        }

        public void SetSate(DistrictState state)
        {
            _dstate = state;
            switch (state)
            {
                case DistrictState.kDISTRICT_STATE_DISCONNECTED:
                    _state = "kDISTRICT_STATE_DISCONNECTED";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_LISTENING:
                    _state = "kDISTRICT_STATE_WORLDSERVER_LISTENING";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS:
                    _state = "kDISTRICT_STATE_WORLDSERVER_CONNECT_IN_PROGRESS";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_CONNECT_COMPLETE:
                    _state = "kDISTRICT_STATE_WORLDSERVER_CONNECT_COMPLETE";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_IN_PROGRESS:
                    _state = "kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_IN_PROGRESS";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_COMPLETE:
                    _state = "kDISTRICT_STATE_WORLDSERVER_DEV_ATTACH_COMPLETE";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_ATTACH_IN_PROGRESS:
                    _state = "kDISTRICT_STATE_WORLDSERVER_ATTACH_IN_PROGRESS";
                    break;
                case DistrictState.kDISTRICT_STATE_WORLDSERVER_ATTACH_COMPLETE:
                    _state = "kDISTRICT_STATE_WORLDSERVER_ATTACH_COMPLETE";
                    break;
                case DistrictState.kDISTRICT_STATE_MAX:
                    _state = "kDISTRICT_STATE_WORLDSERVER_ATTACH_IN_PROGRESS";
                    break;
            }
        }

        public DistrictState GetState()
        {
            return this._dstate;
        }

        public String GetStateAsString()
        {
            return this._state;
        }
        #endregion

        #region ToString

        public override string ToString()
        {
            String result = "";
            switch (_type)
            {
                default:
                    FrameWork.Logger.Log.Error("District error", "Wrong district type specified, please chose valid one!");
                    break;
                case DistrictTypes.SOCIAL:
                    result += "Safe-Social";
                    break;
                case DistrictTypes.TUTORIAL:
                    result += "Tutorial-Financial";
                    break;
                case DistrictTypes.FINANCIAL:
                    result += "Action-Financial";
                    break;
                case DistrictTypes.FINANCIAL_HARDCORE:
                    result += "Hardcore-Financial";
                    break;
                case DistrictTypes.WATERFRONT:
                    result += "Action-Waterfront";
                    break;
                case DistrictTypes.WATERFRONT_HARDCORE:
                    result += "Hardcore-Waterfront";
                    break;
            }

            switch (_lang)
            {
                case LanguageCodes.EN:
                    result += "-EN";
                    break;
                case LanguageCodes.ES:
                    result += "-ES";
                    break;
                case LanguageCodes.FR:
                    result += "-FR";
                    break;
                case LanguageCodes.GE:
                    result += "-GE";
                    break;
                case LanguageCodes.IT:
                    result += "-IT";
                    break;
                case LanguageCodes.RU:
                    result += "-RU";
                    break;
            }

            result += "-" + Id.ToString();
            return result;
        }
        #endregion
    }

    public class SocialDistrict : District
    {
        public SocialDistrict(Byte id)
            : base(DistrictTypes.SOCIAL, id)
        { }
    }

    public class TutorialDistrict : District
    {
        public TutorialDistrict(Byte id)
            : base(DistrictTypes.TUTORIAL, id)
        { }
    }

    public class FinancialDistrict : District
    {
        public FinancialDistrict(Byte id, LanguageCodes langCode = LanguageCodes.EN, Boolean hardCore = false)
            : base(hardCore ? DistrictTypes.FINANCIAL_HARDCORE : DistrictTypes.FINANCIAL, id, langCode)
        { }
    }

    public class WaterFrontDistrict : District
    {
        public WaterFrontDistrict(Byte id, LanguageCodes langCode = LanguageCodes.EN, Boolean hardCore = false)
            : base(hardCore ? DistrictTypes.WATERFRONT_HARDCORE : DistrictTypes.WATERFRONT, id, langCode)
        { }
    }
}
