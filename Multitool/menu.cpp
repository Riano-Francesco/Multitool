#include <iostream>
#include <windows.h>

#include "func.h"		//Headerfile selbst erstellt

using namespace std;

void menu()
{

	int auswahl;


	cout << "Welchen Tag wollen sie einsehen?" << endl << endl;

	cout << "   +---+-------------------+" << endl;
	cout << "   |___|____C++ Script_____|" << endl;
	cout << "   |   |                   |" << endl;
	cout << "   | 1 |     12.02.24      |" << endl;
	cout << "   | 2 |     13.02.24      |" << endl;
	cout << "   | 3 |     14.02.24      |" << endl;
	cout << "   | 4 |     15.02.24      |" << endl;
	cout << "   | 5 |     16.02.24      |" << endl;
	cout << "   | 6 |     19.02.24      |" << endl;
	cout << "   | 7 |     20.02.24      |" << endl;
	cout << "   | 8 |     21.02.24      |" << endl;
	cout << "   | 9 |     22.02.24      |" << endl;
	cout << "   |10 |     23.02.24      |" << endl;
	cout << "   |11 |     04.03.24      |" << endl;
	cout << "   |12 |     05.03.24      |" << endl;
	cout << "   |13 |     06.03.24      |" << endl;
	cout << "   |14 |     07.03.24      |" << endl;
	cout << "   |15 |     08.03.24      |" << endl;
	cout << "   |16 |     12.03.24      |" << endl;
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

	case 3:
		system("CLS");
		uebung3();
		system("CLS");
		break;

	case 4:
		system("CLS");
		uebung4();
		system("CLS");
		break;

	case 5:
		system("CLS");
		uebung5();
		system("CLS");
		break;

	case 6:
		system("CLS");
		uebung6();
		system("CLS");
		break;

	case 7:
		system("CLS");
		uebung7();
		system("CLS");
		break;	
	
	case 8:
		system("CLS");
		uebung8();
		system("CLS");
		break;

	case 9:
		system("CLS");
		uebung9();
		system("CLS");
		break;

	case 10:
		system("CLS");
		uebung10();
		system("CLS");
		break;

	case 11:
		system("CLS");
		uebung11();
		system("CLS");
		break;

	case 12:
		system("CLS");
		uebung12();
		system("CLS");
		break;

	case 13:
		system("CLS");
		uebung13();
		system("CLS");
		break;

	case 14:
		system("CLS");
		uebung14();
		system("CLS");
		break;

	case 15:
		system("CLS");
		uebung15();
		system("CLS");
		break;

	case 16:
		system("CLS");
		uebung16();
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