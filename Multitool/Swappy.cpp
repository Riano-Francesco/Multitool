#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
#include <cctype>


#include "func.h"

using namespace std;

void swappy(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
