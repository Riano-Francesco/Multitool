#include <iostream>
#include <locale>  // Passt UTF an Sprache des Systems an

#include "func.h"

using namespace std;



int main()
{

	locale::global(locale(""));  // f�r Umlaute

	menu();

	return 0;
}