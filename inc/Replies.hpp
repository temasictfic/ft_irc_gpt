#pragma once

#define RPL_WELCOME(Nick) "ircserv: Welcome to the ircserv, " + Nick

#define ERR_CUSTOM(Message) "ircserv Error: " + Message
#define ERR_NOSUCHNICK(Nickname) "ircserv " + Nickname + ": No such nick. (401)\n"
#define ERR_NOSUCHCHANNEL(Channel) "ircserv " + Channel + " :No such channel. (403)\n"
#define ERR_CANNOTSENDTOCHAN(Channel) "ircserv " + Channel + ":Cannot send to channel. (404)\n"
#define ERR_TOOMANYCHANNELS(Channel) "ircserv " + Channel + " :You have joined too many channels. (405)\n"
#define ERR_NORECIPIENT(Command) "ircserv :No recipient given for " + Command + " (411)\n"
#define ERR_NOTEXTTOSEND() "ircserv :No text to send. (412)\n"
#define ERR_INPUTTOOLONG() "ircserv :Input line was too long. (417)\n"
#define ERR_UNKNOWNCOMMAND(Command) "ircserv " + Command + " :Unknown command. (421)\n"
#define ERR_NONICKNAMEGIVEN() "ircserv :No nickname given. (431)\n"
#define ERR_ERRONEUSNICKNAME(Nick) "ircserv " + Nick + " :Erroneus nickname. (432)\n"
#define ERR_NICKNAMEINUSE(Nick) "ircserv " + Nick + " :Nickname is already in use. (433)\n"
#define ERR_USERNOTINCHANNEL(Nick, Channel) "ircserv " + Nick + " " + Channel + " :They aren't on that channel. (441)\n"
#define ERR_NOTONCHANNEL(Channel) "ircserv " + Channel + " :You're not on that channel. (442)\n"
#define ERR_USERONCHANNEL(Nick, Channel) "ircserv " + Nick + " " + Channel + " :is already on channel. (443)\n"
#define ERR_NOTREGISTERED() "ircserv :You have not registered. (451)\n"
#define ERR_NEEDMOREPARAMS(Command) "ircserv " + Command + " :Not enough parameters. (461)\n"
#define ERR_ALREADYREGISTERED() "ircserv :You may not reregister. (462\n)"
#define ERR_PASSWDMISMATCH() "ircserv :Password incorrect. (464)\n"
#define ERR_YOUREBANNEDCREEP() "ircserv :You banned from this server. (465)\n"
#define ERR_CHANNELISFULL(Channel) "ircserv " + Channel + " :Cannot join channel. (471)\n"
#define ERR_UNKNOWNMODE(Modechar) "ircserv " + Modechar + ":is unknown mode char to me. (472)\n"
#define ERR_INVITEONLYCHAN(Channel) "ircserv " + Channel + " :Cannot join channel. (473)\n"
#define ERR_BANNEDFROMCHAN(Channel) "ircserv " + Channel + " :Cannot join channel. (474)\n"
#define ERR_BADCHANNELKEY(Channel) "ircserv " + Channel + " :Cannot join channel. (475)\n"
#define ERR_NOPRIVILEGES() "ircserv :Permission Denied- You're not an IRC operator. (481)\n"
#define ERR_CHANOPRIVSNEEDED(Channel) "ircserv " + Channel + " :You're not channel operator. (482)\n"
#define ERR_INVALIDKEY(Channel) "ircserv " + Channel + " :Key is not well-formed. (525)\n"