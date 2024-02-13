#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

int addieren(int a, int b) { // Unterprogramme

	cout << "Ergebnis addition: 45 + 45 = ";
	return a + b;
}

int dividieren(int a, int b) {

	cout << "Ergebnis division: 15 / 5 = ";
	return a / b;
}

void UnterFunk() {
	bool abbruch;

	do {

		Sleep(500);
		
		cout << addieren(45, 45) << "\n\n\n";

		cout << dividieren(15, 5) << "\n\n\n";

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung2();
}