using System;

namespace HttpServer
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