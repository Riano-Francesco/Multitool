//#include <iostream>
//#include <windows.h> // ebenfalls für Zeichentabelle Nutzung
//#include <iomanip>
//#include <cmath>
//#include <cctype>
//#include <fstream>
//#include <ctime>
//#include <stdlib.h>
//#include <cstring>
//
//
//#include "func.h"
//
//using namespace std;
//
//class cRectangle
//{
//public:
//    cRectangle(double, double);
//    cRectangle();
//    ~cRectangle();
//    double displayArea(double, double);
//    double displayArea2();
//
//private:
//    double l = 0.0;
//    double b = 0.0;
//};
//
//
//cRectangle::cRectangle()
//{
//}
//cRectangle::cRectangle(double l, double b)
//{
//    this->b = b;
//    this->l = l;
//}
//cRectangle::~cRectangle()
//{
//}
//double cRectangle::displayArea(double l, double b)
//{
//    this->b;
//    this->l;
//    return b * l;
//}
//double cRectangle::displayArea2()
//{
//    return b * l;
//}
//
//void speed() {
//	bool abbruch;
//
//	do {
//		system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 
//
//        double width = 0;
//        double height = 0;
//        cout << "Groesse des Rechtecks - Breite: ";
//        cin >> width;
//        cout << "Laenge: ";
//        cin >> height;
//
//        cRectangle myRetangle(height, width);
//        myRetangle.displayArea2();
//        cout << "Die Flaeche betraegt: " << myRetangle.displayArea2() << endl;
//
//        cRectangle yourRetangle;
//        cout << yourRetangle.displayArea(4, 5) << endl;
//        cout << myRetangle.displayArea2();
//
//
//		// Die Kreisfläche anzeigen
//
//		cout << endl;
//		abbruch = wiederholung();
//		system("CLS");
//	} while (abbruch);
//
//	// uebung16();
//}
//
