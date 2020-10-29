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
    char input_a[8];
    char input_b[8] = {'\0'};

    print_char_array(input_a, 8);
    print_char_array(input_b, 8);

    return 0;
}
