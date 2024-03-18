#include <iostream>
#include <locale>  // Passt UTF an Sprache des Systems an
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <algorithm>

#include "func.h"

using namespace std;

void logger()
{
	cout << "Willkommen in der Adressverwaltung\n";
	cout << "Bitte geben sie das Passwort ein: ";

	string password;
	cin >> password;

	database DB;

	for (int i = 1; i >= 0; i--) {
		if (password == "123") {
			cout << "Passwort korrekt!\n\n";
			DB.menu();
			break;
		}
		else {
			cout << "Passwort falsch - bitte erneut Versuchen: ";
			cin >> password;
		}
		while (i == 0) {
			cout << "Passwort wurde 3 mal Falsch eingegeben!\n";
			exit(0);
		}
	}
}

void database::menu() {
	if (data.empty()) {
		cout << "Welche Datei soll geöffnet werden? -> ";
		this->choosefile();
	}

	cout << "1. Neue Adresse hinzufügen -> " << endl;
	cout << "2. Adresse Suchen          -> " << endl;

	int choose = 0;
	cin >> choose;

	switch (choose) {
	case 1:
		this->toGet();
		break;

	case 2:
		this->search();
		break;

	default:
		menu();
	}
}

void database::choosefile() {
	cout << "Bitte geben sie den Namen der Datei ein: ";
	cin >> filename;

	filename += ".csv";

	ifstream file(filename);
	if (file.good()) { // checkt ob datei existiert
		cout << "Datei gefunden.\n\n";
		this->load();    // zeiger auf ein Objekt
	}
	else {
		ofstream file(filename);
	}

}

void database::toGet() {

	int anzahl = 0;
	cout << "Wie viele Personen sollen gespeichert werden? -> ";
	cin >> anzahl;

	for (int i = 1; i < anzahl + 1; i++) {

		vector < string > getter;
		string vname;
		string nname;
		string strasse;
		string ort;
		string plz;

		cout << "Bitte Vornamen eingeben: ";
		cin >> vname;
		vname = vname;
		getter.push_back(vname);

		cout << "Bitte Nachnamen eingeben: ";
		cin >> nname;
		nname = nname;
		getter.push_back(nname);

		cout << "Bitte Strasse eingeben: ";
		cin >> strasse;
		strasse = strasse;
		getter.push_back(strasse);

		cout << "Bitte Ort eingeben: ";
		cin >> ort;
		ort = ort;
		getter.push_back(ort);

		cout << "Bitte Postleitzahl eingeben: ";
		cin >> plz;
		plz = plz;
		getter.push_back(plz);
		cout << "Daten wurden hinzugefügt.\n\n";

		data.push_back(getter);
	}
	this->save();
}

void database::save() {
	ofstream file(filename);
	for (int i = 0; i < data.size(); i++) {
		for (int j = 0; j < data[0].size(); j++) {
			file << data[i][j];
			if (j < data[0].size() - 1) {
				file << ",";
			}
		}
		file << "\n";
	}
}

void database::load() {
	ifstream file(filename);
	string zeile;

	while (getline(file, zeile)) {
		// letter = "";
		vector < string > getter;
		string letter;

		for (int i = 0; i < zeile.size(); i++) {
			if (zeile[i] != ',') {
				letter += zeile[i];
			}
			else {
				//	cout << letter << "\n";
				getter.push_back(letter); // Speichert hier zelle für zelle
				letter = "";

			}
		}
		getter.push_back(letter);
		data.push_back(getter);
		// getter.erase(getter.begin(), getter.end());
	}
}

void database::search() {
	string search;
	cout << data.size();

	cout << "\nGeben Sie einen Nachnamen ein: ";
	cin >> search;

	for (int i = 0; i < data.size(); i++) {
		if (search.substr(0, 2) == data[i][1].substr(0, 2)) {  // substr(0, 2) -> 0 beginnt er, 2 ist die zweite stelle == data[i][1] -> i = durchlauf & 1 gleiche zweite stelle 
			for (int j = 0; j < data[0].size(); j++) {
				cout << data[i][j] << endl;
			}
		}
	}
};