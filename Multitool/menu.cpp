#include <iostream>
#include <windows.h>

#include "func.h"		//Headerfile selbst erstellt

using namespace std;

void menu()
{

	int auswahl;


	cout << "Welchen Tag wollen sie einsehen?" << endl << endl;

	cout << "   +---+-------------------+" << endl;
	cout << "   | 1 | 12.02.24          |" << endl;
	cout << "   | 2 | 13.02.24          |" << endl;
	cout << "   +---+-------------------+" << endl;
	cout << endl;

	cout << "0 | Um die Anwendung zu beenden!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um zu den Übungen zu gelangen: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		uebung1();
		system("CLS");
		break;

	case 2:
		system("CLS");
		uebung2();
		system("CLS");
		break;

	case 0:
		cout << "Programm wird beendet." << endl;
		Sleep(1000);
		break;
	default:
		cout << "Ungültige Auswahl! Bitte versuchen sie es erneut." << endl;
		break;

	}

}