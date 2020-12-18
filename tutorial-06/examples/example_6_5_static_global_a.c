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
int PUBLIC_N = 32;

void my_func() {
    printf("PN=%d", PUBLIC_N);
    for (int i=0; i<LOOP_COUNT; i++) {
        printf("Loop %d\n", i+1);
    }
}
