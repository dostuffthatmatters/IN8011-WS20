/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>

int is_valid_string(char *s, int l) {

    char open_clips = 0;

    for (int i = 0; i < l; i++) {

        if (s[i] == '(') {
            open_clips += 1;
        }
        if (s[i] == ')') {
            open_clips -= 1;
        }

        // The string is not correct if there are closing parentheses
        // ahead of their respective opening parentheses
        if (open_clips < 0) {
            return 0;
        }
    }

    // The string is not correct if there are still open parentheses
    if (open_clips != 0) {
        return 0;
    }

    return 1;
}

int main() {

    char string[64] = {0};
    printf("Your string (max. 63 letters/signs):\n");
    scanf("%63s", string);
    // No flush needed because wo don't use scanf anymore.

    char correct = is_valid_string(string, 63);

    if (correct) {
        printf("\nThe parentheses placement is correct.\n");
    } else {
        printf("\nThe parentheses placement is false.\n");
    }

    return 0;
}
