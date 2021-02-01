
#include "../print_array.c"

void bubble_sort(int length, int array[length]){
    int swapped;  // Did a swap take place during on full pass?

    // do..while instead of while since at least one pass should happen
    do {
        // Resetting swap indicator
        swapped = 0;

        // Looping over all pairs of elements
        for (int i=0; i<length-1; i++){
            if (array[i] > array[i+1]) {
                // Swapping elements
                int tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
                swapped = 1;
            }
        }
    } while (swapped != 0);

}

int main(){
    int array[10] = {3, 17, 9, 0, 2, 5, 1, 4, 2, 8};

    print_array(10, array);
    bubble_sort(10, array);
    print_array(10, array);

    return 0;
}
