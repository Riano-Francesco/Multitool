#include <iostream>
#include <windows.h>
#include <iomanip>

#include "func.h"

using namespace std;


bool wahl(int fahrer)
{
	if (fahrer == 1) {

		return true;
	}

	else {

		return false;
	}
}

void kneipen(double kneipe, double bier) {

	bool fahrer;
	cout << "Sind Sie heute Fahrer? | 1 - Ja | 0 - Nein |";
	cin >> fahrer;
	cout << endl;


	if (wahl(fahrer)) {

		cout << "Als Fahrer d�rfen Sie nur 2 Bier trinken.\n\n";

		if ((kneipe) < 2) {

			if ((kneipe) < 1) {
				cout << "Sie k�nnen sich gar kein Bier leisten.\n\n";
				return;
			}
			cout << "Leider k�nnen Sie sich nur 1 Bier zum Preis von " << 1 * bier << " leisten.\n\n";
			return;

		}
		else {
			cout << "Sie bezahlen f�r ihre 2 Bier " << 2 * bier << " DM.\n\n";
			return;
		}
	}
	else {
		cout << "Sie d�rfen 5 Bier trinken.\n\n";

		if ((kneipe) < 5) {

			if ((kneipe) < 1) {
				cout << "Sie k�nnen sich gar kein Bier leisten.\n\n";
				return;
			}
			cout << "Leider k�nnen Sie sich nur " << kneipe << " Bier zum Preis von " << kneipe * bier << " leisten.\n\n";
			return;
		}
		else {
			cout << "Sie bezahlen f�r ihre 5 Bier " << 5 * bier << " DM.\n\n";
			return;
		}
	}
	return;

}
