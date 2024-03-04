#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

// Union -> Alle Typen teilen sich einen Speicher - vom gr��ten Element (hier der String) festgelegt
union block {
	char string[10];
	int integer;		// 10 Byte - Voriger Wert wird immer vom neuen �berschrieben, da der Speicher nicht reichen w�rde.
	double dbl;
};

void UnionStruct() {
	bool abbruch;

	do {

		Sleep(500);

		block sammlung;

		sammlung.integer = 20;
		cout << "int = " << sammlung.integer << endl;

		strcpy_s(sammlung.string, "Anton");
		cout << "string = " << sammlung.string << endl;
		cout << "int = " << sammlung.integer << endl;

		sammlung.dbl = 3.14;
		cout << "double = " << sammlung.dbl << endl;
		cout << "string = " << sammlung.string << endl;
		cout << "int = " << sammlung.integer << endl;
		cout << endl;
		cout << endl;
		cout << "Es funktioniert nicht weil der gemeinsame Speicherplatz nicht ausreicht!!";


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung11();
}

