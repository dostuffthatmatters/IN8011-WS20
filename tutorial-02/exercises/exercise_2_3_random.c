/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i=0; i<20; i++) {
        int my_random = rand() % 42;
        printf("%d\n", my_random);
    }
}
