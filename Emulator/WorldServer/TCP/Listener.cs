using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;

namespace WorldServer.TCP
{
    class Listener
    {
        static IPAddress ip = IPAddress.Parse("127.0.0.1");

        TcpListener listener = new TcpListener(ip, 500);

        


    }
}
