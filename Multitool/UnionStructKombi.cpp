#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

struct Privat {
	char vorname[40];
	char nachname[40];
	char gebdat[12];
	char sternzeichen[20];
	char tel[20];
	char strasse[40];
	char ort[20];
};

struct Business {
	char vorname[40];
	char nachname[40];
	char firma[12];
	char telpriv[20];
	char telbuero[20];
	char strasse[40];
	char ort[20];
};

union Pinfo {
	struct Privat privat;
	struct Business business;
};

struct Adresse {
	int isprivat;
	union Pinfo pinfo;
};

struct Adresse adr;

void UnionStructKombi() {
	bool abbruch;

	do {

		Sleep(500);

		if (adr.isprivat) {
			cout << "Sternzeichen: " << adr.pinfo.privat.sternzeichen;
		}
		else {
			cout << "Firma: " << adr.pinfo.business.firma;
		}

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung11();
}

// enum Woche {Mo, Di, Mi, Do, Fr, Sa, So}; -> festgelegt nur 7 Werte!
// enum = enumeration = Aufzählung

// Woche tag;
// tag = Do;
// tag hat den Wert 4 