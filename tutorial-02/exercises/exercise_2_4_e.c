/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int count = 1;
    while(count <= 100) {
        int my_random = rand() % 42;
        if (my_random >= 21) {
            printf("Higher: %d\n", my_random);
        } else {
            printf("Lower: %d\n", my_random);
        }
        count++;
    }
}