using System;

[Flags]
public enum Opcodes : uint
{
    //correct opcodes yet to be found, for now they are all "0x00"
    ASK_DISTRICT_ENTER = 0x00, //PC
    ANS_DISTRICT_ENTER = 0x00, //nReturnCode
    DISTRICT_ENTER = 0x00, //nReturnCode, nCharacterUID
    DISTRICT_EXIT = 0x00, //nCharacterUID
    ASK_CHAT = 0x00, //eType, sMessage, nMessageLength = sizeof(sMessage)
    ANS_CHAT = 0x00, //eType, nCharacterUID, bFromGM, sMessage
    CHAT_SYSTEM = 0x00, //sMessage
    ASK_MARKETPLACE_AUCTION_CREATE = 0x00, //eAuctionType, nFactionRestriction, nItemGuid, eDuration, nStartingBid, nBuyout, nCash
    ANS_MARKETPLACE_AUCTION_CREATE = 0x00, //nReturnCode, eAuctionType
    ASK_MARKETPLACE_AUCTION_BID = 0x00, //eAuctionType, nAuctionUID, nAmmount
    ANS_MARKETPLACE_AUCTION_BID = 0x00, //nReturnCode, eAuctionType, nAuctionUID
    ASK_MAIL_SEND_HEADER = 0x00, //sTo, sSubject, nItemGuid, nCash, nToLenght = sizeof(sTo), nSubjectLenght = sizeof(sSubject)
    ASK_MAIL_SEND_BODY_PART = 0x00, //sBody, bEnd, nBodyLenght = sizeof(sBody), PC
    ANS_MAIL_SEND = 0x00, //nReturnCode
    ASK_MAIL_DETACH_CASH = 0x00, //nMailUID, PC
    ANS_MAIL_DETACH_CASH = 0x00, //nReturnCode, nMailUID, nRemainingTime
    ASK_MAIL_DETACH_POINTS = 0x00, //nMailUID, PC
    ANS_MAIL_DETACH_POINTS = 0x00, //nReturnCode, nMailUID, nRemainingTime
    ASK_MAIL_DETACH_ITEM = 0x00, //nMailUID, nSelectedChildRewards, PC
    ANS_MAIL_DETACH_ITEM = 0x00, //nReturnCode, nMailUID, nRemainingTime
    MAIL_SYSTEM = 0x00, //<none>
    DISTRICT_SHUTDOWN_NOTIFY = 0x00, //nMinutesLeft
    KICK = 0x00, //nReason, sInformation
    CLIENT_SYSTEM_SPEC = 0x00, //sSystemSpec

    //DS2WS
    ASK_ATTACH_SERVER = 0x00, //<none>
    ANS_ATTACH_SERVER = 0x00, //nReturnCode
    ANS_GROUP_LEADER = 0x00, //nGroupUID, aCharacterUIDs(array), aCharacterUIDs(int)
    DISPLAY_POINT_STATUS = 0x00, //nDisplayPointUID, nStatus
    ANS_GM_COMMAND = 0x00, //nReturnCode, nCharacterUID
    DISTRICT_LOCK = 0x00, //bLocked
}