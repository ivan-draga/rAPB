using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace LobbyServer.RpcFile
{
    public class BlockInfo
    {
        private string _BlockName = "";
        private Dictionary<string, string> _Values = new Dictionary<string, string>();

        public BlockInfo(string name)
        {
            _BlockName = name;
        }

        public void AddValue(string name, string value)
        {
            if (_Values.ContainsKey(name)) _Values[name] = value;
            else _Values.Add(name, value);
        }

        public T GetValue<T>(string name)
        {
            if (_Values.ContainsKey(name)) return (T)Convert.ChangeType(_Values[name], typeof(T));
            else return (T)Convert.ChangeType(0, typeof(T));
        }

        public void SaveTo(StreamWriter SW)
        {
            SW.WriteLine("[" + _BlockName + "]");
            foreach (KeyValuePair<string, string> Pair in _Values) SW.WriteLine(Pair.Key + "=" + Pair.Value);
            SW.WriteLine();
        }
    }
}
