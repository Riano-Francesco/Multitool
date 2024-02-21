#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;



void PointerSwap() {
    bool abbruch;

    do {

        Sleep(500);

        int a = 5;
        int b = 9;
        int *ptra = &a; // Pointer a
        int *ptrb = &b; // Pointer b
        cout << "Wert a ist " << a << endl;
        cout << "Wert b ist " << b << endl;

        swappy(ptra, ptrb); // Funktion die beide Werte tauscht
        cout << "Wert a ist " << a << endl;
        cout << "Wert b ist " << b << endl;


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung8();
}