#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void Swap(int* a, int* b) {
    bool abbruch;

    do {

        Sleep(500);

        int temp = *a;
        *a = *b;
        *b = temp;


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung8();
}