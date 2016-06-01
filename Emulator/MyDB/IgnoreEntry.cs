using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyDB
{
    [DatabaseTable("ignores")]
    public struct IgnoreEntry
    {
        public int Index;
        public int CharacterOwnerIndex;
        public int CharacterIgnoreIndex;
    }
}
