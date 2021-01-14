
#include <stdio.h>
#include <stdlib.h>

// Typ-Definition
struct Point {
    float x;
    float y;
    float z;
};

// passing by value
struct Point inc_10(struct Point s) {
    s.x += 10;
    s.y += 10;
    s.z += 10;
    return s;
}

// passing by reference
void inc_10_r(struct Point *s) {
    s->x += 10;
    s->y += 10;
    s->z += 10;
}

int *init_dynamic(int a) {
    int *x = calloc(sizeof(int), 1);
    *x = a;
    return x;
}

/*
int *init_static(int a) {
    int x = a;
    return &x; // does not compile with this
}
*/

int main() {

    int *p = init_dynamic(20);

    // ...

    free(p);

    struct Point a;
    a.x = 20;
    a.y = 30;
    a.z = 40;

    struct Point *pointer_to_struct = &a;
    printf("struct = %p\n", pointer_to_struct);
    printf("add x = %p\n", &(a.x));
    printf("add y = %p\n", &(a.y));
    printf("add z = %p", &(a.z));

    printf("a.x = %f\n", a.x);
    a = inc_10(a);  // Please avoid that!!
    printf("a.x = %f\n", a.x);
    inc_10_r(&a);
    printf("a.x = %f\n", a.x);

}



