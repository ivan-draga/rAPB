using System;
using System.Collections.Generic;
using System.Net;
using FrameWork.Logger;
using MyDB;

namespace LobbyServer
{
    public partial class HttpServer
    {
        [HttpHandler("/createAccount")]
        private static string HandleCreateAccount(HttpServer server, HttpListenerRequest request, Dictionary<string, string> parameters)
        {
            if (!parameters.ContainsKey("username")) throw new Exception("Missing username.");
            if (!parameters.ContainsKey("password")) throw new Exception("Missing password.");

            string username = parameters["username"];
            string password = parameters["password"];

            if (Databases.AccountTable.Count(a => a.Username.ToLower() == username.ToLower()) > 0) return JsonEncode("Username already in use!");

            System.Text.RegularExpressions.Regex invalidCharacterRegex = new System.Text.RegularExpressions.Regex("[^a-zA-Z0-9]");
            if (invalidCharacterRegex.IsMatch(username)) return JsonEncode("Invalid characters detected in username!");

            Random getrandom = new Random();
            string token = getrandom.Next(10000000, 99999999).ToString();
            AccountEntry entry = new AccountEntry();
            entry.Index = Databases.AccountTable.GenerateIndex();
            entry.Username = username;
            entry.Password = password;
            entry.Verifier = "";
            entry.Salt = "";
            entry.Threat = 0;
            entry.IsAdmin = 1;
            entry.IsBanned = 0;
            entry.InUse = 0;
            entry.extrn_login = 1;
            entry.CanHostDistrict = 1;
            entry.Token = token;
            Databases.AccountTable.Add(entry);

            Log.Succes("HTTP", "Successfully created account '" + username + "'");
            return JsonEncode("Account created!\n\nYour token is: " + token + ".");
        }
    }
}