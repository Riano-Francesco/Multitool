#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void enumWoche() {
	bool abbruch;

	do {

		Sleep(500);

		enum Woche { Mo, Di, Mi, Do, Fr, Sa, So }; // ->festgelegt nur 7 Werte!
		// enum = enumeration = Aufzählung

		Woche tag;
		tag = Do;
		// tag hat den Wert 4

		cout << tag;

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung11();
}

