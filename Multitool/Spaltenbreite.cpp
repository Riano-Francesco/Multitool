#include <iostream>
#include <windows.h>    // für Sleep(1000)
#include <iomanip>

#include "func.h"

using namespace std;



void SpaltenBreite() {
	bool abbruch;

	do {

		Sleep(500);
		
		cout << setw(5) << 3 << setw(5) << 5;
		cout << setw(5) << -8 << setw(5) << 17 << "\n";
		cout << setw(5) << 155 << setw(5) << 1;
		cout << setw(5) << 2 << setw(5) << -2 << "\n";


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung1();
}