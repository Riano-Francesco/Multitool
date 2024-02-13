#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

int ifA2(int a, int b) {

	int erg = a + b;

	if (erg < 20) {
		cout << "Ergebnis ist kleiner als 20\n\n\n";
	}
	else {
		cout << "Ergebnis ist größer als 20\n\n\n";
	}

	return (a + b);
}