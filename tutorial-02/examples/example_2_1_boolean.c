/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 02
************************************************************************************/


#include <stdio.h>
#include <stdbool.h>

int main() {
    bool a = true;
    bool b = false;
    bool c = true;

    // %d will be replaced by (a && b)
    printf("\n%d", a && b);
    printf("\n%d", a && c);

    printf("\n");

    // If you want to get extra fancy
    printf("\n%s", (a && b) ? "true" : "false");
    printf("\n%s", (a && c) ? "true" : "false");

    printf("\n");
}
