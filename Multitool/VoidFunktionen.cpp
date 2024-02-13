#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

void ausgabe1() { // Funktionsparameter
	cout << "Dies ist der 1. Text\n\n";
}

void ausgabe2() {
	cout << "Dies ist der 2. Text\n\n";
}

void voids() {
	bool abbruch;

	do {

		Sleep(500);

		ausgabe1();
		ausgabe2();

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung2();
}