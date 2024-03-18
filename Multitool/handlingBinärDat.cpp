#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;

void liste() {
	FILE* datptr;                       // Datei-Pointer erstellen
	char vname[20], nname[20];
	int alter, groesse, i, list;
	datptr = fopen("test.txt", "rb");   // Datei öffnen

	fseek(datptr, 0, SEEK_END);         // Datei-Zeiger bei 0 beginnend bis zum ende der Datei
	size_t file_size = ftell(datptr);   // Dateigröße ermitteln

	int record_size = sizeof(vname) + sizeof(nname) + sizeof(alter) + sizeof(groesse) + sizeof(i);  // Datensatz-Größe ermitteln
	list = file_size / record_size;

	for (int a = 0; a < list; a++) {

		fseek(datptr, a * record_size, SEEK_SET);     // Dateizeiger auf gesuchten Datensatz positionieren

		fread(&i, sizeof(i), 1, datptr);
		fread(vname, sizeof(vname), 1, datptr);         // Datensatz auslesen
		fread(nname, sizeof(nname), 1, datptr);
		fread(&alter, sizeof(alter), 1, datptr);
		fread(&groesse, sizeof(groesse), 1, datptr);
		cout << "Index : " << a + 1 << " " << nname << endl;
	}
	fclose(datptr);
}

void datenSatzFinden()
{
	FILE* datptr;                           // Datei-Pointer erstellen
	char vname[20], nname[20];
	int alter, groesse, i;
	datptr = fopen("test.txt", "rb");   // Datei öffnen

	if (!datptr) {
		cout << "Fehler beim Öffnen der Datei!";
		return;
	}
	else {
		fseek(datptr, 0, SEEK_END);         // Datei-Zeiger bei 0 beginnend bis zum ende der Datei
		size_t file_size = ftell(datptr);   // Dateigröße ermitteln


		int pos = 1;
		cout << "Welche Position soll ausgegeben werden? ";
		cin >> pos;
		int record_size = sizeof(vname) + sizeof(nname) + sizeof(alter) + sizeof(groesse) + sizeof(i);  // Datensatz-Größe ermitteln

		pos -= 1;

		if (pos * record_size >= file_size || pos < 0) {                    // Prüfen, ob Position außerhalb der Datei liegt oder negativ ist
			std::cout << "Die Position liegt ausserhalb der Datei" << endl;
			return;
		}

		fseek(datptr, pos * record_size, SEEK_SET);     // Dateizeiger auf gesuchten Datensatz positionieren

		fread(&i, sizeof(i), 1, datptr);
		fread(vname, sizeof(vname), 1, datptr);         // Datensatz auslesen
		fread(nname, sizeof(nname), 1, datptr);
		fread(&alter, sizeof(alter), 1, datptr);
		fread(&groesse, sizeof(groesse), 1, datptr);


		cout << "\nPosition: " << pos + 1 << "\n------------------------------\n";  // Ausgabe des gesuchten Datensatzes
		cout << "Vorname: " << vname << endl;
		cout << "Nachname: " << nname << endl;
		cout << "Alter: " << alter << endl;
		cout << "Groesse: " << groesse << endl;
	}

	fclose(datptr);     // Datei schließen
}

void handleBinär() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		int alter, groesse;
		char vname[20];
		char nname[20];
		FILE* datptr;

		datptr = fopen("test.txt", "wb");  // wb überschreibt die alte datei immer wieder

		if (!datptr) {
			cout << "Datei konnte nicht erzeugt werden!" << endl;
		}
		else {

			int data = 0;
			cout << "Wie viele Personen sollen gespeichert werden? -> ";
			cin >> data;

			for (int i = 1; i < data + 1; i++) {					// Schleife für die Menge wie oft Daten gespeichert werden..

				cout << "Vorname: ";
				cin >> vname, 20;
				cout << "Nachname: ";
				cin >> nname, 20;
				cout << "Alter: ";
				cin >> alter;
				cout << "Größe: ";
				cin >> groesse;

				fwrite(&i, sizeof(i), 1, datptr);				// Zähler bzw Adresszähler
				fwrite(vname, sizeof(vname), 1, datptr);
				fwrite(nname, sizeof(char), 20, datptr);
				fwrite(&alter, sizeof(alter), 1, datptr);
				fwrite(&groesse, sizeof(groesse), 1, datptr);
			}

			fclose(datptr);
			cout << "Eingabe beendet!" << endl;
		}

		liste();
		datenSatzFinden();

		/*int a = 0;
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
		}*/

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung16();
}

