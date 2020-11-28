/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int power(int n, int m) {
    int result = n;
    for (int i = 1; i < m; i++) {
        result = result * n;
    }
    return result;
    printf("result is %d\n", result);
}

int main() {
    int my_number = power(3, 4);
    printf("my_number is %d", my_number);
    return 0;
}