
#include "../print_array.c"

int brute_force_search(int length, int array[length], int value){
    for (int i=0; i<length; i++) {
        if (array[i] == value) {
            return 1;
        }
    }
    return 0;
}

int binary_search_iterative(int length, int array[length], int value){
    int left = 0;
    int right = length - 1;
    
    while (left <= right) {
        int middle = left + (right - left)/2;
        if (array[middle] == value) {
            return 1;
        } else if (array[middle] < value) {
            left = middle + 1;
        } else  {
            right = middle - 1;
        }
    }
    return 0;
}

int binary_search_recursive(int length, int array[length], int value){
    if (length == 0) {
        return 0;
    } else {
        int middle = length/2;

        if (array[middle] == value) {
            return 1;
        } else if (array[middle] > value){
            return binary_search_recursive(
                middle,
                array,
                value
            );
        } else {

            return binary_search_recursive(
                length - middle - 1,
                array + middle + 1,
                value
            );
        }
    }
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
