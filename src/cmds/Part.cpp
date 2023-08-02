#include "../../inc/Server.hpp"


//ERR_NEEDMOREPARAMS (461)*
//ERR_NOSUCHCHANNEL (403)*
//ERR_NOTONCHANNEL (442)*

void Server::Part(Client &client, std::vector<std::string> params)
{
    if(client._status != UsernameRegistered)
    {
        sendServerToClient(client,ERR_NOTREGISTERED(client._nick));
        return ;
    }
    int err = ParamsSizeControl(params, 1, 0);
    if (err != 0)
    {
        if (err == -1)
            sendServerToClient(client, ERR_NEEDMOREPARAMS(client._nick, std::string("PART")));
        else if (err == 1)
            sendServerToClient(client, ERR_UNKNOWNERROR(client._nick, std::string("PART"), std::string("Excessive argument is given")));
        return;
    }
    if (IsExistChannel(params[0]) && IsInChannel(client, params[0]))
    {
        if(_channels.at(params[0])->getOperator()->_nick == client._nick)
        {
            sendServerToChannel(params[0], PART(client._nick, params[0] + " :closed the channel"));
            for(std::vector<Client*>::iterator it = _channels.at(params[0])->getMembers().begin(); it != _channels.at(params[0])->getMembers().end(); it++)
                (*it)->_channel.erase(params[0]);
            _channels[params[0]]->setOperator(NULL);
            _channels.erase(params[0]);
/*             Channel* puf = _channels.at(params[0]);
            _channels.erase(puf->_name);
            delete puf; */
        }
        else
        {
            sendServerToChannel(params[0], PART(client._nick, params[0]));
            _channels.at(params[0])->removeMembers(client);
        }
    }
    else
    {
        if (!IsExistChannel(params[0]))
            sendServerToClient(client, ERR_NOSUCHCHANNEL(client._nick, params[0]));
        else if (!IsInChannel(client, params[0]))
            sendServerToClient(client, ERR_NOTONCHANNEL(client._nick, params[0]));
    }
}
