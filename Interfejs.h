#ifndef INTERFEJS_H

#define INTERFEJS_H
#include "MetodyPomocnicze.h"
#include <iostream>


using namespace std;


class Interfejs
{
        MetodyPomocnicze metoda;
    public:
        char wybierzOpcjeZMenuGlownego();
        char wybierzOpcjeZMenuUzytkownika();
        char wybierzOpcjeZMenuEdycja();

};









#endif // INTERFEJS_H
