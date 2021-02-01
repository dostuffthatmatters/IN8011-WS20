
#include "../print_array.c"

/**
 * Returns a pointer to the newly created merged list which
 * has the combined length of length_1 and length_2.
 *
 * @param l1 - Length of array1
 * @param l2 - Length of array2
 * @param array1
 * @param array2
 *
 * @return Pointer to the first element of the new int array
 */
int *merge_lists(int l1, int l2, int *array1, int *array2){

    // We are going to need a new memory space for the new list.
    int *new_array = calloc(sizeof(int), l1+l2);

    /*
     * We definitely could do merge sort without any extra memory
     * space for the intermediate arrays, BUT we'd have to shift
     * the whole array content around all the time. We'd save a
     * little bit of memory but the processing time would increase
     * a lot! (Depending on how long it takes to dynamically allo-
     * cate memory)
     */

    int i1=0, i2=0;
    while (i1+i2 < (l1+l2)) {
        if ((i1 >= l1) || (array1[i1] > array2[i2])) {
            // array_1 is already empty OR first element in array_2 is smaller
            new_array[i1 + i2] = array2[i2++];
            i2++;
        } else {
            new_array[i1 + i2] = array1[i1++];
            i1++;
        }
    }

    return new_array;
}

void merge_sort(int length, int *array){
    if (length > 1) {
        // Determining the length of the two new sub-arrays
        int l1 = (length/2);
        int l2 = (length - l1);

        // Recursive Call
        merge_sort(length, array);
        merge_sort(length, array + l1);

        // Merge the two separately merge-sorted lists back together
        int *new_array = merge_lists(l1, l2, array, array+l1);

        // Copying over new arrays contents
        for (int i=0; i<length; i++) {
            array[i] = new_array[i];
        }

        // Freeing the intermediate memory
        free(new_array);
    }
}

int main(){
    int array[10] = {3, 17, 9, 0, 2, 5, 1, 4, 2, 8};

    print_array(10, array);
    merge_sort(10, array);
    print_array(10, array);

    return 0;
}
