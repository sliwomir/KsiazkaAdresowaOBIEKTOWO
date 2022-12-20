#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void edytujWybranaLinieWPliku(int idAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);


public:
    PlikZAdresatami (string nazwaPlikuZAdresatami)
        : PlikTekstowy(nazwaPlikuZAdresatami)
    {
        idOstatniegoAdresata = 0;
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "AdresaciTymczasowy.txt";
    };

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();

    void usunWybranegoAdresata(int idAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
};
#endif
