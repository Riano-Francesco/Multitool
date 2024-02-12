#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;



void Eausgabe() {
	bool abbruch;

	do {

		Sleep(500);

		cout << "Dies ist der erste Text!\n\n\n";
		cout << "Dies ist der zweite Text!" << endl << endl;

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung1();
}