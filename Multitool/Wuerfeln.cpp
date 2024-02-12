#include <iostream>
#include <windows.h>    // für Sleep(1000)
#include <stdlib.h>     // für srand und rand
#include <time.h>		// für time(NULL) = Zeit vom aktuellen System

#include "func.h"

using namespace std;



void dice() {
	bool abbruch;

	do
	{
		int würfel1;


		Sleep(1000);
		srand(time(NULL));									// Random seed = pseudo Algorythmus für zufällige generation einer Zahl
		würfel1 = rand() % 6 + 1;							// pseudo Algorythmus Zahl zwischen 1 & 6

		cout << würfel1 << "\n\n\n";

		abbruch = wiederholung();
		system("CLS");

	} while (abbruch);


	uebung1();
}

