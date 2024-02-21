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

        /*
        // int* pAlter = 0; Null Pointer
        int wieAlt = 50; // eine Int Variable erzeugen
        int* pAlter = 0; // einen Zeiger erzeugen
        pAlter = &wieAlt;// die Adresse von wieAlt an pAlter zuweisen

        int x;
        int *z = 0;

        x = 24;
        z = &x;
        cout << x << " : " << *z << endl; <-- durch *z wird der Wert der zugewiesenen Adresse ausgegeben statt die Adresse
        nennt sich Dereferenzierungsoperator

        void quadrat(int* wert) {
        *wert = (*wert) * (*wert);
}
        int x;

        cout << "Zahl: ";
        cin >> x;

        quadrat(&x);
        cout << "Das Quadrat beträgt " << x << endl;






        */
        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung7();
}