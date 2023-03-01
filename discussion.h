#ifndef DISCUSSION_H_INCLUDED
#define DISCUSSION_H_INCLUDED

#include <vector>
#include "date.h"
#include "message.h"
#include "utilisateur.h"

class Discussion{
private:
    Date dernier_msg;
    vector<Message> message;
    vector<Utilisateur> util_abonne;
};

#endif // DISCUSSION_H_INCLUDED
