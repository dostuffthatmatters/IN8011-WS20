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

    while (1) {
        char input[16] = {'\0'};

        printf("\nPlease enter number: ");
        scanf("%15s", input);
        my_flush();

        int number = atoi(input);

        if ((input[0] == 'q') || (input[0] == 'Q')) {
            // Exiting the whole program
            return 0;
        }

        if (number < 2) {
            printf("%d is not a valid input. Number must be at least 2. Try again!\n", number);
            continue;
        }

        int is_prime = 1;

        for (int divisor = 2; divisor <= number; divisor++) {

            if ((number % divisor == 0) && (divisor < number)) {
                if (is_prime) {
                    // Only execute if a valid divisor < number is found
                    printf("%d is not a prime (divisible by %d", number, divisor);
                    is_prime = 0;
                    continue;
                } else {
                    printf(", %d", divisor);
                    continue;
                }
            }

            if ((divisor == number) && is_prime) {
                // Only execute of the number is a prime
                printf("%d is a prime.\n", number);
            }
        }

        if (!is_prime) {
            printf(").\n");
        }

    }

}
