/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>

void add_10(int *value) {
    *value += 10;
}

int main() {
    int my_value = 5;
    add_10(&my_value);
    printf("My value is %d\n", my_value);  // What do you think will be printed?

    return 0;
}

// Answer: 15 will be printed. In this example the same
// copying process as described in the last example takes
// place. However: We are passing the address of the variable
// to be modified. And the copy of an address still points to
// the same location in memory.
