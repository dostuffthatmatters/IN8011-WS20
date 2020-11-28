/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

void print_int_array(int *array, int max)
{
    printf("\nPrinting array with length %d", max);
    for (int i = 0; i < max; i++)
    {
        printf("\nIndex %d -> Value %d", i, array[i]);
    }
    printf("\n");
}

int main()
{
    int my_array_1[10];
    int my_array_2[10] = {0};

    int my_array_3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int my_array_4[10] = {1, 2, 3};

    print_int_array(my_array_1, 10);
    print_int_array(my_array_2, 10);
    print_int_array(my_array_3, 10);
    print_int_array(my_array_4, 10);

    return 0;
}
