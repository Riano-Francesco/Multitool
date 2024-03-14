#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>
#include <ctime>

#include "func.h"

using namespace std;

void speed() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		int pause;
		float zeit;
		clock_t start, ende;

		pause = 3 * CLOCKS_PER_SEC;
		start = clock();
		while (clock() < start + pause);

		start = clock();
		for (int i = 0; i < 10000000; i++) {
		}
		ende = clock();
		zeit = (float)(ende - start) / CLOCKS_PER_SEC;

		cout << zeit;

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung16();
}

