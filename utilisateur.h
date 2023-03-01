#ifndef UTILISATEUR_H_INCLUDED
#define UTILISATEUR_H_INCLUDED

#include <string>

using namespace std;


class Utilisateur{
protected:
    string nom;
    string prenom;
    string email;
    string pass;
    string pseudonyme;
public:
    Utilisateur(string, string, string, string, string);

    void setPass(string);
    string getPass();
    void setPseudonyme(string);
    string getPseudonyme();
    void setNom(string);
    string getNom();
    void setPrenom(string);
    string getPrenom();
    void setEmail(string);
    string getEmail();




};

#endif // UTILISATEUR_H_INCLUDED
