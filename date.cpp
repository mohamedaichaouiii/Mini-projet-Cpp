#include "date.h"


Date::Date(){
    jour = 0;
    mois = 0;
    annee = 0;
    heure = 0;
    minute = 0;
    seconde = 0;
}

Date::Date(int Jour = 0, int Mois = 0, int Annee = 0, int Heure = 0, int Minute = 0, int Seconde = 0){
    jour = Jour;
    mois = Mois;
    annee = Annee;
    heure = Heure;
    minute = Minute;
    seconde = Seconde;
}

bool Date::operator<(Date& d){
    if (annee < d.annee)
        return true;
    if ((annee == d.annee) && (mois < d.mois))
    	return true;
    if ((annee == d.annee) && (mois == d.mois) && (jour < d.jour))
    	return true;
    if ((annee == d.annee) && (mois == d.mois) && (jour == d.jour) && (heure < d.heure))
        return true;
    if ((annee == d.annee) && (mois == d.mois) && (jour == d.jour) && (heure == d.heure) && (minute < d.minute))
        return true;
    if ((annee == d.annee) && (mois == d.mois) && (jour == d.jour) && (heure == d.heure) && (minute == d.minute) && (seconde < d.seconde))
        return true;
    return false;
}

bool Date::operator==(Date& d){
    return ((jour == d.jour) && (mois == d.mois) && (annee == d.annee) && (heure == d.heure) && (minute == d.minute) && (seconde == d.seconde));
}

bool Date::operator>(Date& d){
    return !((*this == d) || (*this < d));
}

bool Date::operator!=(Date& d){
    return !(*this == d);
}

bool Date::operator<=(Date& d){
    return !(*this > d);
}

bool Date::operator>=(Date& d){
	return !(*this < d);
}


