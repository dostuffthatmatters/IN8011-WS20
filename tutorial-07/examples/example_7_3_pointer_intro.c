/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *pointer_a = &a;
    int *pointer_b = &b;
    int *pointer_c = &c;

    printf("\nThe address of a is %p", pointer_a);
    printf("\nThe address of b is %p", pointer_b);
    printf("\nThe address of c is %p", pointer_c);

    return 0;
}
