#include <iostream>
#include <windows.h> // ebenfalls f�r Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

void bin�r(unsigned long x) {
	int bits = 0;
	int byte[8];
	for (int i = 0; i < 8; i++) {
		bits = (x & 1);
		byte[i] = bits;
		x = x >> 1;
	}
	for (int i = 0; i < 8; i++) {
		byte[7 - i];
		cout << byte[7 - i];
	}
}

void deztobin() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		unsigned long x = 0;
		cout << "Bitte eine Zahl eingeben: ";
		cin >> x;

		cout << "Dezimal mit Bin�r: ";
		(x);

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}