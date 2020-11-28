/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

void increment_4(int number) {
    // A local copy of the variable `number` has been created.
    // Only that local copy will be incremented. The variable
    // `number` inside the main function remains untouched
    number = number + 4;
}

int main() {

    int number = 3;
    increment_4(number);

    printf("Outside: number is now %d\n", number);

    return 0;
}