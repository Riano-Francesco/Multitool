#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void Multi() {
	bool abbruch;

	do {

		Sleep(500);

		int a[10][10];
		int x, y;
		
		// Bergmann
		for (int i = 0; i < 100; i++) {
			a[i / 10][i % 10] = i + 1;  // So kann man durchs ganze Array gehen
		}
		for (int i = 0; i < 100; i++) {
			cout << setw(5) << a[i / 10][i % 10];
			if ((i + 1) % 10 == 0) {
				cout << endl;
			}
		}
		cout << endl << endl;
		// Meins
		for (x = 0; x < 10; x++) {

			for (y = 0; y < 10; y++) {

				a[x][y] = x * 10 + y + 1;

				cout << a[x][y] << " ";

				if ((y + 1) % 10 == 0) {
					cout << endl;
				}
			}
		}



		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}