/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

int is_element_in_array(int *array, int length, int element) {
    for (int i=0; i<length; i++) {
        if (array[i] == element) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,800,9,10};

    printf("7 in a: %d\n", is_element_in_array(a, 10, 7));
    printf("8 in a: %d\n", is_element_in_array(a, 10, 8));
    printf("800 in a: %d\n", is_element_in_array(a, 10, 800));
    return 0;
}
