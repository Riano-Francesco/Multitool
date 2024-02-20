#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;


void isAlpha() {
	bool abbruch;

	do {

		Sleep(500);

		char w;

		do {
			cout << "Bitte EINE Ziffer eingeben,";
			cout << " keinen Buchstaben: ";
			cin >> w;
		} while (isalpha(w)); // Prüft ob es ein Buchstabe ist, Rückgabewert ist Boolscher
		cout << "Ziffer " << w << " eingegeben.";




		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung7();
}