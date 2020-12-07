/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

void print_int_array(int *array, int max) {
    printf("[");
    for (int i=0; i<(max-1); i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[max-1]);
}

// A fixed length of 10 is stated!
void reverse_array(int *array) {
    int reversed_array[10] = {0};

    for (int i=0; i<10; i++) {
        reversed_array[10 - i - 1] = array[i];
    }

    for (int i=0; i<10; i++) {
        array[i] = reversed_array[i];
    }
}

int main() {

    int a[10] = {1,2,3,4,5,6,7,800,9,10};

    print_int_array(a, 10);

    // Careful: The array a will be modified even though
    // it is only manipulated from inside the function!
    reverse_array(a);

    print_int_array(a, 10);

    return 0;
}
