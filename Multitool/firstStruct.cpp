#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

struct S_Adresse {
	char Strasse[100];
	unsigned long PLZ;
	char Ort[80];

};

struct Personendaten2 {
	struct S_Adresse* Adresse;
	char vorname[40];
	char nachname[40];
	int bruttogehalt;
	int alter;
};

void firstStruct() {
    bool abbruch;

    do {

        Sleep(500);

		struct Personendaten {					// Struktur aufbauen und festlegen
			char vorname[40];
			char nachname[40];
			int bruttogehalt;
			int alter;
		};

		Personendaten person;					// Struktur "Namen" geben

		strcpy_s(person.vorname, "Jesus");		// Strings mit strcpy ins array einfügen!!    secure strcpy nutzen weil programm behindert
		strcpy_s(person.nachname, "Christus");	// Mit Punktoperator aufrufen und einfügen
		person.bruttogehalt = 5;
		person.alter = 2024;

		cout << person.vorname << " " << person.nachname << endl;
		cout << "Alter: " << person.alter << endl;
		cout << "Bruttogehalt: " << person.bruttogehalt << endl;
		cout << endl;

		// Mit Pointerzuweisung und Datenänderung
		Personendaten* personptr;
		personptr = &person;
		// 2 Variationen zum Pointeraufruf
		person.alter = 34;
		personptr->alter = 40;

		cout << person.vorname << " " << person.nachname << endl;
		cout << "Alter: " << person.alter << endl;
		cout << "Bruttogehalt: " << person.bruttogehalt << endl;
		cout << endl;

		struct Personendaten x, * y; {
			y = &x;
			x.alter = 28;
			y->bruttogehalt = 3000; // nur x wird geändert da y auf x zeigt
		}
		cout << "Alter: " << x.alter << endl;
		cout << "Bruttogehalt: " << x.bruttogehalt << endl;
		cout << endl;


		struct S_Adresse madresse;
		struct Personendaten2 mdaten;
		mdaten.Adresse = &madresse;

		mdaten.Adresse->PLZ = 23568;

		cout << madresse.PLZ << endl;


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung11();
}

// struct Personendaten personen[100] zum verwalten von 100 personen
// - " - *personenptr[100] um es als Feld mit Zeiger zu machen
//bsp: personenptr[19]->bruttogehalt = 5000; um Person 20 neuen entsprechenden Wert zu zuweisen

/* Verschachtelte Strukturen Beispiel
*
* struct S_Adresse {
* char Strasse[100];
* unsigned long PLZ;
* char Ort[80];
* };
*
* Struktur als Variable in andere Struktur einbauen
*
* struct Personendaten {
* struct S_Adresse Adresse;
* char vorname[40];
* char nachname[40];
* int bruttogehalt;
* int alter;
*};
* 
* Adresse ansprechen
* person.Adresse.PLZ = 50000;
* 
* Vollständige Kopie
* struct Personendaten person, person2;
* person2 = person;
*/