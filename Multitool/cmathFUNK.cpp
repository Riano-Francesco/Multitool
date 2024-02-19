#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

#include "func.h"

using namespace std;


void cmathFUNK() {
	bool abbruch;

	do {

		Sleep(500);

		int a = 4, b = 5, c = 4.5, d = -2, e = 0.0;
		float f = 3.0, g = -3.4, cos = -3.9, sin = -15;

		cout << "Der Absolutwert ist von a " << a << " ist " << abs(a) << endl;
		cout << "Der Absolutwert ist von b " << b << " ist " << abs(b) << endl;
		cout << "Der Absolutwert ist von c " << c << " ist " << abs(c) << endl;
		cout << "Der Absolutwert ist von d " << d << " ist " << abs(d) << endl;
		cout << "Der Absolutwert ist von e " << e << " ist " << abs(e) << endl;
		cout << "Der Absolutwert ist von f " << f << " ist " << abs(f) << endl;
		cout << "Der Absolutwert ist von g " << g << " ist " << abs(g) << endl;
		cout << "Der Absolutwert ist von cos " << cos << " ist " << abs(cos) << endl;
		cout << "Der Absolutwert ist von sin " << sin << " ist " << abs(sin) << endl;

		cout << "Der Sinus von 45 grad ist " << std::sin(45) << endl;
		cout << "Der Cosinus von 45 grad ist " << std::cos(45) << endl;

		cout << "Das Ergebnis von 5 hoch 4 ist " << pow(5, 4) << endl;

		cout << "Die Wurzel aus 2 hoch 16 ist " << sqrt(pow(2, 16)) << endl;

		cout << "Das Ergebnis von e hoch 2.5 ist " << pow(e, 2.5) << endl;

		cout << "15 % modulo 3.5 sind " << fmod(15, 3.5) << endl;


		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung6();
}