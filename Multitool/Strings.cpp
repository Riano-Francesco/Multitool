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

void ostrcpy(char* start, char* ziel) {
	int i = 0;
	while (ziel[i]) {
		start[i] = ziel[i];
		i++;
	}
	start[i] = ziel[i];
}

int ostrlen(char* gr) {

	int x = 0;
	while (gr[x]) {
		x++;
	}

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
	cout << range << endl << "Anzahl getauschter Buchstaben: " << count;
}

void reversestring(char* string) {
	int a = 0;
	int b = ostrlen(string) - 1;
	while (a < b) {
		char temp = string[a];
		string[a] = string[b];
		string[b] = temp;
		a++;
		b--;
	}
}

void mixstring(char* ziel, char* quelle1, char* quelle2) {
	int a = 0;
	int b = 0;
	int c = 0;

	while (quelle1[a] && quelle2[b]) {
		ziel[c] = quelle1[a];
		a++;
		c++;
		ziel[c] = quelle2[b];
		b++;
		c++;
	}
	ziel[c] = '\0';
}

void strings() {
    bool abbruch;

    do {

		//char start[] = "Hallo";
		//char ziel[] = "Tschuess";

		//cout << "Alter String: \"" << start << "\"" << endl;

		//ostrcpy(start, ziel);
		//cout << "Neuer String: \"" << start << "\"" << endl;
		//
		//int x = ostrlen(ziel);
		//cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!" << endl;
		//
		//cout << "Ausgabe mit Großbuchstaben: ";
		//upper(start);
		//cout << endl;

		char start[81];
		char ziel[81];
		char start2[81];

		cout << "Bitte geben Sie zwei Wörter mit max. 80 Zeichen ein: " << endl;
		cin.getline(start, 80);
		cin.getline(ziel, 80);
		cin.getline(start2, 80);
		system("CLS");

		cout << "Alter String: \"" << start << "\"" << endl;
		ostrcpy(start, ziel);
		cout << "Neuer String nach dem Tausch: \"" << start << "\"" << endl;

		int x = ostrlen(start);
		cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x << " Zeichen!" << endl;

		cout << "Ausgabe mit Großbuchstaben: ";
		upper(start);
		cout << endl;

		reversestring(start);
		cout << "Ausgabe Rückwärts geschrieben: " << start;
		reversestring(start);
		cout << endl;

		mixstring(start, ziel, start2);
		cout << "Ausgabe Mixed geschrieben: " << start;


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung10();
}