using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LobbyServer.HTTP
{
    [AttributeUsage(AttributeTargets.Method)]
    public class HttpHandlerAttribute : Attribute
    {
        public string Url
        {
            get;
            private set;
        }

        public HttpHandlerAttribute(string url)
        {
            Url = url;
        }
    }
}