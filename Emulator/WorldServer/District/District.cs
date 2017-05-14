using System.Net.Sockets;

namespace WorldServer.Districts
{
    public enum DistrictTypes
    {
        SOCIAL = 1,
        FINANCIAL = 2,
        FINANCIAL_ANARCHY = 8, //not supported yet
        FINANCIAL_DYNAMIC = 0, //unknown type ID
        FINANCIAL_OPENCONFLICT = 0, //unknown type ID
        TUTORIAL = 14, 
        WATERFRONT = 21,
        WATERFRONT_ANARCHY = 27, //not supported yet
        WATERFRONT_DYNAMIC = 0, //unknown type ID
        WATERFRONT_OPENCONFLICT = 0, //unknown type ID
        BAYLAN_SHIPPING = 33,
        THE_BEACON = 34,
        ASYLUM = 0 //unknown type ID
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

    public class District
    {
        #region Internal
        public TcpClient tcp
        {
            get;
            set;
        }
        #endregion

        #region Limits

        public const ushort SocialLimit = 200;
        public const ushort ActionLimit = 100;

        #endregion

        public District(TcpClient Tcp)
        {
            tcp = Tcp;
        }

        public District(DistrictTypes type, byte id, LanguageCodes langCode = LanguageCodes.EN)
        {
            _type = type;
            _lang = langCode;
            Type = (byte)((byte)type + (byte)langCode);
            Id = id;
        }

        #region PrivateData

        private DistrictTypes _type;
        private LanguageCodes _lang;

        #endregion

        #region APBData

        public byte Type
        {
            get;
            private set;
        }

        public byte Id;
        public ushort Enforcers = 0;
        public ushort Criminals = 0;
        public ushort Queue = 0;
        public string IP = null;
        public ushort Port;
        public uint Key = 0;

        public byte isFull()
        {
            if (Type == (byte)DistrictTypes.SOCIAL)
                return Enforcers + Criminals >= SocialLimit ? (byte)1 : (byte)0;
            else
                return Enforcers + Criminals >= ActionLimit ? (byte)1 : (byte)0;

        }
        #endregion

        #region ToString

        public override string ToString()
        {
            string result = "";
            switch (_type)
            {
                default:
                    FrameWork.Logger.Log.Error("District error", "Wrong district type specified, please chose valid one!");
                    break;
                case DistrictTypes.SOCIAL:
                    result += "Social-Breakwater Marina";
                    break;
                case DistrictTypes.TUTORIAL:
                    result += "Tutorial-Financial";
                    break;
                case DistrictTypes.FINANCIAL:
                    result += "Missions-Financial";
                    break;
                case DistrictTypes.WATERFRONT:
                    result += "Missions-Waterfront";
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
        public SocialDistrict(byte id)
            : base(DistrictTypes.SOCIAL, id)
        { }
    }

    public class TutorialDistrict : District
    {
        public TutorialDistrict(byte id)
            : base(DistrictTypes.TUTORIAL, id)
        { }
    }

    public class FinancialDistrict : District
    {
        public FinancialDistrict(byte id, LanguageCodes langCode = LanguageCodes.EN)
            : base(DistrictTypes.FINANCIAL, id, langCode)
        { }
    }

    public class WaterFrontDistrict : District
    {
        public WaterFrontDistrict(byte id, LanguageCodes langCode = LanguageCodes.EN)
            : base(DistrictTypes.WATERFRONT, id, langCode)
        { }
    }
}
