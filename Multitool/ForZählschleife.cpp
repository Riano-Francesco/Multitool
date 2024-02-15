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


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung4();
}