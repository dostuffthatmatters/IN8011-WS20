/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

int get_string_length(char *string, int max_length) {
    int length = 0;
    for (int i=0; i<max_length; i++) {
        if (string[i] == '\0') {
            break;
        }
        length++;
    }
    return length;
}

/**
 * This function determines whether a given string is a palindrome or not
 *
 * @param string - char array
 * @param max_length - length of the memory block of the char array
 *
 * @return 1 (if the string is a palindrome) or 0 (otherwise)
 */
int is_palindrome(char *string, int max_length) {
    int length = get_string_length(string, max_length);

    for (int i=0; i<length/2; i++) {
        if (string[i] != string[length - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {

    char string_1[10] = "HelleH";
    char string_2[10] = "HeleH";
    char string_3[10] = "HelleeH";
    char string_4[10] = "Peter";
    char string_5[10] = "Petep";
    char string_6[10] = "AtabatA";
    char string_7[10] = "AtaatA";

    printf("Is \"%s\" a palindrome: %d\n", string_1, is_palindrome(string_1, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_2, is_palindrome(string_2, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_3, is_palindrome(string_3, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_4, is_palindrome(string_4, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_5, is_palindrome(string_5, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_6, is_palindrome(string_6, 10));
    printf("Is \"%s\" a palindrome: %d\n", string_7, is_palindrome(string_7, 10));
    return 0;
}
