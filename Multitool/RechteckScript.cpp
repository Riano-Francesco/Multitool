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
//class CRectangle {
//public:
//	CRectangle(double w, double h); // Konstruktor
//	CRectangle(); // Konstruktor
//	~CRectangle();
//
//	void DisplayArea();
//	double m_Width = 0;
//	double m_Height = 0;
//};
//
//class CNewRectangle : public CRectangle {
//public:
//	CNewRectangle(double a, double b);
//	CNewRectangle();
//
//	void SetWidth(double a);
//	void SetHeight(double b);
//
//	~CNewRectangle();
//};
//
//// Konstruktor
//CNewRectangle::CNewRectangle(double w, double h) :CRectangle(w, h) {
//	m_Width = w;
//	m_Height = h;
//	cout << "Konstruktor der abgeleiteten Klasse" << endl;
//}
//
//CNewRectangle::CNewRectangle()
//{
//}
//
//// Destruktor
//CNewRectangle::~CNewRectangle() {
//	cout << "Destruktor der abgeleiteten Klasse" << endl;
//}
//
//void CNewRectangle::SetWidth(double w) {
//	m_Width = w;
//}
//
//void CNewRectangle::SetHeight(double h) {
//	m_Height = h;
//}
//
//void speed() {
//    bool abbruch;
//
//    do {
//        system("chcp 1252"); system("cls");  // Ersteres das gleiche wie locale 
//
//		CNewRectangle Rechteck_A(10.0, 5.0);
//		CNewRectangle Rechteck_B;
//
//		Rechteck_A.DisplayArea();
//
//		Rechteck_A.SetWidth(100);
//		Rechteck_A.SetHeight(20);
//
//		Rechteck_B.SetWidth(20);
//		Rechteck_B.SetHeight(20);
//
//		Rechteck_A.DisplayArea();
//		Rechteck_B.DisplayArea();
//
//        cout << endl;
//        abbruch = wiederholung();
//        system("CLS");
//    } while (abbruch);
//
//    // uebung16();
//}
//
//CRectangle::CRectangle(double w, double h)
//{
//}
//
//CRectangle::CRectangle()
//{
//}
//
//CRectangle::~CRectangle()
//{
//}
//
//void CRectangle::DisplayArea()
//{
//	m_Width* m_Height;
//	cout << m_Width * m_Height << endl;
//}
