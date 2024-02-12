#include <iostream>
#include <locale>  // Passt UTF an Sprache des Systems an

#include "func.h"

using namespace std;



int main()
{

	locale::global(locale(""));  // für Umlaute

	menu();

	return 0;
}