/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>
#include "stack.h"

/*!
 * @brief This is a function that print a full stack formatted to
 * debug stack operations
 *
 * @param s - Stack to be printed passed by reference
 */
void print_stack_debug(struct Stack* s) {
    printf("-----------------------------\n");
    printf("Printing Stack:\n");

    printf("s->top: %p\n", (s->top));
    printf("s->bot: %p\n", (s->bottom));
    printf("s->max: %d\n\n", (s->max));

    printf("Stack elements:\n");
    for (int i=0; i<(s->max); i++) {
        printf("Pointer: %p, Value: %c (%d)\n", ((s->bottom) + i), *((s->bottom) + i), *((s->bottom) + i));
    }

    printf("-----------------------------\n");
}


/*!
 * @brief This function takes in a stack (passed by reference) which
 * should be initialised (All memory is '\0' and both top and bottom
 * pointer point to the beginning of the memory)
 *
 * @param s - Stack to be initialized passed by reference
 * @param buffer - Pointer to a memory buffer which has been allocated
 * for the stack’s use, but not necessarily been zero-initialised
 * @param max - Indicates the size of the buffer in bytes.
 */
void init_stack(struct Stack* s, char* buffer, int max) {
    s->bottom = buffer;

    for (int i=0; i<max; i++) {
        *((s->bottom) + i) = '\0';
    }
    s->top = s->bottom;
    s->max = max;
}


/*!
 * @brief This function pushes the character c to the top of the stack,
 * provided it is not the null character and there is still room for it.
 *
 * @param s - Stack to be modified passed by reference
 * @param c - Element to be pushed onto the Stack
 * @return Either 0 (The character could not be pushed) or 1 (the character
 * has been pushed successfully)
 */
int push(struct Stack* s, char c) {
    // print_stack_debug(s);
    if (c != '\0') {
        // char is not \0

        if ((s->top == s->bottom) && (*(s->top) == '\0')) {
            // Stack is empty
            if (s->max > 0) {
                // Stack is not full
                *(s->top) = c;
                return 1;
            } else {
                return 0;
            }

        }

        if (s->top < s->bottom + s->max - 1) {
            // Stack is not full
            (s->top)++;
            *(s->top) = c;
            return 1;

        }
    }
    return 0;
}


/*!
 * @brief This function retrieves the element on top of the stack without
 * modifying the stack. If the stack is empty, a null character will be
 * returned instead.
 *
 * @param s - Stack to be investigated passed by reference
 * @return The character on top of the stack
 */
char peek(struct Stack* s) {
    return *(s->top);
}


/*!
 * @brief This function removes the top element from the stack and returns
 * it. If the stack is empty, return a null character instead.
 *
 * @param s - Stack to be investigated and modified passed by reference
 * @return The character on top of the stack
 */
char pop(struct Stack* s) {
    if ((s->top == s->bottom) && (*(s->top) == '\0')) {
        // Stack is empty
        return '\0';
    } else {
        char top_value = *(s->top);
        *(s->top) = '\0';
        (s->top)--;
        return top_value;
    }
}


/*!
 * @brief This function returns the depth of the stack, i.e. the number
 * of elements it is currently holding.
 *
 * @param s - Stack to be investigated passed by reference
 * @return Number of elements, the stack is currently holding
 */
int depth(struct Stack* s) {
    for (int i=0; i<(s->max); i++) {
        if (*(s->bottom + i) == '\0') {
            return i;
        }
    }
    return s->max;
}


/*!
 * @brief This function prints the stack as a single string. E.g. if the
 * stack contains the elements ’f’,’o’,’o’,’b’,’a’,’r’, with the ’r’ on
 * top, the function will print "foobar".
 *
 * @param s - Stack to be investigated passed by reference
 */
void print_stack(struct Stack* s) {
    int n = depth(s);
    if (n == 0) {
        printf("X");
    }
    for (int i=0; i < n; i++) {
        printf("%c", *(s->bottom + i));
    }
}


