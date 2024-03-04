#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

struct S_Adresse {
	char Name[40];
	char Strasse[100];
	unsigned long PLZ;
	char Ort[80];
};

void ausgabe_struktur(struct S_Adresse* daten, int a) {
	cout << "Daten eingegeben: " << a + 1 << "." << endl;
	cout << (daten->Name) << endl;
	cout << (daten->Strasse) << endl;
	cout << (daten->PLZ) << endl;
	cout << (daten->Ort) << endl;
}

void eingabe_struktur(struct S_Adresse* daten, int a) {
	cout << "Name: " << a + 1 << "." << endl;
	cin >> (daten->Name);
	cout << "Strasse: " << a + 1 << "." << endl;
	cin >> (daten->Strasse);
	cout << "PLZ: " << a + 1 << "." << endl;
	cin >> (daten->PLZ);
	cout << "Ort: " << a + 1 << "." << endl;
	cin >> (daten->Ort);
}

void EingabeStruct() {
	bool abbruch;

	do {

		Sleep(500);

		struct S_Adresse adress[5];
		int a;

		for (a = 0; a <= 4; a++) {
			eingabe_struktur(&adress[a], a);
		}
		for (a = 0; a <= 4; a++) {
			ausgabe_struktur(&adress[a], a);
		}


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung11();
}

