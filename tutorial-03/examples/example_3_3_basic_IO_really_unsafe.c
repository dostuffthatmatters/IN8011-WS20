/******************************************************************************
* Author: Moritz Makowski
* Lecture: TUM - IN8011 - WS20
* Session: Tutorial 03
******************************************************************************/

#include <stdio.h>

// You don't have to understand this function yet!
void print_char_array(char *char_array, int length)
{
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("\nIndex %d: [char] \'%c\', [int] %d", i, char_array[i], char_array[i]);
    }
    printf("\n\n");
}

int main()
{
    char input_a[8] = {'\0'};

    // This just prints the contents of array a and b
    print_char_array(input_a, 8);

    printf("\nPlease enter a String: ");
    gets(input_a); // This function reads the users input and stores it in 'input_a'

    // This just prints the contents of array a
    print_char_array(input_a, 8);

    printf("Your String A is: %s\n\n", input_a);
    return 0;
}
