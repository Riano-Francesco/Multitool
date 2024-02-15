#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;



void Schaltjahr() {
	bool abbruch;

	do {

		Sleep(500);


		int jahr = 0;


		cout << "Bitte geben Sie eine Jahreszahl ein: ";
		cin >> jahr;

		if (isSchaltjahr(jahr)) {
			cout << "Es ist ein Schaltjahr!\n";
		}
		else {
			cout << "Es ist kein Schaltjahr!\n";
		}

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}