/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int main() {

    // This loop is actually pretty useless
    while (1) {
        int i = 5;
        i += 2;
        break;
    }

    printf("Outside: i is now %d\n", i);

    return 0;
}