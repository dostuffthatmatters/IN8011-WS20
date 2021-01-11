/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>

int main() {

    char string[64] = {0};
    printf("Your string (max. 63 letters/signs):\n");
    scanf("%63s", string);
    // No flush needed because wo don't use scanf anymore.

    char open_clips = 0;
    char correct = 1;

    for (int i = 0; i < 63; i++){
        open_clips += (string[i] == '(') ? 1 : 0;
        open_clips -= (string[i] == ')') ? 1 : 0;

        // The string is not correct if there are closing parentheses
        // ahead of their respective opening parentheses
        correct = correct && (open_clips >= 0);
    }

    // The string is not correct if there are still open parentheses
    correct = correct && (open_clips == 0);

    if (correct) {
        printf("\nThe parentheses placement is correct.\n");
    } else {
        printf("\nThe parentheses placement is false.\n");
    }

    return 0;
}
