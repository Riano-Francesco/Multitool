#include <iostream>
#include <windows.h>
#include <iomanip>

#include "func.h"

using namespace std;


void Leibnitz() {
	bool abbruch;

	do {

		Sleep(500);

		double reihe;

		cout << "Wie weit soll die Reihe gebildet werden: ";
		cin >> reihe;

		double pi = 0.0;

		for (int i = 0; i < reihe; i++) {

			double num1 = (1 - 2 * (i % 2));
			double num2 = (2 * i + 1);
			double num3 = num1 / num2;

			double summe = 4 * num3;

		/*	cout << "num 1 = " << num1 << endl;
			cout << "num 2 = " << num2 << endl;
			cout << "num 3 = " << num3 << endl;
			cout << "summe = " << summe << endl;
		*/
			pi += summe;

		}

		cout << "Pi = " << setprecision(16) << pi << endl;



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung5();
}