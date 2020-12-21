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
    short z = 10;

    short *pointer_z = &z;
    int *pointer_a = &a;
    int *pointer_b = &b;
    int *pointer_c = &c;
    printf("The address of a is %p\n", pointer_a);
    printf("The address of b is %p\n", pointer_b);
    printf("The address of c is %p\n", pointer_c);
    printf("The address of z is %p\n", pointer_z);

    return 0;
}
