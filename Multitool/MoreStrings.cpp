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


//funktion um strings zu kopieren
void ostrcpy(char* start, char* ziel) {
	int i = 0;
	while (ziel[i]) {
		start[i] = ziel[i];
		i++;
	}
	start[i] = ziel[i];
}

//funktion um die länge eines strings zu ermitteln
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

//65-90 Uppercase | 97-122 Lowercase
//funktion um einen string in uppercase zu konvertieren
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

//funktion um einen string in lowercase zu konvertieren
//void lowstring(char* str) {
//	int i = 0;
//	while (str[i]) {
//		if (str[i] >= 65 && str[i] <= 90) {
//			str[i] = str[i] + 32;
//		}
//		i++;
//	}
//}

//funktion um einen string umzudrehen
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

//funktion um zwei strings zu mixen
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

//funktion um zu prüfen ob ein string in einem anderen string vorkommt
int ostrstr(char* pattern, char* check) {
	int i = 0;
	int j = 0;
	int k = 0;

	while (check[i]) {
		if (check[i] == pattern[j]) {
			k = i;
			while (check[i] == pattern[j]) {
				i++;
				j++;
				if (pattern[i] == '\0') {
					return k;
				}
			}
			j = 0;
		}
		i++;
	}
	return -1;
}

//funktion um die ersten zeichen eines strings zu kopieren und in einen anderen string zu speichern
void leftstr(char* ziel, char* quelle, int anz) {
	int a = 0;

	while (a < anz) {
		ziel[a] = quelle[a];
		a++;
	}
	ziel[a] = '\0';
}

//funktion um die letzten zeichen eines strings zu kopieren und in einen anderen string zu speichern
void rightstr(char* ziel, char* quelle, int anz) {
	int a = 0;
	int b = ostrlen(quelle) - anz;
	while (quelle[b]) {
		ziel[a] = quelle[b];
		a++;
		b++;
	}
	ziel[a] = '\0';
}

//funktion um die Position festzulegen wo der String ausgegeben wird
void midstr(char* ziel, char* quelle, int pos, int anz) {
	int a = 0;
	while (a < anz) {
		ziel[a] = quelle[pos];
		a++;
		pos++;
	}
	ziel[a] = '\0';
}


void stringcatination(char* ziel, const char* quelle) {
	int a = 0;
	int b = ostrlen(ziel);
	while (quelle[a]) {
		ziel[b++] = quelle[a++];
	}
	ziel[b] = '\0';
}

void unter20(unsigned long wert, char* str, char s = 's') {
	switch (wert) {
	case 1:
		if (s != 's') {
			stringcatination(str, "Eins");
		}
		else {
			stringcatination(str, "Ein");
		}
		break;
	case 2:
		stringcatination(str, "Zwei");
		break;
	case 3:
		stringcatination(str, "Drei");
		break;
	case 4:
		stringcatination(str, "Vier");
		break;
	case 5:
		stringcatination(str, "Fuenf");
		break;
	case 6:
		stringcatination(str, "Sechs");
		break;
	case 7:
		stringcatination(str, "Sieben");
		break;
	case 8:
		stringcatination(str, "Acht");
		break;
	case 9:
		stringcatination(str, "Neun");
		break;
	case 10:
		stringcatination(str, "Zehn");
		break;
	case 11:
		stringcatination(str, "Elf");
		break;
	case 12:
		stringcatination(str, "Zwoelf");
		break;
	case 13:
		stringcatination(str, "Dreizehn");
		break;
	case 14:
		stringcatination(str, "Vierzehn");
		break;
	case 15:
		stringcatination(str, "Fuenfzehn");
		break;
	case 16:
		stringcatination(str, "Sechszehn");
		break;
	case 17:
		stringcatination(str, "Siebzehn");
		break;
	case 18:
		stringcatination(str, "Achtzehn");
		break;
	case 19:
		stringcatination(str, "Neunzehn");
		break;
	}
}

void unter100(unsigned long wert, char* str) {
	switch (wert / 10) {
	case 2:
		stringcatination(str, "Zwanzig");
		break;
	case 3:
		stringcatination(str, "Dreißig");
		break;
	case 4:
		stringcatination(str, "Vierzig");
		break;
	case 5:
		stringcatination(str, "Fuenfzig");
		break;
	case 6:
		stringcatination(str, "Sechzig");
		break;
	case 7:
		stringcatination(str, "Siebzig");
		break;
	case 8:
		stringcatination(str, "Achtzig");
		break;
	case 9:
		stringcatination(str, "Neunzig");
		break;
	}
}

