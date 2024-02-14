#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;



void werte2() {
	bool abbruch;

	do {

		Sleep(500);
		int a, b;

		cout << "Bitte 2 Werte eingeben:\n\n\n";
		cin >> a >> b;

		cout << "Sie haben " << a << " und " << b << " eingegeben!\n\n\n";

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung1();
}