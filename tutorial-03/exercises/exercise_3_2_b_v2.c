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

int main () {
    char input_a[100] = {0};
    char input_b[100] = {0};

    printf("\nPlease enter number A: ");
    scanf("%99s", input_a);
    my_flush();

    printf("Please enter number B: ");
    scanf("%99s", input_b);
    my_flush();

    int a = atoi(input_a);
    int b = atoi(input_b);

    printf("The prime numbers between %d and %d (both included) are:", a, b);

    for (int dividend=a; dividend<=b; dividend++) {
        int is_prime = 1;

        for (int divisor=2; divisor<dividend; divisor++) {
            if (dividend % divisor == 0) {
                is_prime = 0;
            }
        }

        if (is_prime) {
            printf("\n%d", dividend);
        }
    }






    printf("\n");

}
