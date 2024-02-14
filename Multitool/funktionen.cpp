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
	sind UNGLEICH -> else -> können nur noch gleich sein -> eine Bedingung reicht für die 3te Variante

	int max = 0;
	int moritz = 0;

	cout << "Bitte geben Sie zwei Zahlen ein: ";
	cin >> max >> moritz;


	if (max != moritz) { 

		cout << "Die Zahlen sind ungleich und die Summe /  2 ist: " << (double)(max + moritz) / 2 << endl;
	} else {
		cout << "Es gibt nichts zu tun";

		if (max < 0) {
			cout << ", die Zahlen sind kleiner Null.";
		}
		cout << endl;
	}
*/