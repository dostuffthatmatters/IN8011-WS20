/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 06
************************************************************************************/

#include <stdio.h>
#include "example_6_5_static_global_a.h"

static int LOOP_COUNT = 10;
// Compiling does not work since PUBLIC_N
// is declared twice
int PUBLIC_N = 43;

int main() {
    my_func();
    printf("LC=%d, PN=%d", LOOP_COUNT, PUBLIC_N);
    return 0;
}
