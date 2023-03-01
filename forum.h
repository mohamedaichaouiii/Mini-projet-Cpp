#ifndef FORUM_H_INCLUDED
#define FORUM_H_INCLUDED

#include <vector>
#include "utilisateur.h"
#include "theme.h"

class Forum{
private:
    vector <Theme> theme;
    vector <Utilisateur> utilisateur;
public:
    Utilisateur* Connect (string, string);

};


#endif // FORUM_H_INCLUDED
