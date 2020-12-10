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
    char color[10];
};

void print_point_array(struct point *point_array, int length) {
    for (int i=0; i<length; i++) {
        printf(
            "\nPoint a [x, y, z]: [%f, %f, %f, color=%s]",
            point_array[i].x, point_array[i].y, point_array[i].z, point_array[i].color
        );
    }
    printf("\n");
}

int main() {
    struct point point_1 = {
            .x = 12.0, .y=8.5, .z=0.2, .color="red"
    };
    struct point point_2 = {12.1, 7.5, 0.4, "blue"};
    struct point point_3 = {12.2, 6.5, 0.6, "green"};

    // struct point all_points_1[5];  // Not initializing all elements to 0
    // struct point all_points_2[5] = {};  // Initializing all elements to 0
    struct point all_points[5] = {point_1, point_2};

    int a = 5;
    int b[10] = {a};

    // print_point_array(all_points_1, 5);
    // print_point_array(all_points_2, 5);
    print_point_array(all_points, 5);

    return 0;
}
