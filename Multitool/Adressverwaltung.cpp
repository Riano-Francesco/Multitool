#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <algorithm>


#include "func.h"

using namespace std;

void adressverwaltung() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		logger();

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung17();
}
