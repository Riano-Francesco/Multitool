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

        int temp = *a; // Tempor�rer Speicher f�r Pointer *a
        *a = *b;       // Wert f�r *a mit *b tauschen
        *b = temp;     // Wert f�r *b mit temp tausch (= *a)


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung8();
}