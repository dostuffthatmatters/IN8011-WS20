/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 02
******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 11;
    int b = 3;
    int c = a % b; // = 2

    // Use '%%' to print a percent sign
    printf("%d %% %d = %d\n", a, b, c);

    return 0;
}