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


struct shape init_rectangle(double length, double width) {
    struct rectangle new_rectangle = {length, width};
    struct shape new_shape;
    new_shape.object.rectangle = new_rectangle;
    new_shape.type = RECTANGLE;
    return new_shape;
}

struct shape init_triangle(double hypotenuse, double height) {
    struct triangle new_triangle = {hypotenuse, height};
    struct shape new_shape;
    new_shape.object.triangle = new_triangle;
    new_shape.type = TRIANGLE;
    return new_shape;
}

struct shape init_circle(double radius) {
    struct circle new_circle = {radius};
    struct shape new_shape;
    new_shape.object.circle = new_circle;
    new_shape.type = CIRCLE;
    return new_shape;
}

int main() {
    // You can store the shapes in a variable

    struct shape shape_1 = init_rectangle(2, 4);
    struct shape shape_2 = init_triangle(2, 4);
    struct shape shape_3 = init_circle(2);

    struct shape shape_list_1[3] = {shape_1, shape_2, shape_3};


    // Our you can store them directly in a list
    struct shape shape_list_2[3] = {
            init_rectangle(2, 4),
            init_triangle(2, 4),
            init_circle(2)
    };

    printf("\nList 1:");
    for (int i = 0; i < 3; i++) {
        printf("\nThe area of shape %d is %f.", i + 1, shape_area(shape_list_1[i]));
    }

    printf("\n\nList 2:");
    for (int i = 0; i < 3; i++) {
        printf("\nThe area of shape %d is %f.", i + 1, shape_area(shape_list_2[i]));
    }

    return 0;
}
