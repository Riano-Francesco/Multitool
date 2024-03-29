#include <iostream>
#include <windows.h> // ebenfalls f�r Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;

void write(const char* name) {
	ofstream writedata(name);
	char inp[160];
	if (writedata) {
		cout << " : ";
		cin.getline(inp, 160);
		while (strcmp(inp, "-x")) { // Endbedingung
			writedata << inp << endl;
			cout << " : ";
			cin.getline(inp, 160);
		}
	}
}

void read(const char* name) {
	ifstream readdata(name);
	char inp[160];
	if (readdata) {
		readdata.getline(inp, 160);
		while (!readdata.eof()) {
			cout << inp << endl;
			readdata.getline(inp, 160);
		}
	}
}


void streams() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		cout << "Eingabe \n-----------------------" << endl;
		write("temp.txt");   // write("temp.txt", ios::app) Sorgt daf�r das vorhandenes nicht �berschrieben wird sondern drunter gef�gt/
		cout << "\nAusgabe \n-----------------------" << endl;
		read("temp.txt");

		// Zum erstellen von Textdateien

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung13();
}