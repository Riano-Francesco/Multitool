#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

// strcmp - stringcompare -> vergleicht zwischen werten
struct game {

	struct card {
		int wert;
		string symbol;
		string name;
	};

	struct player {
		game::card cards[2];
		char playername[50];
	};
};

enum name { Zwei = 0, Drei, Vier, Fuenf, Sechs, Sieben, Acht, Neun, Zehn, Bube, Dame, Koenig, Ass }; // Zählt automatisch einen hoch
enum symbol { Herz = 0, Karo, Pik, Kreuz };

void cards(game::card* card, string name[], string symbol[], int wert[]) {
	int count = 0;
	for (int i = symbol::Herz; i <= symbol::Kreuz; i++) {
		for (int j = name::Zwei; j <= name::Ass; j++) {

			card[count].symbol = symbol[i];
			card[count].name = name[j];

			if (name[j] == "Bube" || name[j] == "Dame" || name[j] == "Koenig") {
				card[count].wert = 10;
			} if (name[j] == "Ass") {
				card[count].wert = 11;
			}
			else {
				card[count].wert = wert[j];
			}
			count++;
		}
	}
}

void shuffle(game::card* deck) {
	game::card temp;
	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		int a = rand() % 52;
		int b = rand() % 52;
		temp = deck[a];
		deck[a] = deck[b];
		deck[b] = temp;
	}
}


void highercards() {
	bool abbruch;

	do {

		Sleep(500);

		string name[] = { "Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "Ass" };
		string symbol[] = { "Herz", "Karo", "Pik", "Kreuz" };
		int cardvalue[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11 };

		game::card deck[52];
		game::player first;
		game::player second;

		cout << "Name Player 1: ";
		cin >> first.playername;
		cout << "Name Player 2: ";
		cin >> second.playername;
		cout << endl;

		//cout << "Game start with: " << first.playername << " against " << second.playername << endl << endl;
		cout << "Shuffle cards............" << endl << endl;

		cards(deck, name, symbol, cardvalue);
		shuffle(deck);
		/*for (int i = 0; i < 52; i++) {
			cout << deck[i].name << " " << deck[i].symbol << " " << deck[i].wert << endl;
		}*/

		first.cards[0] = deck[0];  // erster Spieler bekommt karte 1 (index 0) pro Index kann nur eine Karte vorhanden sein - insgesamt 52
		second.cards[0] = deck[1]; // zweiter Spieler bekommt karte 1 (index 1)
		first.cards[1] = deck[2];  // erster Spieler bekommt karte 2 (index 2)
		second.cards[1] = deck[3]; // zweiter Spieler bekommt karte 2 (index 3)

		cout << first.playername << "'s first card:  " << first.cards[0].symbol << " - " << first.cards[0].wert << endl;
		cout << second.playername << "'s first card:  " << second.cards[0].symbol << " - " << second.cards[0].wert << endl;
		cout << first.playername << "'s second card:  " << first.cards[1].symbol << " - " << first.cards[1].wert << endl;
		cout << second.playername << "'s second card:  " << second.cards[1].symbol << " - " << second.cards[1].wert << endl;
		cout << endl;

		int firstscore = first.cards[0].wert + first.cards[1].wert;
		int secondscore = second.cards[0].wert + second.cards[1].wert;

		if (firstscore < secondscore) {
			cout << second.playername << " won this round with a score of " << secondscore << " !" << endl;
		}
		else {
			cout << first.playername << " won this round with a score of " << firstscore << " !" << endl;
		}

		

		cout << endl;
		abbruch = wiederholung();
		system("CLS");
	} while (abbruch);

	uebung12();
}




//struct game {
//
//	struct card {
//		int wert;
//		char symbol[10];
//		char name[10];
//	};
//
//	struct player {
//		game::card cards[2];
//		char playername[50];
//	};
//};
//
//enum name { Zwei = 0, Drei, Vier, Fuenf, Sechs, Sieben, Acht, Neun, Zehn, Bube, Dame, Koenig, Ass }; // Zählt automatisch einen hoch
//enum symbol { Herz = 0, Karo, Pik, Kreuz };
//
//void cards(game::card* card, char name[13][10], char symbol[4][6], int wert[]) {
//	int count = 0;
//	for (int i = symbol::Herz; i <= symbol::Kreuz; i++) {
//		for (int j = name::Zwei; j <= name::Ass; j++) {
//
//			strcpy_s(card[count].symbol, symbol[i]);
//			strcpy_s(card[count].name, name[j]);
//
//			if (name[j] == "Bube" || name[j] == "Dame" || name[j] == "Koenig") {
//				card[count].wert = 10;
//			} if (name[j] == "Ass") {
//				card[count].wert = 11;
//			}
//			else {
//				card[count].wert = wert[j];
//			}
//			count++;
//		}
//	}
//}
//
//void shuffle(game::card* deck) {
//	game::card temp;
//	srand(time(NULL));
//
//	for (int i = 0; i < 100; i++) {
//		int a = rand() % 52;
//		int b = rand() % 52;
//		temp = deck[a];
//		deck[a] = deck[b];
//		deck[b] = temp;
//	}
//}


//char name[13][10] = { "Zwei", "Drei", "Vier", "Fuenf", "Sechs", "Sieben", "Acht", "Neun", "Zehn", "Bube", "Dame", "Koenig", "Ass" };
//char symbol[4][6] = { "Herz", "Karo", "Pik", "Kreuz" };
//int cardvalue[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11 };
//
//game::card deck[52];
//game::player first;
//game::player second;
//
//cout << "Name Player 1: ";
//cin >> first.playername;
//cout << "Name Player 2: ";
//cin >> second.playername;
//cout << endl;
//
//cout << "Game start with: " << first.playername << " against " << second.playername << endl << endl;
//
//cards(deck, name, symbol, cardvalue);
//shuffle(deck);
///*for (int i = 0; i < 52; i++) {
//	cout << deck[i].name << " " << deck[i].symbol << " " << deck[i].wert << endl;
//}*/
//
//first.cards[0] = deck[0];  // erster Spieler bekommt karte 1 (index 0) pro Index kann nur eine Karte vorhanden sein - insgesamt 52
//second.cards[0] = deck[1]; // zweiter Spieler bekommt karte 1 (index 1)
//first.cards[1] = deck[2];  // erster Spieler bekommt karte 2 (index 2)
//second.cards[1] = deck[3]; // zweiter Spieler bekommt karte 2 (index 3)
//
//cout << first.playername << "'s first card:  " << first.cards[0].symbol << " - " << first.cards[0].wert << endl;
//cout << second.playername << "'s first card:  " << second.cards[0].symbol << " - " << second.cards[0].wert << endl;
//cout << first.playername << "'s second card:  " << first.cards[1].symbol << " - " << first.cards[1].wert << endl;
//cout << second.playername << "'s second card:  " << second.cards[1].symbol << " - " << second.cards[1].wert << endl;
//cout << endl;
//
//int firstscore = first.cards[0].wert + first.cards[1].wert;
//int secondscore = second.cards[0].wert + second.cards[1].wert;
//
//if (firstscore < secondscore) {
//	cout << second.playername << " won this round with a score of " << secondscore << " !" << endl;
//}
//else {
//	cout << first.playername << " won this round with a score of " << firstscore << " !" << endl;
//}