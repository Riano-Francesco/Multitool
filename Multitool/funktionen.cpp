#include <iostream>


using namespace std;

bool abbruch = false;

bool wiederholung()
{
	cout << "Wiederholen ? 0 = Abbruch | 1 = Wiederholen" << endl;
	cin >> abbruch;

	return abbruch;
}