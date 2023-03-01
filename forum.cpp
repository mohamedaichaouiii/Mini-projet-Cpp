#include "forum.h"

Utilisateur *Forum::Connect(string Email, string Pass){
    for (int i = 0; i < utilisateur.size(); ++i){
        if (utilisateur[i].getEmail() == Email){
            if (utilisateur[i].getPass() == Pass){
                return &utilisateur[i];
            } else {
                return NULL;
            }
        }

    }
}
