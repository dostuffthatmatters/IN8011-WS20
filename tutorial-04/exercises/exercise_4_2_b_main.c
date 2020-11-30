/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>
#include "exercise_4_2_b_prime.c"


int main() {
    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d is a prime.\n", i);
        } else {
            printf("%d is a not prime.\n", i);
        }
    }
    return 0;
}
