#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;



void hello() {
	bool abbruch;

	do {

		Sleep(500);

		cout << "Hello World!\n\n\n";

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);
	
	uebung1();
}