/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 02
******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    bool b = false;
    bool c = true;

    // %d will be replaced by (a && b)
    printf("%d\n", a && b);
    printf("%d\n\n", a && c);

    // If you want to get extra fancy
    printf("%s\n", (a && b) ? "true" : "false");
    printf("%s\n", (a && c) ? "true" : "false");
}
