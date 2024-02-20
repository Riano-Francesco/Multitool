#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void Adresswert() {
    bool abbruch;

    do {

        Sleep(500);

        int x;
        x = 100;
        cout << "x hat den Wert " << x << " und die Adresse ";
        cout << &x << endl;

        x = 200;
        cout << "x hat den Wert " << x << " und die Adresse ";
        cout << &x << endl;

        // Der Inhalt ändert sich aber die Adresse nicht -  Bleibt über die Lebensdauer Konstant
        // Adressoperator & - Liefert Adresse einer Variable

        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung7();
}