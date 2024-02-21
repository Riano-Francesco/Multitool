#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void arr10() {
	bool abbruch;

	do {

		Sleep(500);

		int x[10], y;

		for (y = 0; y < 10; y++) {
			cout << "Bitte Zahl " << y + 1 << " eingeben: ";
			cin >> x[y];
		}
		for (y = 0; y < 10; y++) {
			cout << x[y] << " mal 2 ist " << x[y] * 2 << endl;
		}

		/*
		* Arraygröße anzeigen lassen

		int jahr[3];

		for (int i = 0; i < sizeof(jahr) / sizeof(int); i++) {

			cout << i;
		}

		*/

// Arrays -> typ name [anzahl]
		// 2 Dimensionales Array  arr[senkrecht][waagerecht]  3 Dimensional arr[senk][waag][tief] <- worte dienen nur der Vorstellung

// Array   arr[15] -> arr[0] bis arr[14]

		//	int arr[3] = { 1, 2, 3 };
		//  cout << sizeof(arr) / sizeof(arr[0]);
		//             12       /       4       =     3

		// cout << *arr + 2; Adresse vom Speicherblock von 3
		// cout << *(arr + 2); Wert vom Speicherblock




		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}