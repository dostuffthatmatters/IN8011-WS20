/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 06
************************************************************************************/


#include <stdio.h>
#include "my_vars.h"

int main() {

    // local_var is not accessible here
    // printf("local_var: %d\n", local_var);

    printf("local_var: %d\n", get_local_var());
    printf("global_var: %d\n\n", global_var);

    increment_local_var(5);
    increment_global_var(5);

    // local_var is not accessible here
    // printf("local_var: %d\n", local_var);

    printf("local_var: %d\n", get_local_var());
    printf("global_var: %d\n", global_var);

    return 0;
}