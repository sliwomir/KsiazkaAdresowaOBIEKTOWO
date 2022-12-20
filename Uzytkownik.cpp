#include "Uzytkownik.h"

void Uzytkownik::ustawId (int noweId)
{
    id = noweId;
}

void Uzytkownik::ustawLogin (string nowyLogin)
{
    login = nowyLogin;
}

void Uzytkownik::ustawHaslo (string noweHaslo)
{
    haslo = noweHaslo;
}

int Uzytkownik::pobierzId()
{
    return id;
}

string Uzytkownik::pobierzLogin()
{
    return login;
}

string Uzytkownik::pobierzHaslo ()
{
    return haslo;
}
