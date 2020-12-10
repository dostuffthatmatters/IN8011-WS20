/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include "helpers_5_1_print_int_matrix.c"

/**
 * This function determines whether a given matrix is diagonal or not
 *
 * @param rows - Number of rows of the passed matrix
 * @param columns - Number of columns of the passed matrix
 * @param matrix - Matrix with size (rows x columns)
 *
 * @return 1 (if the given matrix is diagonal) or 0 (otherwise)
 */
int is_diagonal(int row_count, int column_count, int matrix[row_count][column_count]) {
    if (row_count != column_count) {
        // Matrices that do not have the same number
        // of rows and columns can't be diagonal
        return 0;
    }

    for (int row=0; row<row_count; row++) {

        for (int column=0; column<column_count; column++) {



            if (row != column) {
                if (matrix[row][column] != 0) {
                    // Non-Zero element somewhere else than on the diagonal
                    return 0;
                }
            }
        }
    }

    // Return test cases only if all elements
    // besides the ones on the diagonal are zero
    return 1;
}

/**
 * This function initializes two matrices, tests whether
 * they are diagonal and prints out the results
 *
 * @return Exit Code - 0 (if successfully executed) or 1 (otherwise)
 */
int main() {

    int matrix_1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int matrix_2[3][3] = {
        {-1,  0,    0},
        { 0,  6,    0},
        { 0,  0, -200}
    };

    int res1 = is_diagonal(3, 4, matrix_1);
    if (res1 == 1) {
        printf("\nMatrix 1 is diagonal.");
    } else {
        printf("\nMatrix 1 is NOT diagonal.");
    }

    printf("\n\n");

    if (is_diagonal(3, 3, matrix_2)) {
        printf("\nMatrix 2 is diagonal.");
    } else {
        printf("\nMatrix 2 is NOT diagonal.");
    }

    return 0;
}
