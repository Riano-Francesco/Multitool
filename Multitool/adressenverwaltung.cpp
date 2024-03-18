#include <iostream>
#include <locale>  // Passt UTF an Sprache des Systems an
#include <string>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <algorithm>

#include "func.h"

using namespace std;

void database::menu() {
	if (data.empty()) {
		cout << "Welche Datei soll geöffnet werden? -> ";
		this->choosefile();
	}

	cout << "1. Neue Adresse hinzufügen -> " << endl;
	cout << "2. Adresse Suchen          -> " << endl;
	cout << "3. Adresse Löschen         -> " << endl;

	int choose = 0;
	cin >> choose;

	switch (choose) {
	case 1:
		this->toGet();
		break;

	case 2:
		this->show();
		break;

	case 3:
		this->remove();
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
		vector < string > getter;
		string letter;

		for (int i = 0; i < zeile.size(); i++) {
			if (zeile[i] != ',') {
				letter += zeile[i];
			}
			else {
				getter.push_back(letter); // Speichert hier zelle für zelle
				letter = "";
			}
		}
		getter.push_back(letter);
		data.push_back(getter);
		// getter.erase(getter.begin(), getter.end());
	}
}

void database::show() {
	string search;
	cout << "Bitte geben Sie den Nachnamen ein: ";
	cin >> search;

	this->search(search);
}

int database::search(const string& search) {
	vector < int > matches;

	for (int i = 0; i < data.size(); i++) {
		if (search.substr(0, 2) == data[i][1].substr(0, 2)) {  // substr(0, 2) -> 0 beginnt er, 2 ist die zweite stelle == data[i][1] -> i = durchlauf & 1 gleiche zweite stelle 
			matches.push_back(i);
		}
	}
	if (matches.empty()) {
		cout << "Kein Eintrag gefunden.";
		return -1;
	}
	if (matches.size() == 1) {
		int i = matches[0];
		cout << "Eintrag wurde gefunden.";
		cout << "Vorname: " << data[i][0] << endl;
		cout << "Nachname: " << data[i][1] << endl;
		cout << "Strasse: " << data[i][2] << endl;
		cout << "Ort: " << data[i][3] << endl;
		cout << "Postleitzahl: " << data[i][4] << endl;
		return i;
	}
	else {
		cout << matches.size() << " Einträge gefunden!" << endl << endl;
		for (int i = 0; i < matches.size(); i++) {
			int j = matches[i];
			cout << i + 1 << " Ausgabe: " << data[j][0] << " " << data[j][1] << endl;
		}
		int option = 0;
		cout << "\nWelchen Eintrag wollen Sie einsehen? -> ";
		cin >> option;
		cout << endl;

		int i = matches[option - 1]; // um bei postition 0 zu beginnen 
		cout << "Gewählte Ausgabe:" << endl;
		cout << "Vorname: " << data[i][0] << endl;
		cout << "Nachname: " << data[i][1] << endl;
		cout << "Strasse: " << data[i][2] << endl;
		cout << "Ort: " << data[i][3] << endl;
		cout << "Postleitzahl: " << data[i][4] << endl;
		return i;
	}
}


void database::remove() {
	string search;
	cout << "Geben Sie einen Nachnamen ein. -> ";
	cin >> search;

	int i = this->search(search);

	data.erase(data.begin() + i); // Löscht den Eintrag der gewählt wurde
	cout << "Eintrag wurde gelöscht.\n";
	this->save();
}