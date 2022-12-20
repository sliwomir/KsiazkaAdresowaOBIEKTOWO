#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H

#include <iostream>

using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    Uzytkownik (int id=0, string login="", string haslo="")
    {
        this -> id = id;
        this -> login = login;
        this -> haslo = haslo;
    }

    void ustawId (int noweId);
    void ustawLogin (string nowyLogin);
    void ustawHaslo (string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo ();
};
#endif
