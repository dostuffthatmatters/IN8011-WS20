/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 09
************************************************************************************/


#include <stdio.h>
#include "list.h"


/**
 * This program emulates the usage of our singly
 * linked list in order to test the implementation.
 */
int main() {

    printf("\n---------------------\n\n");

    struct list *list = init_list();
    print_list(list);

    printf("\nAppending 12\n");
    append(list, 12);
    print_list(list);

    printf("\nAppending 99\n");
    append(list, 99);
    print_list(list);

    printf("\nAppending 12\n");
    append(list, 12);
    print_list(list);

    printf("\nAppending 37\n");
    append(list, 37);
    print_list(list);

    printf("\nAppending 12\n");
    append(list, 12);
    print_list(list);

    printf("\n---------------------\n\n");

    printf("\nRemoving value 12\n");
    remove_by_value(list, 12);
    print_list(list);

    printf("\nRemoving value 37\n");
    remove_by_value(list, 37);
    print_list(list);

    printf("\n---------------------\n\n");

    printf("\nAppending 12\n");
    append(list, 12);

    printf("Appending 37\n");
    append(list, 37);

    printf("Appending 42\n");
    append(list, 42);

    print_list(list);

    printf("\n---------------------\n\n");

    printf("\nInserting 7 at index 2\n");
    insert(list, 7, 2);
    print_list(list);

    printf("\nInserting 4 at index 0\n");
    insert(list, 4, 0);
    print_list(list);

    printf("\nInserting 30 at index 6\n");
    insert(list, 30, 6);
    print_list(list);

    printf("\nInserting 40 at index 8 (Not possible, list index out of range)\n");
    insert(list, 40, 8);
    print_list(list);

    printf("\n---------------------\n\n");

    printf("\nRemoving index 2\n");
    remove_by_index(list, 2);
    print_list(list);

    printf("\nRemoving index 0\n");
    remove_by_index(list, 0);
    print_list(list);

    printf("\n---------------------\n\n");

    print_list(list);
    int value_neg = get_value_at_index(list, -1);
    int value_0 = get_value_at_index(list, 0);
    int value_1 = get_value_at_index(list, 1);
    int value_2 = get_value_at_index(list, 2);
    int value_3 = get_value_at_index(list, 3);
    int value_4 = get_value_at_index(list, 4);
    int value_5 = get_value_at_index(list, 5);
    printf("The value at index -1 is %d.\n", value_neg);
    printf("The value at index 0 is %d.\n", value_0);
    printf("The value at index 1 is %d.\n", value_1);
    printf("The value at index 2 is %d.\n", value_2);
    printf("The value at index 3 is %d.\n", value_3);
    printf("The value at index 4 is %d.\n", value_4);
    printf("The value at index 5 is %d.\n", value_5);

    printf("\n---------------------\n\n");

    print_list(list);
    int index_99 = get_index_of_value(list, 99);
    int index_7 = get_index_of_value(list, 7);
    int index_37 = get_index_of_value(list, 37);
    int index_42 = get_index_of_value(list, 42);
    int index_30 = get_index_of_value(list, 30);
    int index_5 = get_index_of_value(list, 5);
    printf("The index of value 99 is %d.\n", index_99);
    printf("The index of value 7 is %d.\n", index_7);
    printf("The index of value 37 is %d.\n", index_37);
    printf("The index of value 42 is %d.\n", index_42);
    printf("The index of value 30 is %d.\n", index_30);
    printf("The index of value 5 is %d.\n", index_5);
    
    // Very important!
    remove_list(list);

    return 0;
}