void hundert(unsigned long wert, char* str) {
	if (wert < 20) {						// Einser
		if (wert == 1) {
			unter20(wert, str, 'a');		// Eins
		}
		else {
			unter20(wert, str);				// Ein
		}
		return;
	}
	if (wert % 10) {						// Vorzahl und Nachzahl (Zweistellig aber nicht Ganz)
		unter20(wert % 10, str);			// Hintere Zahl - nicht im Case sonder im Funk.Aufruf
		stringcatination(str, "-Und-");
		unter100(wert, str);				// Vordere Zahl (Zweistellig)
		return;
	}
	if (wert / 10) {						// Ganze Zweistellig
		unter100(wert, str);
		return;
	}
}

void toWord(unsigned long wert, char* str) {
	if (wert == 0) {
		stringcatination(str, "Null");
		return;
	}
	hundert(wert, str);
}

void MoreStrings() {
    bool abbruch;

    do {

		//char start[81];
		//char ziel[81];
		//char start2[81];
	
		//cout << "Bitte geben Sie drei Wörter mit max. 80 Zeichen ein, wobei das zweite und dritte kombiniert wird: " << endl;
		//cin.getline(start, 80);
		//cin.getline(ziel, 80);
		//cin.getline(start2, 80);
		//system("CLS");


		//cout << "Alter String: \"" << start << "\"" << endl;
		//ostrcpy(start, ziel);
		//cout << "Neuer String nach dem Tausch: \"" << start << "\"" << endl;
		//cout << "Der dritte String für Mixed: \"" << start2 << "\"" << endl;

		//int x = ostrlen(start);
		//cout << "Die Zeichenmenge des neuen Strings plus Endekennung ist: " << x + 1 << " Zeichen!" << endl;

		//cout << "Ausgabe mit Großbuchstaben: ";
		//upper(start);
		//cout << endl;

		//reversestring(start);
		//cout << "Ausgabe Rückwärts geschrieben: " << start;
		//reversestring(start);
		//cout << endl;

		//mixstring(start, ziel, start2);
		//cout << "Ausgabe Mixed geschrieben: " << start;
		//cout << endl;


		//char check[81] = "Otto";
		//char pattern[81] = "Und Otto ging Baden";

		//int otto = ostrstr(check, pattern);
		//if (otto == -1) {
		//	cout << "Das Wort \"" << check << "\" ist nicht in dem Satz \"" << pattern << "\" enthalten." << endl;
		//	cout << "Rückgabewert : " << otto << "\n";
		//}
		//else {
		//	cout << "Das Wort \"" << check << "\" ist in dem Satz \"" << pattern << "\" enthalten." << endl;
		//	cout << "Die Position ist: " << otto << endl;
		//}
		

		//char wortwahl[81]; char zielausgabe[81];
		//int anz = 0;
		//int position = 0;

		//cout << "Geben Sie ein Wort mit maximal 80 Zeichen ein: ";
		//cin >> wortwahl;
			
		//cout << "Wie viele Zeichen sollen im Ziel kopiert werden? -> ";
		//cin >> anz;

		//leftstr(zielausgabe, wortwahl, anz);
		//cout << "Stringzeichen von links aus ihren Eingaben: " << zielausgabe << endl;

		//rightstr(zielausgabe, wortwahl, anz);
		//cout << "Stringzeichen von rechts aus ihren Eingaben: " << zielausgabe << endl;

		//cout << "Bei welcher Stelle ihres Wortes wollen sie beginnen? -> ";
		//cin >> position;
		//midstr(zielausgabe, wortwahl, position, anz);
		//cout << "Stringzeichen von der gewählten Position aus ihren Eingaben: " << zielausgabe << endl;


		char str[50] = {};
		int wert = 0;

		cout << "Bitte geben Sie eine Zahl ein: ";
		cin >> wert;

		toWord(wert, str);
		cout << "Der Wert " << wert << " wurde in das Wort '" << str << "' umgewandelt." << endl;

        




        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung10();
}
