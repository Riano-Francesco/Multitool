#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;


void Tannenbaum() {
	bool abbruch;

	do {

		Sleep(500);

		int hoehe = 0;
		int sterne = 1;

		cout << "Wie Hoch soll der Baum werden: ";
		cin >> hoehe;

		int space = hoehe;


		// Höhe des Baumes | Anzahl der Zeilen
		for (int i = 0; i < hoehe; i++) {

			// Anzahl der Leerzeichen
			for (int u = 0; u < space; u++) {
				cout << " ";
			}
			// Anzahl der Sterne
			for (int s = 0; s < sterne; s++) {
				cout << "*";
			}
			cout << endl; // Zeile ist fertig
			sterne += 2; // Anzahl Sternen erhöhen für nächste Zeile (Breite)
			space--; // Anzahl eines Leerzeichens verringern
		}

		// Höhe des Stammes
		for (int i = 0; i < 3; i++) {

			// Anzahl der Leerzeichen | Hartverdrahtet halbe Höhe - 1
			for (int u = 0; u < hoehe - 1; u++) {
				cout << " ";
			}
			// Anzahl der Sterne | Hartverdrahtet 3 Stück
			for (int s = 0; s < 3; s++) {
				cout << "*";
			}
			cout << endl;

		}



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung5();
}