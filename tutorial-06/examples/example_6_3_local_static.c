/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 06
************************************************************************************/

#include <stdio.h>

// This counter is accessible from within the whole file
static int counter = 27; // COUNTER_A = 27

void print_counter_a() {
    printf("\nCounter inside file (COUNTER_A): %d\n", counter);
}

void some_function() {
    // When test static is first executed counter will be
    // set to 10. This is the counter variable that is used
    // inside the testStatic function
    static int counter = 10; // COUNTER_D = 10

    // So what static does when used with local variables is:
    // It produces another variable that will - inside this
    // scope (here: testStatic) - be used instead of the previous
    // static global variable. BUT this new variable will have
    // the same lifetime as the variable it is "shadowing"

    printf("Counter inside test (COUNTER_D): %d\n\n", counter--);
}

int main() {
    static int counter = 0; // COUNTER_B = 0

    print_counter_a();
    printf("Counter inside main (COUNTER_B): %d\n", counter);

    // for (COUNTER_B = 0; COUNTER_B < 10; ++COUNTER_B)
    for (counter = 0; counter < 10; ++counter) {

        static int counter = 10; // COUNTER_C = 10
        printf("Counter inside loop (COUNTER_C): %d\n", counter++);

        some_function();
    }

    print_counter_a();
    printf("Counter inside main (COUNTER_B): %d\n", counter);

    return 0;
}
