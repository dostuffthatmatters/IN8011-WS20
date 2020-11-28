/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

enum color {
    RED = 1,           //  1
    YELLOW,            //  2
    GREEN,             //  3
};

int main() {

    enum color state_1 = GREEN;
    enum color state_2 = YELLOW;

    printf("\nTL1: ");
    if (state_1 == RED) {
        printf("Do not drive!");
    } else if (state_1 == YELLOW) {
        printf("Maybe?!");
    } else {
        printf("Go for it!");
    }

    printf("\nTL2: ");
    switch (state_2) {
        case RED:
            printf("Do not drive!");
            break;
        case YELLOW:
            printf("Maybe?!");
            break;
        default:
            printf("Go for it!");
            break;
    }

    printf("\n");

    return 0;
}
