/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>

int main() {
    int my_array[10] = {0,1,4,9};

    printf("ADDRESS of the 1st element = %p\n", &(my_array[0]));
    printf("ADDRESS of the 1st element = %p\n\n", my_array);

    printf("ADDRESS of the 2nd element = %p\n", &(my_array[1]));
    printf("ADDRESS of the 2nd element = %p\n\n", my_array + 1);

    printf("VALUE of the 3rd element = %d\n", my_array[2]);
    printf("VALUE of the 3rd element = %d\n", *(my_array + 2));

    return 0;
}
