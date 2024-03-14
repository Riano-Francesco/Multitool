#include <iostream>
#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <cstring>


#include "func.h"

using namespace std;

class CCircle {
public:
	CCircle(double r);			// Konstruktor
	void SetRadius(double r);
	double DisplayArea();
	~CCircle();					// Destruktor
	double CalculateArea();

private:
	double m_Radius;
	double m_Color;
};

CCircle::CCircle(double r) {
	m_Radius = r;
}

void CCircle::SetRadius(double r) {
	m_Radius = r;
}

CCircle::~CCircle() {

}

//double CCircle::DisplayArea() {
//	double fArea;
//	fArea = CalculateArea();
//	return fArea;
//}

double CCircle::CalculateArea() {
	double f;
	f = (double)(3.14 * m_Radius * m_Radius);
	return f;
}

void speed() {
	bool abbruch;

	do {
		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 

		double rad = 0;

		// Ein Objekt der Klasse CCircle mit einem Radius von 10 erzeugen
		cout << "Geben Sie einen Radius ein: ";
		cin >> rad;
		CCircle MyCircle(rad);
		cout << "Die Kreisfläche beträgt: " << MyCircle.CalculateArea();
		cout << "\nGeben Sie noch einen Radius ein: ";
		cin >> rad;
		MyCircle.SetRadius(rad);
		cout << "Die Kreisfläche beträgt jetzt: " << MyCircle.CalculateArea();


		// Die Kreisfläche anzeigen

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	// uebung16();
}

