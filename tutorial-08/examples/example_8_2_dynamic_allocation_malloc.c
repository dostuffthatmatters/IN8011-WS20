/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {

    char input_array[8] = {0};

    printf("Enter a number: ");
    scanf("%7s", input_array);

    int input_number = atoi(input_array);
    printf("You've entered: %d (\"%s\").\n\n", input_number, input_array);

    int *squares = malloc(sizeof(int) * input_number);

    // Print the array content
    for (int i=0; i<input_number; i++) {
        printf("%2d (index) -> %4d (value)\n", i, squares[i]);
    }
    printf("\n\n");

    for (int i=0; i<input_number; i++) {
        squares[i] = (i+1)*(i+1);
    }

    // Print the array content
    for (int i=0; i<input_number; i++) {
        printf("%2d (index) -> %4d (value)\n", i, squares[i]);
    }

    // Do not forget this!
    free(squares);

    return 0;
}