#include <iostream>
#include <windows.h>    // f�r Sleep(1000)
#include <stdlib.h>     // f�r srand und rand
#include <time.h>		// f�r time(NULL) = Zeit vom aktuellen System

#include "func.h"

using namespace std;



void dice() {
	bool abbruch;

	do
	{
		int w�rfel1;


		Sleep(1000);
		srand(time(NULL));									// Random seed = pseudo Algorythmus f�r zuf�llige generation einer Zahl
		w�rfel1 = rand() % 6 + 1;							// pseudo Algorythmus Zahl zwischen 1 & 6

		cout << w�rfel1 << "\n\n\n";

		abbruch = wiederholung();
		system("CLS");

	} while (abbruch);


	uebung1();
}

