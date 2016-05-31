using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyDB
{
    [DatabaseTable("accounts")]
    public struct AccountEntry
    {
        public int Index;
        public string Username;
        public string Password;
        public string Verifier;
        public string Salt;
        public int RTW_Points;
        public Byte IsAdmin;
        public Byte IsBanned;
        public Byte InUse;
        public Byte extrn_login;
        public Byte CanHostDistrict;
        public string Token;
    }
}
