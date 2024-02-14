#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void ifA1() {
	bool abbruch;

	do {

		Sleep(500);

		int a, b = 0;

		cout << "Geben sie eine Zahl ein: ";
		cin >> a;

		cout << "Geben sie eine weitere Zahl ein: ";
		cin >> b;

		ifA2(a, b);

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung2();
}