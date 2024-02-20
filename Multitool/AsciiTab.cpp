#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

#include "func.h"

using namespace std;


void ascii() {
	bool abbruch;

	do {

		Sleep(500);

		int x;

		for (x = 0; x < 256; x++) {
			cout << "Das Zeichen " << (char)(x);
			cout << " hat den Wert " << x << endl;
		}




		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}