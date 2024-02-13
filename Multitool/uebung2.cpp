#include <iostream>
#include <windows.h>
#include <iomanip>


#include "func.h"		//Headerfile selbst erstellt

using namespace std;

void uebung2()
{

	int auswahl;


	cout << "Übungen vom 13.02.24" << endl << endl;

	cout << "   +---+----------------------+" << endl;
	cout << "   | 1 | Würfeln              |" << endl;
	cout << "   +---+----------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		dice();
		system("CLS");
		break;



	case 0:
		cout << "Programm wird beendet." << endl;
		Sleep(1000);
		break;

	case 99:
		system("CLS");
		menu();
		Sleep(1000);
		break;

	default:
		cout << "Ungültige Auswahl! Bitte versuchen sie es erneut." << endl;
		break;

	}

}