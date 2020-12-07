/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 05
************************************************************************************/


#include <stdio.h>
#include <math.h>

struct rectangle {
    double length;
    double width;
};

struct triangle {
    double hypotenuse;
    double height;
};

struct circle {
    double radius;
};

struct shape {
    union {
        struct rectangle rectangle;
        struct triangle triangle;
        struct circle circle;
    } object;
    enum {
        RECTANGLE,
        TRIANGLE,
        CIRCLE
    } type;
};


double shape_area(struct shape shape) {
    if (shape.type == RECTANGLE) {
        return shape.object.rectangle.length * shape.object.rectangle.width;
    } else if (shape.type == TRIANGLE) {
        return 0.5 * shape.object.triangle.height * shape.object.triangle.hypotenuse;
    } else {
        return M_PI * pow(shape.object.circle.radius, 2);
    }
}


int main() {
    struct rectangle rectangle_1 = {2, 4};
    struct shape shape_1;
    shape_1.object.rectangle = rectangle_1;
    shape_1.type = RECTANGLE;

    struct triangle triangle_1 = {2, 4};
    struct shape shape_2;
    shape_2.object.triangle = triangle_1;
    shape_2.type = TRIANGLE;

    struct circle circle_1 = {2};
    struct shape shape_3;
    shape_3.object.circle = circle_1;
    shape_3.type = CIRCLE;

    struct shape shape_list[3] = {shape_1, shape_2, shape_3};

    for (int i=0; i<3; i++) {
        printf("\nThe area of shape %d is %f.", i+1, shape_area(shape_list[i]));
    }

    return 0;
}
