#include <iostream>
#include <windows.h>
#include <iomanip>

#include "func.h"

using namespace std;


void ContinueSchleife() {
	bool abbruch;

	do {

		Sleep(500);

		int x, y;

		for (x = 1; x <= 3; x++) {

			for (y = 1; y <= 5; y++) {
				
				if ((x == 2) && (y == 3)) { // Diese Bedingung wird ausgesetzt, beendet einen Schleifendurchlauf

					cout << "continue" << endl;
					continue;					// springt in den Kopf der Schleife wo sie enthalten ist. Bedingung erfüllt und übersprungen. Schleife geht dann normal weiter
				}								// break beendet Schleife komplett und geht dann bei 3 weiter
				cout << x << " : " << y << endl;
			}
		}



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung5();
}