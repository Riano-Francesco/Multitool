#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

// Schaltjaht ist durch 4 aber nicht durch 100
// Schaltjahr ist durch 4, durch 100 und durch 400
// Kein Schaltjahr nicht durch 4


bool isSchaltjahr(int jahr)
{
	if (jahr % 4 == 0) {

		if (jahr % 100 != 0) {

			return true;
		}

		if (jahr % 100 == 0 && jahr % 400 == 0) {

			return true;
		}

	}
	// Kein Schaltjahr
	return false;
	}
