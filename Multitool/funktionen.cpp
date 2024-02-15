#include <iostream>


using namespace std;

bool abbruch = false;

bool wiederholung()
{
	cout << "Wiederholen ? 0 = Abbruch | 1 = Wiederholen" << endl;
	cin >> abbruch;

	return abbruch;
}


/*
* Arraygröße anzeigen lassen

	int jahr[3];

		for (int i = 0; i < sizeof(jahr) / sizeof(int); i++) {

			cout << i;
		}

*/


/* Zählen mit Umbrüchen und Sortierung zum Block
		for (int i = 10; i > -41; i--) {
			if (i == 10) {
				cout << setw(50) << i;
			 }
			else {
				cout << setw(5) << i;
			}
			if (i % 10 == 0) {
				cout << endl;
			}
		}

*/

/*
		int summe = 0;
		int start, ende;

		cout << "Geben Sie den Startwert an: ";
		cin >> start;
		cout << "Geben Sie den Endwert ein: ";
		cin >> ende;



		if (start % 2 == 0) {
			start += 1;
		}
		if (ende % 2 == 0) {
			ende -= 1;
		}

		for (start; start <= ende; start += 2) {

			summe += start;
			cout << summe << endl;
		}
*/