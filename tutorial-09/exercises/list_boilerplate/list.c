/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 09
************************************************************************************/


#include <stdlib.h>
#include <stdio.h>

#include "list.h"


/**
 * This function prints out a list.
 */
void print_list(struct List *list) {
    printf("[");
    for (struct Node *node = list->head; node != 0; node = node->next) {
        printf("%d", node->value);
        if (node->next != 0) {
            printf(", ");
        }
    }
    printf("]\n");
}


/**
 * This function initialized an empty singly-
 * linked list.
 *
 * @return Pointer to the initialized list
 */
struct List *init_list() {
    struct List *list = calloc(sizeof(struct List), 1);
    return list;
}


/**
 * This function removes a whole list (including all of
 * its list-elements) and free's all allocated memory.
 *
 * @param list - list to remove
 */
void remove_list(struct List *list) {
    // YOUR CODE HERE
}


/**
 * This function adds a new list element at
 * the end of the list.
 *
 * @param list - list to modify
 * @param value - value to append
 */
void append(struct List *list, int value) {
    // YOUR CODE HERE

    // 1. Struct mit calloc initialisieren
    // 2. struct->value = value

    // Falls liste leer: listhead = neues element

    // Fall list nicht leer:
    // 3. Letzte Element der List finden
    // 4. letztes-element->next = neues element

    // Letztes element finden, Variant 1:
    struct Node *last = list->head;
    while (last->next != 0) {
        last = last->next;
    }

    // Letztes element finden, Variante 2:
    struct Node last_2 = *(list->head);
    while (last_2.next != 0) {
        last_2 = *(last_2.next);
    }
}


/**
 * This function inserts a value into a given list at
 * a specific index all elements from that index on
 * get shifted backwards by one slot.
 *
 * @param list - list to modify
 * @param value - value to insert
 * @param index - index to insert at
 *
 * @return 1 if index exists and value was added to
 * the list and 0 otherwise (list index out of range)
 */
int insert(struct List *list, int value, int index) {
    // YOUR CODE HERE
    return 1;  // just a placeholder
}


/**
 * This function removes all appearances of a given
 * value from the list.
 *
 * @param list - list to modify
 * @param value - value to remove
 */
void remove_by_value(struct List *list, int value) {
    // YOUR CODE HERE
}


/**
 * This function removes the element at a specific index
 * of a given list.
 *
 * @param list - list to modify
 * @param index - index of the element to remove
 *
 * @return 1 if index exists and value was removed from
 * the list and 0 otherwise (list index out of range)
 */
int remove_by_index(struct List *list, int index) {
    // YOUR CODE HERE
    return 0;  // just a placeholder
}


/**
 * This function returns the value of the list-element at
 * a given index.
 *
 * @param list - list to analyze
 * @param index - index to look up
 *
 * @return value of element or 0 if element doesn't exist
 * (list index out of range)
 */
int get_value_at_index(struct List *list, int index) {
    // YOUR CODE HERE
    return 0;  // just a placeholder
}


/**
 * This function returns the index of the first list-
 * element with a given value.
 *
 * @param list - list to analyze
 * @param value - value to look up
 *
 * @return index of element or -1 if element doesn't exist
 */
int get_index_of_value(struct List *list, int value) {
    // YOUR CODE HERE
    return -1;  // just a placeholder
}
