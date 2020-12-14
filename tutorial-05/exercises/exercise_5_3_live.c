
#include <stdio.h>
#include <math.h>

struct rectangle {
    double width;
    double height;
};

struct triangle {
    double height;
    double hypotenuses;
};

struct circle {
    double radius;
};

double calc_rectangle_area(struct rectangle r) {
    return r.width * r.height;
}

double calc_triangle_area(struct triangle t) {
    return 0.5 * t.height * t.hypotenuses;
}

double calc_circle_area(struct circle c) {
    return M_PI * c.radius * c.radius;
}

enum shape_type {
    RECTANGLE,
    TRIANGLE,
    CIRCLE
};

union shape_store {
    struct rectangle rect;
    struct triangle tri;
    struct circle circ;
};

struct shape {
   enum shape_type type;
   union shape_store shape;
};

double calc_shape_area(struct shape s) {
    if (s.type == RECTANGLE) {
        return calc_rectangle_area(s.shape.rect);
    } else if (s.type == TRIANGLE) {
        return calc_triangle_area(s.shape.tri);
    } else {
        return calc_circle_area(s.shape.circ);
    }
}

int main() {

    struct rectangle r1 = {3, 4};

    struct shape s1;
    s1.type = RECTANGLE;
    s1.shape.rect = r1;

    struct shape s2 = {
        .type = CIRCLE,
        .shape.circ = {3},
    };

    printf("Hello, World! %lf", calc_shape_area(s1));
    printf("Hello, World! %lf\n", calc_shape_area(s2));
}
