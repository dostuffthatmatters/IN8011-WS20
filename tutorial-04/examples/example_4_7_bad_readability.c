/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>
#include <math.h>

int my_func(int a) {
int c = 0;
while (a > 0) {
int b = (a % 10);
c += b;
a -= b;
a /= 10;
} return c;
}

int main() {
int a = 12965; int b = my_func(a);
printf("%d\n", b); return 0;}