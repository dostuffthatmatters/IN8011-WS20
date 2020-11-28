/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>

struct point {
    float x;
    float y;
    float z;
};

void print_point_array(struct point *point_array, int length) {
    for (int i=0; i<length; i++) {
        printf(
            "\nPoint a [x, y, z]: [%.1f, %.1f, %.1f]",
            point_array[i].x, point_array[i].y, point_array[i].z
        );
    }
    printf("\n");
}

int main() {
    struct point point_1 = {12.0, 8.5, 0.2};
    struct point point_2 = {12.1, 7.5, 0.4};
    struct point point_3 = {12.2, 6.5, 0.6};

    struct point all_points_1[5];  // Not initializing all elements to 0
    struct point all_points_2[5] = {};  // Initializing all elements to 0
    struct point all_points_3[5] = {point_1, point_2, point_3};

    print_point_array(all_points_1, 5);
    print_point_array(all_points_2, 5);
    print_point_array(all_points_3, 5);

    return 0;
}
