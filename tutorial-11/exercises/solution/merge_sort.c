
#include "../print_array.c"
#include <stdlib.h>

/**
 * Merge two lists into a new list (tmp_array).
 *
 * @param l1 - Length of array1
 * @param l2 - Length of array2
 * @param array1
 * @param array2
 * @param tmp_array - The new array containing the merged lists
 */
void merge_lists(int l1, int l2, int *array1, int *array2, int *tmp_array){
    int i1=0;
    int i2=0;

    while ((i1<l1) || (i2<l2)) {
        if (i1 >= l1) {
            // array_1 is already empty
            tmp_array[i1 + i2] = array2[i2];
            i2++;
        
        } else if (i2 >= l2) {
            // array_2 is already empty
            tmp_array[i1 + i2] = array1[i1];
            i1++;
        
        } else if (array1[i1] > array2[i2]) {
            tmp_array[i1 + i2] = array2[i2];
            i2++;

        } else {
            tmp_array[i1 + i2] = array1[i1];
            i1++;
        }
    }
}

void merge_sort(int length, int *array){
    if (length > 1) {
        // Determining the length of the two new sub-arrays
        int l1 = (length/2);
        int l2 = (length - l1);

        // Recursive Call
        merge_sort(l1, array);
        merge_sort(l2, array + l1); 

        /*
        There are other implementations of merge sort that do not need
        extra memory space! However, this version is easier to understand
        since it exactly implements the description.
        */

        // Merge the two separately merge-sorted lists back together
        int *tmp_array = calloc(sizeof(int), l1+l2);
        merge_lists(l1, l2, array, array+l1, tmp_array);

        // Copying over new arrays contents
        for (int i=0; i<length; i++) {
            array[i] = tmp_array[i];
        }

        // Freeing the intermediate memory
        free(tmp_array);
    }
}

int main(){
    int array[10] = {3, 17, 9, 0, 2, 5, 1, 4, 2, 8};

    print_array(10, array);
    merge_sort(10, array);
    print_array(10, array);

    return 0;
}
