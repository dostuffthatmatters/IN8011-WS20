/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>


int largest_element(int *array, int length) {

    int largest_element = 0;

    for (int i=0; i<length; i++) {
        if (array[i] > largest_element) {
            largest_element = array[i];
        }
    }

    return largest_element;
}

int main() {

    int a[10] = {1, 2, 3, 50, 2, 60};

    printf("The largest number in a is %d.", largest_element(a, 10));
    return 0;
}
