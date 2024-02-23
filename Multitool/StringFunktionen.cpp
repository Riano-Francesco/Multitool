#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>

#include "func.h"



using namespace std;

//void stringup(char* str) {
//
//    char up;
//
//    for (int i = 0; i < ostrlen(str); i++) {
//        up = toupper(str[i]);
//        cout << up;
//    }
//}
//
//int upstring(char *quelle) {
//
//	for (int i = 0; i < ostrlen(quelle); i++)
//	{
//		if (islower(quelle[i])) {
//			quelle[i] = quelle[i] - 32;
//		}
//	}
//	cout << quelle;
//
//	return 0;
//}
//
//void ostrcpy(char* ziel, char* quelle) {
//
//    int i = 0;
//
//    while (quelle[i]) {
//        ziel[i] = quelle[i];
//        i++;
//    }
//    ziel[i] = quelle[i];
//}
//
//int ostrlen(char* gr) {
//
//    int x = 0;
//    while (gr[x++]);
//
//    return x;
//}

// Upper Case: 65 - 90   Lower Case: 97 - 122

void stringtausch() {
    bool abbruch;

    do {

        char quelle[] = "Hallo";
        char ziel[] = "Tschuess";

        int x = 0;

        cout << "Alter String: \"" << quelle << "\"" << endl;

        ostrcpy(quelle, ziel);
        cout << "Neuer String: \"" << quelle << "\"" << endl;

        x = ostrlen(ziel);
        cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!";




        cout << endl << endl << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung9();
}
