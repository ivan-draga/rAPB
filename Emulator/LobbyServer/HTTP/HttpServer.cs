using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Reflection;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Web;
using FrameWork.Logger;

namespace LobbyServer.HTTP
{
    public partial class HttpServer
    {
        private delegate string HttpHandlerDelegate(HttpServer server, HttpListenerRequest request, Dictionary<string, string> parameters);

        private static Dictionary<string, KeyValuePair<HttpHandlerAttribute, HttpHandlerDelegate>> _handlers = new Dictionary<string, KeyValuePair<HttpHandlerAttribute, HttpHandlerDelegate>>();

        public static void MapHandlers()
        {
            foreach (MethodInfo methodInfo in typeof(HttpServer).GetMethods(BindingFlags.NonPublic | BindingFlags.Static))
            {
                var attributes = methodInfo.GetCustomAttributes(typeof(HttpHandlerAttribute), false);
                if (attributes.Length < 1) continue;
                HttpHandlerAttribute attribute = (HttpHandlerAttribute)attributes[0];
                if (_handlers.ContainsKey(attribute.Url)) continue;
                _handlers.Add(attribute.Url, new KeyValuePair<HttpHandlerAttribute, HttpHandlerDelegate>(attribute, (HttpHandlerDelegate)Delegate.CreateDelegate(typeof(HttpHandlerDelegate), methodInfo)));
                Log.Info("Handler", "Mapped handler for '" + attribute.Url + "'");
            }

            Log.Succes("HttpServer.MapHandlers", "HTTP handlers mapped");
        }

        private HttpListener m_listener;

        public HttpServer()
        {
            m_listener = new HttpListener();
            m_listener.Prefixes.Add("http://*:8880/");
            m_listener.Prefixes.Add("https://*:8843/");
        }

        public void Start()
        {
            m_listener.Start();
            m_listener.BeginGetContext(OnGetContext, null);
            Log.Succes("HttpServer.Start", "HTTP server started");
        }

        public void Stop()
        {
            m_listener.Stop();
        }

        private void OnGetContext(IAsyncResult result)
        {
            try
            {
                var context = m_listener.EndGetContext(result);
                ThreadPool.QueueUserWorkItem(HandleRequest, context);
            }
            finally
            {
                m_listener.BeginGetContext(OnGetContext, null);
            }
        }

        private void HandleRequest(object oContext)
        {
            HttpListenerContext context = (HttpListenerContext)oContext;
            try
            {
                Dictionary<string, string> parameters = new Dictionary<string, string>();
                string[] tokens = context.Request.RawUrl.Split('&');
                foreach (var token in tokens)
                {
                    string[] keyValuePair = token.Split('=');
                    if (keyValuePair.Length != 2) continue;
                    var key = WebUtility.UrlDecode(keyValuePair[0]);
                    var value = WebUtility.UrlDecode(keyValuePair[1]);
                    parameters.Add(key, value);
                }

                KeyValuePair<HttpHandlerAttribute, HttpHandlerDelegate> pair;
                String[] raw = context.Request.RawUrl.Split('&');
                if (raw[0] == "/favicon.ico") return;
                if (!_handlers.TryGetValue(raw[0], out pair)) throw new Exception("Missing handler.");
                if (!parameters.ContainsKey("username")) throw new Exception("Missing username.");
                if (!parameters.ContainsKey("password"))  throw new Exception("Missing password.");

                context.Response.ContentType = "text/json";
                string result = pair.Value(this, context.Request, parameters);
                if (result == null) throw new Exception("Invalid response from handler " + context.Request.RawUrl + ".");
                context.Response.ContentEncoding = context.Request.ContentEncoding;
                using (StreamWriter writer = new StreamWriter(context.Response.OutputStream, context.Response.ContentEncoding)) writer.Write(result);
            }
            catch (Exception e)
            {
                context.Response.ContentType = "text/json";
                context.Response.ContentEncoding = context.Request.ContentEncoding;
                using (StreamWriter writer = new StreamWriter(context.Response.OutputStream, context.Response.ContentEncoding)) writer.Write(JsonEncode("Exception: " + e.ToString()));
                Log.Error("HttpServer", "An exception occurred in HandleRequest: " + e.Message);
            }
            finally
            {
                context.Response.Close();
            }
        }

        public static string JsonEncode(string text)
        {
            return text;
        }

        public static string JsonEncode(string[] text)
        {
            StringBuilder builder = new StringBuilder(1024);
            builder.Append("[");
            for (int i = 0; i < text.Length; i++)
            {
                if (i > 0) builder.Append(",");
                builder.Append('"' + text[i] + '"');
            }
            builder.Append("]");
            return builder.ToString();
        }
    }
}