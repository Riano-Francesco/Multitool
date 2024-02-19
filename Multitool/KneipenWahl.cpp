#include <iostream>
#include <windows.h>
#include <iomanip>

#include "func.h"

using namespace std;


void Kneipe() {
	bool abbruch;

	do {

		Sleep(500);

		double geld = 0;

		do {
			cout << "Wie arm bist du ? Bitte D-Mark, keine Ziegen: ";
			cin >> geld;
		} while (geld < 0);
		cout << endl;

		starter(geld);



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung6();
}