#include <iostream>
#include <windows.h>    // f�r Sleep(1000)

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

		// Vorw�rts
		for (start; start <= ende; start++) {

			summe += start;
			cout << summe << endl;
		}

		// R�ckw�rts
		if (start > ende) {

			for (start; start >= ende; start--) {

				summe += start;
				cout << summe << endl;
			}
		}


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}