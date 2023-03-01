#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date{
private:
    int jour;
    int mois;
    int annee;
    int heure;
    int minute;
    int seconde;
public:
    Date();
    Date(int, int, int, int, int, int);
    bool operator<(Date&);
    bool operator==(Date&);
    bool operator>(Date&);
    bool operator<=(Date&);
    bool operator>=(Date&);
    bool operator!=(Date&);

};

#endif // DATE_H_INCLUDED
