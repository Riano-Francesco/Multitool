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

        //cin.clear();  // Ausgabespeicher löschen
        //fflush(stdin); // Eingabespeicher löschen -- Macht gerne Ärger
       
        cin.getline(a, 80);
        cout << "Sie gaben \"" << a << "\" ein." << endl;
        // \"" Escape Character auf dem in der Ausgabe das festgestzte Zeichen (") folgt
        // "\" nach der Eingabe schließt es wieder mit dem Zeichen

        // \0 ist die Endekennung, bsp: arr[10] -> arr[9] = '\0'; MUSS als letztes Feld sein.


        cout << endl;
        abbruch = wiederholung();
        system("CLS");
    } while (abbruch);

    uebung9();
}

// char [7] = "String"; || char [] = "String";
// strcpy (ziel, quelle); -> strcpy (a, "name"); Zum Inhalt aus Quelle in das Ziel

//char x[] = { 'H','a','l','l','o','\0' };
//int a = 0;
//
//while (x[a])
//cout << x[a++];

