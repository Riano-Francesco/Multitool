#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

//int multi(int a, int b) {
//	int ergebnis = 0;
//	for (int i = 0; i < b; i++) {
//		ergebnis += a;
//	}
//	return ergebnis;
//}

int multi(int x) {
	return (x << 2);
}

void multiOhne() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		int x = 0;
		cout << "Bitte eine Zahl eingeben: ";
		cin >> x;
		cout << "Die Zahl Multipliziert mit 4 ist: " << multi(x);
		

		/*int a = 0;
		int b = 0;

		cout << "Bitte eine Zahl eingeben: ";
		cin >> a;
		cout << "Bitte eine weitere Zahl eingeben: ";
		cin >> b;

		int ergebnis = multi(a, b);
		cout << a << " * " << b << " = " << ergebnis << std::endl;*/

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}