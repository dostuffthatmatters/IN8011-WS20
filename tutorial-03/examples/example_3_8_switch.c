/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 03
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {

    char input[3] = {'\0'};

    printf("\nPlease enter a String: ");
    scanf("%2s", input);

    int n = atoi(input);

    switch(n) {
        default:
            printf("n is something\n");
            break;
        case 1:
            printf("n is one\n");
            break;
        case 2:
            printf("n is two\n");
            break;
        case 3:
            printf("n is three\n");
            break;
    }

    return 0;
}
