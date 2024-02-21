#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void Swap(int* a, int* b) { // Pointer festlegen
    bool abbruch;

    do {

        Sleep(500);

        int temp = *a; // Temporärer Speicher für Pointer *a
        *a = *b;       // Wert für *a mit *b tauschen
        *b = temp;     // Wert für *b mit temp tausch (= *a)


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung8();
}