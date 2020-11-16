/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int count = 1;
    int higher = 0;
    int lower = 0;
    while (count <= 100)
    {
        int my_random = rand() % 42;
        if (my_random >= 21)
        {
            higher++;
            printf("Higher: %d\n", my_random);
        }
        else
        {
            lower++;
            printf("Lower: %d\n", my_random);
        }
        count = count + 1;
    }

    printf("\n------------------\n");
    printf("%3d numbers were lower than 21.\n", lower);
    printf("%3d numbers were greater equal 21.\n", higher);
}