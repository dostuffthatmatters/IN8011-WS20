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
        printf("\nIndex %d: %c", i, char_array[i]);
    }
    printf("\n\n");
}

// You don't have to understand this function!
// For windows people 'fflush(stdin);' instead of
// this function will do the same thing.
void my_flush(void)
{
    char c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    char input_a[16] = {'\0'};
    char input_b[8] = {'\0'};

    printf("\nPlease enter a String: ");
    scanf("%15s", input_a);
    my_flush();

    print_char_array(input_a, 8);
    print_char_array(input_b, 8);

    printf("Please enter another String: ");
    scanf("%7s", input_b);

    print_char_array(input_a, 8);
    print_char_array(input_b, 8);

    printf("Your String A is: %s\n\n", input_a);
    printf("Your String B is: %s\n\n", input_b);
    return 0;
}
