#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void Zählschleife() {
	bool abbruch;

	do {

		Sleep(500);


		int summe = 0;

		for (int i = 1; i < 11; i++) {

			summe += i;   // Zählt immer die Zahl drauf als Summe
			cout << summe << endl;
		}

		/* Zählen mit Umbrüchen und Sortierung zum Block
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