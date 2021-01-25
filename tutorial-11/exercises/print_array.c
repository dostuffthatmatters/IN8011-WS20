#include <stdio.h>

void print_array(int length, int array[length]){
    printf("\n[");
    for (int i=0; i<length-1; i++){
        printf("%d, ", array[i]);
    }
    printf("%d]\n", array[length-1]);
}