#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;

void randomWerte(const char* name) {

	ifstream input(name);
	ofstream file(name);

	double werte = 0.00;

	if (!file) {
		cout << "Datei nicht gefunden: " << name << endl;
	}

	for (int i = 0; i < 100; i++) { // 100 Random werte in Datei schreiben
		werte = rand() / 100;
		file << werte << endl;				// Werte an Datei/neue zeile anhängen
	}
	cout << "100 Werte wurden in Datei: " << name << " gespeichert!" << endl;

	for (int i = 0; i < 100; i++) { // Werte wieder auslesen
		input >> werte;				// Werte in Variable speichern

		if (werte > 300) {			// Werte überprüfen
			cout << "Wert Nr. " << i + 1 << " entspricht -> " << werte << endl;
		}
	}

}

void randData() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		randomWerte("werte.txt");

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}