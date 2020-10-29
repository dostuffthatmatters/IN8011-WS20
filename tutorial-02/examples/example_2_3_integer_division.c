/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>

int main() {
    int a = 11;
    int b = 3;
    float c = a/b;
    printf("\n%f\n", c);

    int d = 11;
    float e = 3;  // Same as 'float e = 3.0;'
    float f = d/e;
    printf("%f\n", f);

    float g = 11;  // Same as 'float g = 11.0;'
    int h = 3;
    float i = g/h;
    printf("%f\n", i);

    return 0;
}