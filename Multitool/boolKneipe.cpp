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

		cout << "Als Fahrer dürfen Sie nur 2 Bier trinken.\n\n";

		if ((kneipe) < 2) {

			if ((kneipe) < 1) {
				cout << "Sie können sich gar kein Bier leisten.\n\n";
				return;
			}
			cout << "Leider können Sie sich nur 1 Bier zum Preis von " << 1 * bier << " leisten.\n\n";
			return;

		}
		else {
			cout << "Sie bezahlen für ihre 2 Bier " << 2 * bier << " DM.\n\n";
			return;
		}
	}
	else {
		cout << "Sie dürfen 5 Bier trinken.\n\n";

		if ((kneipe) < 5) {

			if ((kneipe) < 1) {
				cout << "Sie können sich gar kein Bier leisten.\n\n";
				return;
			}
			cout << "Leider können Sie sich nur " << kneipe << " Bier zum Preis von " << kneipe * bier << " leisten.\n\n";
			return;
		}
		else {
			cout << "Sie bezahlen für ihre 5 Bier " << 5 * bier << " DM.\n\n";
			return;
		}
	}
	return;

}
