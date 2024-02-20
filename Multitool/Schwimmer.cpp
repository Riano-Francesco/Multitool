#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void Strand() {
	bool abbruch;

	do {

		Sleep(500);

        int Meter = 0;
        int Strand[101];
        double Strandmeter[101], Wassermeter[101], Gesamtzeit[101];
        int StrandStrecke = pow(50, 2), WasserStrecke = pow(50, 2);

        //Schleife zur zuweisung der Werte vom Array
        for (int i = 0; i < 101; i++) {
            Strand[i] = Meter++; // Meterzähler
            Strandmeter[i] = sqrt(pow(Strand[i], 2) + StrandStrecke); // Strecke Strand zur Wassergrenze 
            Wassermeter[i] = sqrt(pow(Strand[i] - 100, 2) + WasserStrecke); // Strecke Wasser von Strandgrenze bis zum Lauch 
            Gesamtzeit[i] = Strandmeter[i] / 5 + Wassermeter[i] / 2.5; // Gesamtzeit für die gesamte Strecke 

            // cout << Gesamtzeit[i] << endl;
        }

        double shortesttime = Gesamtzeit[0];
        for (int i = 1; i < 101; i++) {
            if (Gesamtzeit[i] < shortesttime) {
                shortesttime = Gesamtzeit[i];
                Meter = i;
            }
        }
        cout << "Die kürzeste Zeit ist: " << shortesttime << endl;
        cout << "Der kürzeste Weg ist: " << Meter << " m" << endl;

        //float* KleinsterWert = min_element(begin(Gesamtzeit), end(Gesamtzeit)); // * ist ein Dereferenzierungsoperator um nur den Wert anzuzeigen auf dem "KleinsterWert" zeigt.

        //cout << *KleinsterWert << endl;


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}