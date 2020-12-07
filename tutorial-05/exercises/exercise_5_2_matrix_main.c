/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>
#include "exercise_5_2_a_symmetric.c"
#include "exercise_5_2_b_skew_symmetric.c"

int main() {

    int matrix_1[3][3] = {
            {-1, 0, -3},
            {0,  6, 1},
            {3,  -1, -200}
    };

    int matrix_2[3][3] = {
            {0, 0, 0},
            {0,  0, 0},
            {0,  0, 0}
    };

    int matrix_3[3][3] = {
            {0, 14, 0},
            {-14,  0, 1},
            {0,  -1, 0}
    };

    printf("\n\nMatrix 1:\n");
    printf("Symmetric: %d\n", is_symmetric(3, 3, matrix_1));
    printf("Skew-Symmetric: %d\n", is_skew_symmetric(3, 3, matrix_1));

    printf("\n\nMatrix 2:\n");
    printf("Symmetric: %d\n", is_symmetric(3, 3, matrix_2));
    printf("Skew-Symmetric: %d\n", is_skew_symmetric(3, 3, matrix_2));

    printf("\n\nMatrix 3:\n");
    printf("Symmetric: %d\n", is_symmetric(3, 3, matrix_3));
    printf("Skew-Symmetric: %d\n", is_skew_symmetric(3, 3, matrix_3));

    return 0;
}
