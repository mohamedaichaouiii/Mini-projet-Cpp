#include "utilisateur.h"


Utilisateur::Utilisateur(string Nom, string Prenom, string Email, string Pseudonyme, string Pass){
	nom = Nom;
	prenom = Prenom;
	email = Email;
	pass = Pass;
	pseudonyme = Pseudonyme;
}

void Utilisateur::setPseudonyme(string Pseudonyme){
	pseudonyme = Pseudonyme;
}

string Utilisateur::getPseudonyme(){
    return pseudonyme;
}

void Utilisateur::setPass(string Pass){
	pass = Pass;
}

string Utilisateur::getPass(){
    return pass;
}
void Utilisateur::setNom(string Nom){
	nom = Nom;
}

string Utilisateur::getNom(){
	return nom;
}

void Utilisateur::setPrenom(string Prenom){
        prenom = Prenom;
}

string Utilisateur::getPrenom(){
	return prenom;
}

void Utilisateur::setEmail(string Email){
	email = Email;
}

string Utilisateur::getEmail(){
	return email;
}

