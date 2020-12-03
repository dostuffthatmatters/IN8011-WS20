/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

#include <stdio.h>

void print_tree(int lines) {
    printf("\n");

    for (int line = 0; line < lines; line++) {

        int number_of_spaces = lines - line - 1;
        int number_of_stars = line * 2 + 1;

        for (int i = 0; i < number_of_spaces; i++) {
            printf(" ");
        }

        for (int star = 0; star < number_of_stars; star++) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 0; i < (lines-1); i++) {
        printf(" ");
    }
    printf("*");

    printf("\n");
}
