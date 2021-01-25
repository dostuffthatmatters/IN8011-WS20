
#include <stdio.h>
#include "../print_array.c"

int brute_force_search(int length, int array[length], int value){
    // YOUR CODE HERE
    return 0;
}

int binary_search_iterative(int length, int array[length], int value){
    // YOUR CODE HERE
    // No recursion! (no call of binary_search_iterative in here)
    return 0;
}

int binary_search_recursive(int length, int array[length], int value){
    // YOUR CODE HERE
    return 0;
}

int main(){
    int array[10] = {0, 1, 3, 4, 5, 8, 9, 13, 14, 17};
    print_array(10, array);

    for (int i=0; i<20; i++) {
        printf("Looking for value=%2d \t", i);
        printf(
            "BF/IT/RE: %d/%d/%d\n",
            brute_force_search(10, array, i),
            binary_search_iterative(10, array, i),
            binary_search_recursive(10, array, i)
        );
    }

    return 0;
}