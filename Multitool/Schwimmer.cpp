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

        int Strandgrenze[101];
        float Strandstrecke[101];
        float Wasserstrecke[101];
        int Meterzaehler = 0;
        int WegStrand = pow(50, 2);
        int WegWasser = pow(50, 2);
        float Zeitgesamt[101];

        //Schleife zur zuweisung der Werte vom Array
        for (int i = 0; i < 101; i++) {

            Strandgrenze[i] = Meterzaehler;
            Meterzaehler++;
            Strandstrecke[i] = sqrt(pow(Strandgrenze[i], 2) + WegStrand);
            Wasserstrecke[i] = sqrt(pow(Strandgrenze[i] - 100, 2) + WegWasser);
            Zeitgesamt[i] = Strandstrecke[i] / 5 + Wasserstrecke[i] / 2.5;
        }

        float* KleinsterWert = min_element(begin(Zeitgesamt), end(Zeitgesamt)); // * ist ein Dereferenzierungsoperator um nur den Wert anzuzeigen auf dem "KleinsterWert" zeigt.

        cout << *KleinsterWert << endl;


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}