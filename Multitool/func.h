#ifndef FUNC_H
#define FUNC_H
#include <iostream>
#include <windows.h> // ebenfalls f�r Zeichentabelle Nutzung
#include <iomanip>
#include <cmath>
#include <cctype>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool wiederholung(); // bool gibt es nur 2 Werte : True oder False und 1 oder 0

// menu.cpp
void menu();

// 12.02.24
void uebung1();
void dice();
void hello();
void Eausgabe();
void werte2();
void SpaltenBreite();

// 13.02.24
void uebung2();
void voids();
void UnterFunk();
void flaeche();
// If-�bung
void ifA1();
int ifA2(int, int);

// 14.02.24
void uebung3();
// 2 Unterprogramme
void HauptAusgabe();
int quadrat(int);
int summe(int, int);
int quadro(int);

// 15.02.24
void uebung4();
void verschachtelt();
void Schaltjahr();
bool isSchaltjahr(int);
void Z�hlschleife();
void StartEnde();
void Tannenbaum();

// 16.02.24
void uebung5();
void Leibnitz();
void ContinueSchleife();

// 19.02.24
void uebung6();
// Kneipenwahl
bool wahl(int);
void Kneipenwahl();
void kneipenfahrer(double, double);
void starter(double);
void cmathFUNK();

// 20.02.24
void uebung7();
void ascii();
void isAlpha();
void arr10();
void Multi();
void Strand();
void Adresswert();

// 21.02.24
void uebung8();
void PointerSwap();
void swappy(int*, int*);
// 22.02.24
void uebung9();
void getLine();

// 23.02.24
void uebung10();
void MoreStrings();

// 04.03.24
void uebung11();
void firstStruct();
void EingabeStruct();
void UnionStruct();
void UnionStructKombi();
void enumWoche();

// 05.03.24
void uebung12();
void highercards();

// 06.03.24
void uebung13();
void wahrfalsch();
void multiOhne();
void bitsi();
void deztobin();
void streams();

// 07.03.24
void uebung14();
void filecopy();
void randData();

// 08.03.24
void uebung15();
void filehand();

// 12.03.24
void uebung16();
void handleBin�r();
void speed();

// 15.03.24
void uebung17();
void adressverwaltung();
void logger();

class database {
public:
	void menu();
	void toGet();
	void choosefile();
	void save();
	void load();
	void show();
	int search(const string&);
	void remove();

private:
	vector < vector < string >> data; // Wird nur hier gesetzt und ist dann �berall als "data" verf�gbar
	string filename;
};

#endif