/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 03
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[8] = {'\0'};

    printf("\nPlease enter a String: ");
    scanf("%7s", input);

    int number = atoi(input);

    printf("Your String is: \"%s\"\n", input);
    printf("Your number is: %d\n\n", number);
    return 0;
}
