#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

void m2(double l, double b) {

	double flaeche;
	flaeche = l * b;

	cout << "Die Fläche beträgt " << flaeche << " m²\n\n" << endl;

}


void flaeche() {
bool abbruch;

	do {

	Sleep(500);

	double wert1;
	double wert2;

	cout << "Bitte geben Sie die Länge an: ";
	cin >> wert1; cout << "\n";

	cout << "Bitte geben Sie die Breite an: ";
	cin >> wert2; cout << "\n";


	m2(wert1, wert2);


	abbruch = wiederholung();
	system("CLS");
	} while (abbruch);

	uebung2();
}