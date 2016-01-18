using System;

[Flags]
public enum MessageType
{
    kCHAT_SAY = 0,
    kCHAT_YELL = 1,
    kCHAT_WHISPER = 2,
    kCHAT_WHISPER_SENT = 3,
    kCHAT_METAGROUP = 4,
    kCHAT_GROUP = 5,
    kCHAT_CLAN = 6,
    kCHAT_OFFICER = 7,
    kCHAT_DISTRICT = 8,
    kCHAT_AFK = 9,
    kCHAT_DND = 10,
    kCHAT_SYSTEM = 11,
    kCHAT_BROADCAST_SYSTEM = 12,
    kCHAT_MAX = 13
};