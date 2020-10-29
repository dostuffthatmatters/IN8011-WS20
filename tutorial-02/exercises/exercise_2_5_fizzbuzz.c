/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>

int main() {
    for (int i=1; i<=100; i++) {
        if (i%3 == 0) {
            printf("Fizz");
        }
        if (i%5 == 0) {
            printf("Buzz");
        } else if (i%3 != 0) {
            printf("%d", i);
        }
        printf("\n");
    }
}
