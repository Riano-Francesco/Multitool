#include <iostream>
#include <windows.h>    // f�r Sleep(1000)

#include "func.h"

using namespace std;

void m2(double l, double b) {

	double flaeche;
	flaeche = l * b;

	cout << "Die Fl�che betr�gt " << flaeche << " m�\n\n" << endl;

}


void flaeche() {
bool abbruch;

	do {

	Sleep(500);

	double wert1;
	double wert2;

	cout << "Bitte geben Sie die L�nge an: ";
	cin >> wert1; cout << "\n";

	cout << "Bitte geben Sie die Breite an: ";
	cin >> wert2; cout << "\n";


	m2(wert1, wert2);


	abbruch = wiederholung();
	system("CLS");
	} while (abbruch);

	uebung2();
}