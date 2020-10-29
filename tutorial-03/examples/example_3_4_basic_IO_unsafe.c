/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 03
************************************************************************************/


#include <stdio.h>

// You don't have to understand this function yet!
void print_char_array(char* char_array, int length) {
    printf("\n");
    for (int i=0; i<length; i++) {
        printf("\nIndex %d: %c", i, char_array[i]);
    }
    printf("\n\n");
}

int main() {
    char input_a[8] = {0};
    char input_b[8] = {0};

    printf("\nPlease enter a String: ");
    scanf("%7s", input_a);

    printf("Please enter another String: ");
    scanf("%7s", input_b);

    // This just prints the content of array a and b
    print_char_array(input_a, 8);
    print_char_array(input_b, 8);

    printf("Your String A is: %s\n\n", input_a);
    printf("Your String B is: %s\n\n", input_b);
    return 0;
}
