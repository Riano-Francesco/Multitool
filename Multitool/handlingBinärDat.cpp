#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;


void handleBinär() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		int alter, groesse;
		char vname[20];
		char nname[20];
		FILE* datptr;

		datptr = fopen("test.txt", "ab");
		if (!datptr) {
			cout << "Datei konnte nicht erzeugt werden!" << endl;
		}
		else {
			cout << "Vorname: ";
			cin.getline(vname, 20);
			cout << "Nachname: ";
			cin.getline(nname, 20);
			cout << "Alter: ";
			cin >> alter;
			cout << "Größe: ";
			cin >> groesse;

			int data = 0;
			cout << "Wie oft sollen die Daten gespeichert werden: ";
			cin >> data;

			for (int i = 1; i < data + 1; i++) {					// Schleife für die Menge wie oft Daten gespeichert werden..

				fwrite(vname, sizeof(vname), 1, datptr);
				fwrite(nname, sizeof(char), 20, datptr);
				fwrite(&alter, sizeof(alter), 1, datptr);
				fwrite(&groesse, sizeof(groesse), 1, datptr);
				fwrite(&i, sizeof(i), 1, datptr);				// Zähler bzw Adresszähler
			}

			fclose(datptr);
			cout << "Eingabe beendet!" << endl;
		}

		int a = 0;
		int daten = 0;
		datptr = fopen("test.txt", "rb");
		if (!datptr) {
			cout << "Datei konnte nicht geöffnet werden!" << endl;
		}
		else {
			fread(vname, sizeof(vname), 1, datptr);
			fread(nname, sizeof(nname), 1, datptr);
			fread(&alter, sizeof(alter), 1, datptr);
			fread(&groesse, sizeof(groesse), 1, datptr);
			fread(&a, sizeof(a), 1, datptr);

			cout << "Welche AdressNr soll abgerufen werden: ";
			cin >> daten;

			while (!feof(datptr)) {
				a = 0;

				fread(vname, sizeof(vname), 1, datptr);
				fread(nname, sizeof(nname), 1, datptr);
				fread(&alter, sizeof(alter), 1, datptr);
				fread(&groesse, sizeof(groesse), 1, datptr);
				fread(&a, sizeof(a), 1, datptr);

				if (a == 0) {
					break;
				}

				if (daten == a) {
					cout << "AdressNr: " << a << endl;
					cout << "Vorname: " << vname << endl;
					cout << "Nachname: " << nname << endl;
					cout << "Alter: " << alter << endl;
					cout << "Größe: " << groesse << endl;
				}
			}


			fclose(datptr);
		}

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung16();
}

