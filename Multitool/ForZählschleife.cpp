#include <iostream>
#include <windows.h>    // f�r Sleep(1000)

#include "func.h"

using namespace std;


void Z�hlschleife() {
	bool abbruch;

	do {

		Sleep(500);


		int summe = 0;

		for (int i = 1; i < 11; i++) {

			summe += i;   // Z�hlt immer die Zahl drauf als Summe
			cout << summe << endl;
		}

		/* Z�hlen mit Umbr�chen und Sortierung zum Block
		for (int i = 10; i > -41; i--) {
			if (i == 10) {
				cout << setw(50) << i;
			 }
			else {
				cout << setw(5) << i;
			}
			if (i % 10 == 0) {
				cout << endl;
			}
		}

		*/

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}