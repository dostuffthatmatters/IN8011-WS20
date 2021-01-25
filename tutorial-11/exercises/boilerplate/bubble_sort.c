
#include "../print_array.c"

void bubble_sort(int length, int array[length]){
    // YOUR CODE HERE
}

int main(){
    int array[10] = {3, 17, 9, 0, 2, 5, 1, 4, 2, 8};

    print_array(10, array);
    bubble_sort(10, array);
    print_array(10, array);

    return 0;
}
