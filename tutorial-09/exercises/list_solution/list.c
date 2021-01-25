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
    list->head = 0; // redundant due to calloc
    return list;
}


/**
 * This function removes a whole list (including all of
 * its list-elements) and free's all allocated memory.
 *
 * @param list - list to remove
 */
void remove_list(struct List *list) {
    while (list->head != 0) {
        struct Node *tmp = list->head;
        list->head = list->head->next;
        free(tmp);
        /* without tmp (not working)
        free(list->head);
        list->head = list->head->next;*/
    }

    free(list);
}

/**
 * This function adds a new list element at
 * the end of the list.
 *
 * @param list - list to modify
 * @param value - value to append
 */
void append(struct List *list, int value) {
    // struct Node *node = calloc(sizeof(struct Node), 1);  // exactly the same
    struct Node *node = calloc(1, sizeof(struct Node));
    node->value = value;
    node->next = 0;  // redundant due to calloc

    if (list->head == 0) {
        list->head = node;
    } else {
        // find the last element (tail)
        struct Node *tail = list->head;
        while (tail->next != 0) {
            tail = tail->next;
        }

        // valid here: tail->next == 0

        // append node to tail
        tail->next = node;
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
    struct Node *new_node = calloc(sizeof(struct Node), 1);
    new_node->value = value;

    if (index == 0) {
        new_node->next = list->head;
        list->head = new_node;
    } else {
        // now: index > 0

        // node_to_append_to has index (index - 1)
        struct Node *node_to_append_to = list->head;
        if (node_to_append_to == 0) {
            // list is empty -> inserting at index > 0 not possible
            free(new_node);
            return 0;
        }

        for (int i=1; i<index; i++) {
            node_to_append_to = node_to_append_to->next;
            if (node_to_append_to == 0) {
                // list index out of range
                free(new_node);
                return 0;
            }
        }

        new_node->next = node_to_append_to->next;
        node_to_append_to->next = new_node;
    }

    return 1;
}


/**
 * This function removes all appearances of a given
 * value from the list.
 *
 * @param list - list to modify
 * @param value - value to remove
 */
void remove_by_value(struct List *list, int value) {

    // Removing all nodes from the beginning of the
    // list that contain this value until the list is
    // either empty or a node with some other value is
    // at the head
    while (list->head != 0) {
        if (list->head->value == value) {
            // remove the first list element
            struct Node *tmp = list->head;
            list->head = list->head->next;
            free(tmp);
        } else {
            break;
        }
    }

    // now: list->head->value != value

    // [1, 2, 3, 3, 3] -> remove 3
    // node=1, node->next->value=2  -> list after: [1, 2, 3, 3, 3]
    // node=2, node->next->value=3  -> list after: [1, 2, 3, 3]
    // node=2, node->next->value=3  -> list after: [1, 2, 3]
    // node=2, node->next->value=3  -> list after: [1, 2]
    // node=2, node->next == 0
    for (struct Node *node = list->head; node->next != 0;) {
        if (node->next->value == value) {
            // remove node->next
            struct Node *tmp = node->next;
            node->next = node->next->next;
            free(tmp);
        } else {
            node = node->next;
        }
    }
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
    if (list->head == 0) {
        return 0;
    }

    if (index == 0) {
        struct Node *tmp = list->head;
        list->head = list->head->next;
        free(tmp);
        return 1;
    } else {
        // loop until node->next is the element to be deleted
        struct Node *node = list->head;
        for (int i=1; i<index; i++) {
            if (node->next == 0) {
                return 0;
            } else {
                node = node->next;
            }
        }
        struct Node *tmp = node->next;
        node->next = node->next->next;
        free(tmp);
        return 1;
    }
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

    // If you want to support negative indexing (element
    // at index -1 is the last element, index -2 is the
    // second to last element, ...) you should use a doubly
    // linked list.
    if ((list->head == 0) || (index < 0)) {
        return 0;
    }

    if (index == 0) {
        return list->head->value;
    } else {
        struct Node *node = list->head;
        for (int i=0; i<index; i++) {
            if (node->next == 0) {
                return 0;
            } else {
                node = node->next;
            }
        }
        return node->value;
    }
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
    int index = 0;
    for (struct Node *node = list->head; node != 0; node = node->next) {
        if (node->value == value) {
            return index;
        } else {
            index++;
        }
    }

    return -1;
}
