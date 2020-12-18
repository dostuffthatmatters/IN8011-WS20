
#include <stdio.h>

void print_array(int *array, int length) {
    printf("[");
    for (int i=0; i<(length-1); i++) {
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[length-1]);
}

void remove_by_index(int *array, int length, int index_to_be_removed) {
    for (int i=index_to_be_removed; i<(length-1); i++) {
        array[i] = array[i+1];
    }
    array[length-1] = 0;
}

void filter(int (*condition)(int), int *array, int length) {
    for (int i=0; i<length; i++) {
        if (array[i] != 0 && condition(array[i]) == 0) {
            remove_by_index(array, length, i);
            i--;
        }
    }
}

int is_even(int x) {
    return x % 2 == 0;
}

int is_odd(int x) {
    return x % 2 == 1;
}

int main() {
    int my_array_1[10] = {1,1,2,3,5,8,13,21,34,55};
    int my_array_2[10] = {1,1,2,3,5,8,13,21,34,55};

    // I will assume that a 0 inside the array means that
    // this spot is empty
    printf("Only keep the EVEN numbers:\n");
    print_array(my_array_1, 10);
    filter(is_even, my_array_1, 10);
    print_array(my_array_1, 10);
    
    printf("\nOnly keep the ODD numbers:\n");
    print_array(my_array_2, 10);
    filter(is_odd, my_array_2, 10);
    print_array(my_array_2, 10);

    return 0;
}