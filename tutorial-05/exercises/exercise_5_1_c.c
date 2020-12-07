/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

int get_list_total(int *array, int length) {
    int total = 0;
    for (int i=0; i<length; i++) {
        total += array[i];
    }
    return total;
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,800,9,10};

    printf("The total of a is %d.", get_list_total(a, 10));
    return 0;
}
