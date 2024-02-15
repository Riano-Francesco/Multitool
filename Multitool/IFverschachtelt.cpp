#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void verschachtelt() {
	bool abbruch;

	do {

		Sleep(500);


		int max = 0;
		int moritz = 0;

		cout << "Bitte geben Sie die erste Zahl ein: ";
		cin >> max;
		cout << "Bitte geben Sie die zweite Zahl ein: ";
		cin >> moritz;


		if (max != moritz) {

			cout << "Die Zahlen sind ungleich und die Summe /  2 ist: " << (double)(max + moritz) / 2 << endl;
		}
		else {

			cout << "Es gibt nichts zu tun";

			if (max < 0) {

				cout << ", die Zahlen sind kleiner Null.";
			}

			cout << endl;
		}

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}