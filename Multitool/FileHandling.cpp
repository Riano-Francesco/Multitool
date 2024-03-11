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
		fgets(a, 80, datptr);
		cout << "Die 1.te Zeile aus der Datei ";
		cout << datname << " lautet " << a << endl;


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung15();
}