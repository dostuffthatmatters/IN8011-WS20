/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 03
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

// You can simply reuse this function
void my_flush(void) {
    char c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main() {
    char input_a[16] = {0};
    char input_b[16] = {0};

    int a = 0;

    while (a < 2) {
        printf("\nPlease enter number A: ");
        scanf("%15s", input_a);
        my_flush();

        if ((input_a[0] == 'q') || (input_a[0] == 'Q')) {
            return 0;
        }

        a = atoi(input_a);

        if (a < 2) {
            printf("A has to be at least 2. Try again!\n");
        }
    }

    int b = 0;

    while (b < 2 || a == b) {
        printf("Please enter number B: ");
        scanf("%15s", input_b);
        my_flush();

        if ((input_b[0] == 'q') || (input_b[0] == 'Q')) {
            return 0;
        }

        b = atoi(input_b);

        if (b < 2) {
            printf("B has to be at least 2. Try again!\n");
        }
        if (b == a) {
            printf("B cannot be equal to A. Try again!\n");
        }
    }

    printf("The largest common divisor of %d and %d is ", a, b);

    for (int divisor = a * b; divisor >= 1; divisor--) {
        if ((a % divisor == 0) && (b % divisor == 0)) {
            printf("%d\n", divisor);
            return 0;  // return statement of main finishes the whole program
        }
    }


}
