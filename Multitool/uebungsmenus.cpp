#include <iostream>
#include <windows.h>
#include <iomanip>


#include "func.h"		//Headerfile selbst erstellt

using namespace std;

void uebung1()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 12.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Würfeln                                 |" << endl;
	cout << "   | 2 | Hello World!                            |" << endl;
	cout << "   | 3 | Einfache Ausgabe                        |" << endl;
	cout << "   | 4 | 2 Werte ausgeben                        |" << endl;
	cout << "   | 5 | Spaltenbreite                           |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
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


	cout << "   +---+--------| Übungen vom 13.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Void Funktion                           |" << endl;
	cout << "   | 2 | Unterfunktion                           |" << endl;
	cout << "   | 3 | Summe durch Unterprogramm               |" << endl;
	cout << "   | 4 | Fläche Länge x Breite                   |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
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

void uebung3()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 14.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Ausgabe mit 3 Unterprogrammen           |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		HauptAusgabe();
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

void uebung4()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 15.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | IF Anweisung v   erschachtelt           |" << endl;
	cout << "   | 2 | Schaltjahrberechnung mit Bool           |" << endl;
	cout << "   | 3 | For Zählschleife                        |" << endl;
	cout << "   | 4 | Zählschleife Start & Endwert            |" << endl;
	cout << "   | 5 | Tannenbaum                              |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		verschachtelt();
		system("CLS");
		break;

	case 2:
		system("CLS");
		Schaltjahr();
		system("CLS");
		break;

	case 3:
		system("CLS");
		Zählschleife();
		system("CLS");
		break;

	case 4:
		system("CLS");
		Zählschleife();
		system("CLS");
		break;

	case 5:
		system("CLS");
		Tannenbaum();
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

void uebung5()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 16.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Pi Berechnung nach Leibnitz             |" << endl;
	cout << "   | 2 | Continue NUR! in einer Schleife         |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		Leibnitz();
		system("CLS");
		break;

	case 2:
		system("CLS");
		ContinueSchleife();
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

void uebung6()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 19.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Kneipenwahl + Berechnung                |" << endl;
	cout << "   | 2 | cmath Mathematische Funktionen          |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		Kneipenwahl();
		system("CLS");
		break;

	case 2:
		system("CLS");
		cmathFUNK();
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

void uebung7()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 20.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Ascii-Tabelle bis 256                   |" << endl;
	cout << "   | 2 | Eingabe mit Buchstabenprüfung           |" << endl;
	cout << "   | 3 | Array[10] mit eingabe und berechnung    |" << endl;
	cout << "   | 4 | Multidimensionales Array mit Sortierung |" << endl;
	cout << "   | 5 | Kürzeste Zeit und Weg Rettung Schwimmer |" << endl;
	cout << "   | 6 | Adress-Ermittlung                       |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		ascii();
		system("CLS");
		break;

	case 2:
		system("CLS");
		isAlpha();
		system("CLS");
		break;

	case 3:
		system("CLS");
		arr10();
		system("CLS");
		break;

	case 4:
		system("CLS");
		Multi();
		system("CLS");
		break;

	case 5:
		system("CLS");
		Strand();
		system("CLS");
		break;

	case 6:
		system("CLS");
		Adresswert();
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

void uebung8()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 21.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Wertetausch mit Pointer                 |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		PointerSwap();
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

void uebung9()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 22.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | getline String ausgabe mit Array        |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		getLine();
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

void uebung10()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 23.02.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Zahl als String umwandeln und ausgeben  |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		MoreStrings();
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

void uebung11()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 04.03.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Strukturdaten ausgeben                  |" << endl;
	cout << "   | 2 | Struktur mit Daten befüllen und ausgeben|" << endl;
	cout << "   | 3 | Struktur mit Union ausgegeben           |" << endl;
	cout << "   | 4 | Struktur mit Union Kombiniert           |" << endl;
	cout << "   | 5 | Aufzählung mit enum Woche und Monate    |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		firstStruct();
		system("CLS");
		break;

	case 2:
		system("CLS");
		EingabeStruct();
		system("CLS");
		break;

	case 3:
		system("CLS");
		UnionStruct();
		system("CLS");
		break;

	case 4:
		system("CLS");
		UnionStructKombi();
		system("CLS");
		break;

	case 5:
		system("CLS");
		enumWoche();
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

void uebung12()
{

	int auswahl;


	cout << "   +---+--------| Übungen vom 06.03.24  |--------+" << endl;

	cout << "   +---+-----------------------------------------+" << endl;
	cout << "   | 1 | Higher Cards PvP Game                   |" << endl;
	cout << "   +---+-----------------------------------------+" << endl;
	cout << endl;

	cout << "0  | Um die Anwendung zu beenden!" << endl << endl << endl;
	cout << "99 | Um zum Hauptmenü zu gelangen!" << endl << endl << endl;

	cout << "Geben sie die Zahl an, um das Programm zu starten: " << endl;

	cin >> auswahl;

	switch (auswahl)
	{
	case 1:
		system("CLS");
		highercards();
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