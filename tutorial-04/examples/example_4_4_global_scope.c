/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int counter = 0;

void a() {
    counter++;
}

void b() {
    counter++;
}

int main() {
    a();
    b();
    a();
    a();
    b();

    printf("Counter is now %d\n", counter);

    return 0;
}