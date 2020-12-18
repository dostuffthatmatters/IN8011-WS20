
#include <stdio.h>

void print_array(int *array, int length) {
    printf("[");
    for (int i=0; i<(length-1); i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[length-1]);
}

void map(int (*func)(int), int *array, int length) {
    for (int i=0; i<length; i++) {
        array[i] = func(array[i]);
    }
}

int times_2(int x) {
    return 2 * x;
}

int times_3(int x) {
    return 3 * x;
}

int main() {
    int my_array[10] = {1,2,3,4,5,6,7,8,9,10};
    print_array(my_array, 10);

    map(times_2, my_array, 10);
    print_array(my_array, 10);
    
    map(times_3, my_array, 10);
    print_array(my_array, 10);

    return 0;
}