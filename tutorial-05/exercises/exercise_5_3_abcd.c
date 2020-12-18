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


double rectangle_area(struct rectangle r) {
    return r.length * r.width;
}

double triangle_area(struct triangle t) {
    return 0.5 * t.height * t.hypotenuse;
}

double circle_area(struct circle c) {
    return M_PI * c.radius * c.radius;
}

int main() {

    struct rectangle rectangle_1 = {2, 4};
    double area_1 = rectangle_area(rectangle_1);
    printf("Rectangle: %f\n", area_1);

    struct triangle triangle_1 = {2, 4};
    printf("Triangle: %f\n", triangle_area(triangle_1));

    struct circle circle_1 = {2};
    printf("Circle: %f\n", circle_area(circle_1));

    return 0;
}
