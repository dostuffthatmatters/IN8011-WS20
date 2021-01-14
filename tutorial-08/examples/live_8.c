
#include <stdio.h>

// Typ-Definition
struct Point {
    float x;
    float y;
    float z;
};

int main() {

    struct Point a;
    a.x = 20;
    a.y = 30;
    a.z = 40;

    struct Point *pointer_to_struct = &a;
    printf("struct = %p\n", pointer_to_struct);
    printf("add x = %p\n", &(a.x));
    printf("add y = %p\n", &(a.y));
    printf("add z = %p", &(a.z));

}