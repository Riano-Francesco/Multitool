#include <iostream>
#include <windows.h>
#include <iomanip>


#include "func.h"		//Headerfile selbst erstellt

using namespace std;

void uebung1()
{

	int auswahl;


	cout << "Übungen vom 12.02.24" << endl << endl;

	cout << "   +---+----------------------+" << endl;
	cout << "   | 1 | Würfeln              |" << endl;
	cout << "   | 2 | Hello World!         |" << endl;
	cout << "   | 3 | Einfache Ausgabe     |" << endl;
	cout << "   | 4 | 2 Werte ausgeben     |" << endl;
	cout << "   | 5 | Spaltenbreite        |" << endl;
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

	case 2:
		system("CLS");
		hello();
		system("CLS");
		break;

	case 3:
		system("CLS");
		Eausgabe();
		system("CLS");
		break;

	case 4:
		system("CLS");
		werte2();
		system("CLS");
		break;

	case 5:
		system("CLS");
		SpaltenBreite();
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

void uebung2()
{

	int auswahl;


	cout << "Übungen vom 13.02.24" << endl << endl;

	cout << "   +---+----------------------------------+" << endl;
	cout << "   | 1 | Void Funktion                    |" << endl;
	cout << "   | 2 | Unterfunktion                    |" << endl;
	cout << "   | 3 | Summe durch Unterprogramm        |" << endl;
	cout << "   | 4 | Fläche Länge x Breite            |" << endl;
	cout << "   +---+----------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		voids();
		system("CLS");
		break;

	case 2:
		system("CLS");
		UnterFunk();
		system("CLS");
		break;

	case 3:
		system("CLS");
		ifA1();
		system("CLS");
		break;

	case 4:
		system("CLS");
		flaeche();
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