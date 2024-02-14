#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void HauptAusgabe() {
	bool abbruch;

	do {

		Sleep(500);


		int wert1, wert2, sum, sumq;

		cout << "Bitte geben Sie die erste Zahl an: ";
		cin >> wert1;

		cout << "Bitte geben Sie die zweite Zahl an: ";
		cin >> wert2;


		sum = summe(wert1, wert2);

		if (sum < 20) {

			cout << sum << " ist kleiner als 20!\n";
			sumq = quadrat(sum);

			cout << "Das Quadrat aus " << sum << " ist " << sumq << endl << endl;
		}
		else {

			cout << sum << " ist groesser gleich 20!\n";
			sumq = quadro(sum);

			cout << "Das Quadrat aus Quadrat ist " << sumq << endl << endl;
		}

		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung3();
}