/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include "helpers_5_1_print_int_matrix.c"

/**
 * This function initializes a few matrices in different ways.
 *
 * @return Exit Code - 0 (if successfully executed) or 1 (otherwise)
 */
int main() {

    int matrix_1[10][10];

    int matrix_2[10][10] = {0};

    int matrix_3[10][10] = {
            {-1},
            {0, 6, 1}
    };

    int matrix_4[3][3] = {
            {-1,   0,    0},
            { 0,   6,    0},
            { 0,   0, -200}
    };

    printf("\n\nMatrix 1:\n");
    print_int_matrix(10, 10, matrix_1);

    printf("\n\nMatrix 2:\n");
    print_int_matrix(10, 10, matrix_2);

    printf("\n\nMatrix 3:\n");
    print_int_matrix(10, 10, matrix_3);

    printf("\n\nMatrix 4:\n");
    print_int_matrix(3, 3, matrix_4);

    return 0;
}
