#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>


#include "func.h"

using namespace std;

void writing(const char* name) {
	ofstream writedata(name);
	char inp[160];
	if (writedata) {
		cout << " : ";
		cin.getline(inp, 160);
		while (strcmp(inp, "-end")) { // Endbedingung
			writedata << inp << endl;
			cout << " : ";
			cin.getline(inp, 160);
		}
	}
}

void reading(const char* name) {
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

void writecopy(const char* name) {
	ifstream file(name);
	ofstream copyfile("copy.txt");
	char inp[160];

	while (file.getline(inp, 160)) {
		copyfile << inp << endl;
	}
	file.close();
	copyfile.close();

}

//void copyparam(char* a, char* b) {
//
//	ifstream file(a);
//	ofstream copyfile(b);
//	char inp[160];
//
//	while (file.getline(inp, 160)) {
//		copyfile << inp << endl;
//	}
//	file.close();
//	copyfile.close();
//}

void filecopy() { // (int argc, char** argv) in main für copypara
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		// Zum erstellen von Textdateien
		cout << "Eingabe\n-----------------------" << endl;
		writing("temp.txt");
		cout << "\nAusgabe\n-----------------------" << endl;
		reading("temp.txt");

		// zum kopieren der erstellten datei
		writecopy("temp.txt");

		// In Konsole ausführen!!!
		//C:\Users\R.Forni\source\repos\Test\x64\Debug>Test.exe "temp.txt" "fussnagel.txt"  Parameter kopiert und an neue datei übergeben
		//copyparam(argv[1], argv[2]);


		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung14();
}