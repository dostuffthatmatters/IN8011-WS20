/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int main() {
    int arr[100];

    for (int i = 0; i < 100; i++) {
        // Initializing each element
        arr[i] = i + 1;
    }

    for (int i = 0; i < 100; i++) {
        // Printing each element
        printf("\nIndex %d -> Value %d", i, arr[i]);
    }

    return 0;
}
