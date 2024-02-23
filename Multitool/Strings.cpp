#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>

#include "func.h"



using namespace std;

//int upstring(char *quelle) {
//
//	for (int i = 0; i < ostrlen(quelle); i++)
//	{
//		if (islower(quelle[i])) {
//			quelle[i] = quelle[i] - 32; // -32 der Abstand zwischen groß und klein im Ascii
//		}
//	}
//	cout << quelle;
//
//	return 0;
//}

// Upper Case: 65 - 90   Lower Case: 97 - 122

void ostrcpy(char* ziel, char* quelle) {
	int i = 0;
	while (quelle[i]) {
		ziel[i] = quelle[i];
		i++;
	}
	ziel[i] = quelle[i];
}

int ostrlen(char* gr) {

	int x = 0;
	while (gr[x++]);

	return x;
}

//int stringup(char *str) {
//
//	char up;
//
//	for (int i = 0; i < ostrlen(str); i++) {
//		up = toupper(str[i]);
//		cout << up;
//	}
//
//	return 0;
//}

void upper(char* range) {
	int count = 0;
	for (int i = 0; i < ostrlen(range); i++) {

		if (range[i] >= 97 && range[i] <= 122) {
			range[i] = range[i] - 32;
			count++;
		}
	}
	cout << range << " und Anzahl getauschter Buchstaben: " << count;
}

void strings() {
    bool abbruch;

    do {

		//char quelle[] = "Hallo";
		//char ziel[] = "Tschuess";

		//cout << "Alter String: \"" << quelle << "\"" << endl;

		//ostrcpy(quelle, ziel);
		//cout << "Neuer String: \"" << quelle << "\"" << endl;
		//
		//int x = ostrlen(ziel);
		//cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!" << endl;
		//
		//cout << "Ausgabe mit Großbuchstaben: ";
		//upper(quelle);
		//cout << endl;

		char quelle[81];
		char ziel[81];

		cout << "Bitte geben Sie zwei Wörter mit max. 80 Zeichen ein: " << endl;
		cin.getline(quelle, 80);
		cin.getline(ziel, 80);
		system("CLS");

		cout << "Alter String: \"" << quelle << "\"" << endl;
		ostrcpy(quelle, ziel);
		cout << "Neuer String nach dem Tausch: \"" << quelle << "\"" << endl;

		int x = ostrlen(ziel);
		cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!" << endl;

		cout << "Ausgabe mit Großbuchstaben: ";
		upper(quelle);


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung10();
}