#include <iostream>
#include <windows.h>    // für Sleep(1000)

#include "func.h"

using namespace std;

int quadro(int a) {
	int sum;
	sum = a * a;
	return quadrat(sum);
}