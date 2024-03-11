#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;



void filehand() { 
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		int input;
		char a[81];
		char b[81] = {};
		char datname[15];
		FILE* datptr;

		cout << "Soll die Datei gelesen = 1 oder ";
		cout << "beschrieben = 2 werden?" << endl;
		cin >> input;
		getchar();

		if (input == 2) {
			cout << "Welche Datei soll beschrieben werden: ";
			cin.getline(datname, 15);
			datptr = fopen(datname, "a");

			for (int i = 1; i < 4; i++) {

				cout << i << ".te Zeile: ";
				cin.getline(a, 80);
				fputs(a, datptr);
				fputs("\n", datptr);
				cout << "Es wurde " << a << " eingegeben.";
				cout << endl;
			}
			fclose(datptr);
		}
		datptr = fopen(datname, "r");
		
		int countA = 0;
		int countB = 0;
		int countC = 0;

		datptr = fopen(datname, "r");

		int i = 0;
		while (!feof(datptr)) {
			fgets(b, 80, datptr); // gibt Zeile für Zeile aus

			i = 0;

			while (b[i] != '\0') {
				if (b[i] == 'A' || b[i] == 'a') {
					countA++;
				}
				if (b[i] == 'B' || b[i] == 'b') {
					countB++;
				}
				if (b[i] == 'C' || b[i] == 'c') {
					countC++;
				}
				i++;
			}
			b[0] = '\0';
		}

		FILE* datptr2 = fopen("count.txt", "w"); // w = Write
		fprintf(datptr2, "Anzahl der A's: %d", countA);
		fprintf(datptr2, "\nAnzahl der B's: %d", countB);
		fprintf(datptr2, "\nAnzahl der C's: %d", countC); // %d = spezifizierungscharacter um einen komponenten als Integer zu interpretieren, um ihn dementsprechend zu zuweisen
		fclose(datptr2);


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung15();
}