#pragma once

#ifndef __GSDISABLED_TYPES_H__
#define __GSDISABLED_TYPES_H__


typedef unsigned int GPProfile;
typedef int GPEnum;
typedef int GPResult;
typedef unsigned int GPErrorCode;
typedef unsigned int RoomType;
typedef unsigned int GPConnection;
typedef unsigned int GPRecvBuddyStatusArg;

typedef unsigned int persisttype_t;

typedef unsigned int PEER;
typedef bool PEERBool;
typedef unsigned int PEERJoinResult;

typedef unsigned int SBServer;

typedef struct _GPErrorArg
{
	unsigned int errorCode;
	unsigned int result;
} GPErrorArg;

typedef struct _GPGetInfoResponseArg
{
	char* nick;
	char* email;
	char* countrycode;
	GPProfile profile;
} GPGetInfoResponseArg;


typedef struct _GPRecvBuddyMessageArg
{
	GPProfile profile;
} GPRecvBuddyMessageArg;

typedef struct _GPConnectResponseArg
{
	unsigned int result;
	GPProfile profile;
} GPConnectResponseArg;

typedef struct _GPRecvBuddyRequestArg
{
	GPProfile profile;
} GPRecvBuddyRequestArg;



#define GP_NICK_LEN 100
#define GP_EMAIL_LEN 100
#define GP_PASSWORD_LEN 100
#define MAX_BUDDY_CHAT_LEN 100
#define GP_STATUS_STRING_LEN 100
#define GP_LOCATION_STRING_LEN 100
#define GP_COUNTRYCODE_LEN 100
#define GP_REASON_LEN 100

#define GP_PLAYING 1
#define GP_ONLINE 2
#define GP_OFFLINE 3
#define GP_RECV_GAME_INVITE 4

#define StagingRoom 1
#define GroupRoom 2

#define NUM_RESERVED_KEYS 30

#endif // __GSDISABLED_TYPES_H__