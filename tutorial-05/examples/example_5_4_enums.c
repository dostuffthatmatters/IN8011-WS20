/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

enum color {
    RED,
    YELLOW,
    GREEN,
};

int main() {

    // 1 = red
    // 2 = yellow
    // 3 = green

    enum color traffic_light = RED;

    printf("\nTL1: ");
    if (traffic_light == RED) {
        printf("Do not drive!");
    } else if (traffic_light == YELLOW) {
        printf("Maybe?!");
    } else {
        printf("Go for it!");
    }

    enum color state_2 = YELLOW;

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
