/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>

int main() {
    unsigned char a = 253;

    printf("\na=%d\n\n", a);

    unsigned char a1 = a+1;
    unsigned char a2 = a+2;
    unsigned char a3 = a+3;
    unsigned char a4 = a+4;
    unsigned char a5 = a+5;

    printf("a+1=%d\n", a1);
    printf("a+2=%d\n", a2);
    printf("a+3=%d\n", a3);
    printf("a+4=%d\n", a4);
    printf("a+5=%d\n\n", a5);

    // In a more elegant way
    for (char i=1; i < 6; i++) {
        unsigned char b = a + i;
        printf("a+%d=%d\n", i, b);
    }

    return 0;
}