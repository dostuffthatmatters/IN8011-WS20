/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>

int main() {
    int a = 11;
    int b = 3;
    int c = a % b;  // = 2

    // Use '%%' to print a percent sign
    printf("\n%d %% %d = %d\n", a, b, c);

    return 0;
}