
#ifndef CONNOR_GAME_SRC_MSG_PROTOCOL_H_
#define CONNOR_GAME_SRC_MSG_PROTOCOL_H_

enum class MsgTypes 
{
	MSG_TYPE_UNKNOW,
	MSG_TYPE_GET,
	MSG_TYPE_SET
};

enum class MsgDirections
{
	MSG_DIRECTION_C2S,
	MSG_DIRECTION_S2C
};

enum class MsgIDs
{
	MSG_ID_LOGIN
};

#endif // CONNOR_GAME_SRC_MSG_PROTOCOL_H_