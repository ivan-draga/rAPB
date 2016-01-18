﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace WorldServer
{
    public class Group
    {
        private String group_leader = null;
        private Byte members = 0;

        public Group(String leader): base()
        {
            members = 1;
            Program.groups.Add(this);
            group_leader = leader;
        }

        public static int GetNewGroupID()
        {
            return (Program.groups.Count + 1);
        }

        public void AddGroupMember(String member)
        {
            //TODO
        }

        public void RemoveGroupMember(String member)
        {
            //TODO
        }

        public string GetGroupLeader()
        {
            return group_leader;
        }

        public Byte GetGroupMembersAmount()
        {
            return members;
        }
    }
}


