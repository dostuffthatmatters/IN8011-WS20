/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>

void print_array(char *array, int length) {
    for (int i=0; i<length; i++) {
        printf("Address %p, Value %d\n", &(array[i]), array[i]);
    }
}

int main() {
    char my_array[5] = {0,1,4,9,16};
    print_array(my_array, 5);
    return 0;
}
