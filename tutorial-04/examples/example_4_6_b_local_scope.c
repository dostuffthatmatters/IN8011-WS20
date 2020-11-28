/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

int increment_4(int number)
{
    return number + 4;
}

int main()
{

    int number = 3;
    number = increment_4(number);

    printf("Outside: number is now %d\n", number);

    return 0;
}