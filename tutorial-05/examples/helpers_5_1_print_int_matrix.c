/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

/**
 * This function determines how many characters will be
 * printed out at most when printing out the whole matrix
 *
 * @param rows - Number of rows of the passed matrix
 * @param columns - Number of columns of the passed matrix
 * @param matrix - Matrix with size (rows x columns)
 *
 * @return The max number of characters ot takes to print
 * out any number of the given matrix (negative number take
 * up one more character because of the negative sign).
 */
char longest_number_in_matrix(char rows, char columns, int matrix[rows][columns]) {
    int largest_positive_number = 0;
    int largest_negative_number = 0;

    for (int row=0; row<rows; row++) {
        for (int column=0; column<columns; column++) {
            if (matrix[row][column] < 0 && matrix[row][column] < largest_negative_number) {
                largest_negative_number = matrix[row][column];
            } else if (matrix[row][column] > 0 && matrix[row][column] > largest_positive_number) {
                largest_positive_number = matrix[row][column];
            }
        }
    }

    largest_negative_number = - largest_negative_number;

    char negative_characters = 1;  // Minus sign is also a character
    for (int remainder=largest_negative_number; remainder>0; remainder=remainder/10) {
        negative_characters += 1;
    }

    char positive_characters = 0;
    for (int remainder=largest_positive_number; remainder>0; remainder=remainder/10) {
        positive_characters += 1;
    }

    if (positive_characters > negative_characters) {
        return positive_characters;
    } else {
        return negative_characters;
    }

}

/**
 * This function prints out a matrix with aligned numbers.
 *
 * Matrices to be printed out look like this ...
 * [
 *     1    2    3    4
 *     5    6    7    8
 *     9   10   11  142
 * ]
 * ... and not like this:
 * [
 *    1  2  3  4
 *    5  6  7  8
 *    9  10  11  142
 * ]
 *
 * @param rows - Number of rows of the passed matrix
 * @param columns - Number of columns of the passed matrix
 * @param matrix - Matrix with size (rows x columns)
 */
void print_int_matrix(char rows, char columns, int matrix[rows][columns]) {
    char longest_number = longest_number_in_matrix(rows, columns, matrix);

    printf("[\n");
    for (int row=0; row<rows; row++) {
        for (int column=0; column<columns; column++) {
            int number_of_spaces = -2;
            if (matrix[row][column] != 0) {
                int remainder = matrix[row][column];
                if (remainder < 0) {
                    number_of_spaces += 1;
                    remainder = -remainder;
                }
                for (; remainder > 0; remainder = remainder / 10) {
                    number_of_spaces += 1;
                }
            } else {
                number_of_spaces += 1;
            }
            number_of_spaces = longest_number - number_of_spaces;
            for (int space=0; space<number_of_spaces; space++) {
                printf(" ");
            }
            printf("%d", matrix[row][column]);
        }
        printf("\n");
    }
    printf("]");
}
