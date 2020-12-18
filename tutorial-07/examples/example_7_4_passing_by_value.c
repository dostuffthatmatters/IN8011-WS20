/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>

void add_10(int value) {
    value += 10;
}

int main() {
    int my_value = 5;
    add_10(my_value);
    printf("My value is %d\n", my_value);  // What do you think will be printed?

    return 0;
}

// Answer:  5 will be printed. Because inside the function
// add_10 a local copy of the variable `value` has been
// created. Only that local copy will be incremented. The
// variable `my_value` inside the main function remains
// untouched.