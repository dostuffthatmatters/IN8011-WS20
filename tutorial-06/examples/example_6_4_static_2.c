/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 06
************************************************************************************/

#include <stdio.h>

void my_func() {
    static int n_calls = 0;
    n_calls += 1;
    printf("This function has been called %d times.\n", n_calls);
}

int main() {

    for (int i=0; i<10; i++) {
        my_func();
    }
    return 0;
}
