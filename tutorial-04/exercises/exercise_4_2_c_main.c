/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>
#include "exercise_4_2_c_binary.c"

int main()
{
    char my_string_a[10] = "100111101";
    char my_string_b[10] = "1001a111b";
    
    if (is_binary(my_string_a, 10)) {
        printf("String A is binary.\n");
    } else {
        printf("String A is not binary.\n");
    }

    if (is_binary(my_string_b, 10)) {
        printf("String B is binary.\n");
    } else {
        printf("String B is not binary.\n");
    }

    return 0;
}
