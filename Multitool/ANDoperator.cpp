#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

//bool gerade(int x) {
//	return (x & 1);
//}

bool gerade(int x) {
	return (x & 1) == 0;
}

void wahrfalsch() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 
		
		int x = 0;
		cout << "Bitte eine Zahl eingeben: ";
		cin >> x;

		if (gerade(x)) {
			cout << "Es ist eine gerade Zahl!\n";
		}
		else {
			cout << "Die Zahl ist ungerade!\n";
		}

		/*if (!gerade(x)) {
			cout << "Es ist eine gerade Zahl!\n";
		}
		else {
			cout << "Die Zahl ist ungerade!\n";
		}*/

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}