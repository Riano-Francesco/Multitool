#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void StartEnde() {
	bool abbruch;

	do {

		int summe = 0;
		int start, ende;

		cout << "Geben Sie den Startwert an: ";
		cin >> start;
		cout << "Geben Sie den Endwert ein: ";
		cin >> ende;

		// Vorwärts
		for (start; start <= ende; start++) {

			summe += start;
			cout << summe << endl;
		}



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}

/*
		int summe = 0;
		int start, ende;

		cout << "Geben Sie den Startwert an: ";
		cin >> start;
		cout << "Geben Sie den Endwert ein: ";
		cin >> ende;



		if (start % 2 == 0) {
			start += 1;
		}
		if (ende % 2 == 0) {
			ende -= 1;
		}

		for (start; start <= ende; start += 2) {

			summe += start;
			cout << summe << endl;
		}
*/