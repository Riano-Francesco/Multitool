#include <iostream>
#include <windows.h>
#include <iomanip>

#include "func.h"

using namespace std;


void Kneipe() {
	bool abbruch;

	do {

		Sleep(500);

		int geld = 0;

		double bierA = 4.80;
		double bierB = 4.20;
		double bierC = 5.80;

		cout << "Wie arm bist du ? Bitte D-Mark, keine Ziegen: ";
		cin >> geld;
		cout << endl;

		int kneipeA = geld / bierA;
		int kneipeB = geld / bierB;
		int kneipeC = geld / bierC;

		cout << "Sie können in Kneipe A " << kneipeA << " Bier trinken." << endl;
		cout << "Sie können in Kneipe B " << kneipeB << " Bier trinken." << endl;
		cout << "Sie können in Kneipe C " << kneipeC << " Bier trinken." << endl;


		int auswahl;

		cout << "Bitte waehlen Sie welche Kneipe sie besuchen wollen -> | 1 = A | 2 = B | 3 = C | -> ";
		cin >> auswahl;
		cout << endl;

		system("CLS");

	
		switch (auswahl)
		{
		case 1:
			kneipen(kneipeA, bierA);
			break;

		case 2:
			kneipen(kneipeB, bierB);
			break;

		case 3:
			kneipen(kneipeC, bierC);
			break;


		default: cout << "Ungueltige Eingabe.";
			break;
		}



		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung6();
}