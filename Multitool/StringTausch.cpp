#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>

#include "func.h"



using namespace std;


void ostrcpy(char* ziel, char* quelle) {

    for (int i = 0; i < 10; i++) {
        ziel[i] = quelle[i];
    }
}

int ostrlen(char* gr) {

    int x = 0;
    while (gr[x++]);

    return x;
}


void stringtausch() {
    bool abbruch;

    do {

        char ziel[10] = "Hallo";
        char quelle[10] = "Tschuess";

        cout << "Alter String: \"" << ziel << "\"" << endl;

        ostrcpy(ziel, quelle);

        cout << "Neuer String: \"" << ziel << "\"" << endl << endl;

        int x = 0;
        x = ostrlen(ziel);
        cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!";



        cout << endl << endl << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung9();
}
