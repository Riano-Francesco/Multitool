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

		for (int i = 0; i < sizeof(jahr) / sizeof(int); i++) {

			cout << i;
		}

*/