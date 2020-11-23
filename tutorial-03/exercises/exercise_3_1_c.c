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

    char input[16] = {0};

    printf("\nPlease enter a string: ");
    scanf("%15s", input);
    my_flush();

    int number = atoi(input);

    printf("2*number = %d\n", 2*number);
}
