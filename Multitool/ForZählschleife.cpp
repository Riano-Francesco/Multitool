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


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}