#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

int bits(unsigned long x) {
	int bits = 0;
	for (int i = 0; i < 8; i++) {
		bits += (x & 1);
		x = x >> 1;
	}
	return bits;
}

void bitsi() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		unsigned long x = 0;
		cout << "Bitte eine Zahl eingeben: ";
		cin >> x;
		cout << "Die Anzahl der 1er Bits der Zahl ist: " << bits(x);

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}