#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>

#include "func.h"



using namespace std;



void getLine() {
    bool abbruch;

    do {

        

        char a[81];

        cout << "Bitte geben Sie einen Text mit max. 80 Zeichen ein: " << endl;

        //cin.clear();  // Ausgabespeicher l�schen
        //fflush(stdin); // Eingabespeicher l�schen -- Macht gerne �rger
       
        cin.getline(a, 80);
        cout << "Sie gaben \"" << a << "\" ein." << endl;

        // \"" Escape Character auf dem in der Ausgabe das festgestzte Zeichen (") folgt
        // "\" nach der Eingabe schlie�t es wieder mit dem Zeichen

     


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung9();
}

// char [7] = "String"; || char [] = "String";
// strcpy (ziel, quelle); -> strcpy (a, "name"); Zum Inhalt aus Quelle in das Ziel

//char x[] = { 'H','a','l','l','o','\0' };   // \0 ist die Endekennung, bsp: arr[10] -> arr[9] = '\0'; MUSS als letztes Feld sein.
//int a = 0;
//
//while (x[a])
//cout << x[a++];

// char x[5] [10] -> Feld 1 = Wie viele Werte und Feld 2 = wie Gro� die Werte sein d�rfen