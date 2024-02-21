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
        int* ptra = &a;
        int* ptrb = &b;
        cout << "Wert a ist " << a << endl;
        cout << "Wert b ist " << b << endl;

        swap(*ptra, *ptrb);
        cout << "Wert a ist " << a << endl;
        cout << "Wert b ist " << b << endl;


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung8();
}