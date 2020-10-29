/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 03
******************************************************************************/

#include <stdio.h>

int main()
{
    // Let's say we only want parameter a
    // to be between 0 and 10

    // Try to change "a" and see what happens
    int a = 9;

    if (a < 0)
    {
        // Exit Code 1 indicates that the
        // number you put in is too small
        return 1;
    }
    else if (a > 10)
    {
        // Exit Code 2 indicates that the
        // number you put in is too large
        return 2;
    }

    // If none of the previous returns has
    // "fired", the following code will be
    // executed
    printf("Program has executed successfully.\n");
    return 0;
}

/*
 *  On Mac/Linux you will see the Exit Code automatically
 *  On Windows you might have to type in `echo $`.
 */
