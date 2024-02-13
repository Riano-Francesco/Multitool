#include <iostream>
#include <windows.h>    // für Sleep(1000)
#include <iomanip>

#include "func.h"

using namespace std;



void SpaltenBreite() {
	bool abbruch;

	do {

		Sleep(500);
		
		//setw wirkt sich nur auf unmittelbar folgende Ausgabe aus
		cout << setw(5) << 3 << setw(5) << 5;
		cout << setw(5) << -8 << setw(5) << 17 << "\n";
		cout << setw(5) << 155 << setw(5) << 1;
		cout << setw(5) << 2 << setw(5) << -2 << "\n\n\n";


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung1();
}

/*setfill füllt freie Plätze aus z.b. cout << setfill ('v')
cout << left; erfolgt Ausgabe links
cout << showpos; werden Vorzeichen explizit dargestellt zum beispiel bei negativen zahlen und auch bei positiven
cout << hex; Zahlen werden in Hexadezimalsystem ausgegeben
% Modulo Operator gibt Restwert einer Division ganzzahlig aus : 5 % 2 = Restwert 1
*/