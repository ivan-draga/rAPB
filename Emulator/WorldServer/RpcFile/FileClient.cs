using System;
using System.Collections.Generic;
using System.IO;

using FrameWork.Logger;

namespace WorldServer.RpcFile
{
    public class FileClient
    {
        private int _AcctId;
        private string BaseFolder = "/ClientFiles";
        private string Folder = Directory.GetCurrentDirectory();
        public bool CharInited = false;
        private Dictionary<string, ConfigFile> _Files = new Dictionary<string, ConfigFile>();
        public FileClient(int AcctId)
        {
            _AcctId = AcctId;
            CheckBase();
        }

        public string GetClientDir()
        {
            return Folder + BaseFolder + "/" + _AcctId;
        }
        public string GetClientDir(string WorldName, string CharName)
        {
            return GetClientDir() + "/" + WorldName + "/" + CharName;
        }

        public void CheckBase()
        {
            if (CharInited) return;
            Log.Info("FileClient", "CheckBase: " + GetClientDir());
            try
            {
                CharInited = true;
                Directory.CreateDirectory(GetClientDir());
            }
            catch (Exception e)
            {
                Log.Error("CheckBase", e.ToString());
            }

            DirectoryInfo Dir = new DirectoryInfo(GetClientDir());
            foreach (FileInfo F in Dir.GetFiles("*.ini", SearchOption.AllDirectories))
            {
                ConfigFile File = new ConfigFile(F.Name, F.DirectoryName, true);
                _Files.Add(F.Name, File);
            }
        }

        public void CheckCharBase(string WorldName, string CharName)
        {
            try
            {
                Directory.CreateDirectory(GetClientDir(WorldName, CharName));
            }
            catch (Exception e)
            {
                Log.Error("CheckCharBase", e.ToString());
            }
        }

        public ConfigFile GetConf(string name, bool create)
        {
            Log.Info("FileClient", "GetConf: " + name);
            if (_Files.ContainsKey(name)) return _Files[name];
            else
            {
                Log.Debug("FileClient", "The file does not exist!");
                if (!create || name.Length <= 0) return null;
                else
                {
                    string dir = GetClientDir();
                    ConfigFile F = new ConfigFile(name, dir, true);
                    _Files.Add(name, F);
                    return F;
                }
            }
        }

        public ConfigFile GetConf(string name, string WorldName, string CharName, bool create)
        {
            CheckCharBase(WorldName, CharName);
            Log.Info("FileClient", "GetConf: " + name + " | CharName: " + CharName);
            if (_Files.ContainsKey(name)) return _Files[name];
            else
            {
                Log.Debug("FileClient", "The file does not exist!");
                if (!create || WorldName.Length <= 0 || CharName.Length <= 0) return null;
                else
                {
                    string dir = GetClientDir(WorldName, CharName);
                    ConfigFile F = new ConfigFile(name, dir, true);
                    _Files.Add(name, F);
                    return F;
                }
            }
        }

        public int GetVersion(string name)
        {
            ConfigFile File = GetConf(name, true);
            if (File == null) return 0;
            else return File.Version;
        }
    }
}
