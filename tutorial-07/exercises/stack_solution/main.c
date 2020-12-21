/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main() {
    // Already implemented for you:
    int max = 10;
    char *stack_memory = malloc(sizeof(char) * max);
    struct Stack my_stack;
    init_stack(&my_stack, stack_memory, max);
    printf("INITIALIZING");
    print_stack_debug(&my_stack);


    // You have to implement these:
    
    push(&my_stack, 'H');
    printf("\nPUSHING element 'H'\n");
    print_stack_debug(&my_stack);

    push(&my_stack, 'e');
    printf("\nPUSHING element 'e'\n");
    print_stack_debug(&my_stack);

    push(&my_stack, 'l');
    printf("\nPUSHING element 'l'\n");
    print_stack_debug(&my_stack);

    char pop_result = pop(&my_stack);
    printf("\nPOP -> %c (%d)\n", pop_result, pop_result);
    print_stack_debug(&my_stack);

    char peek_result = peek(&my_stack);
    printf("\nPEEK -> %c (%d)\n", peek_result, peek_result);
    print_stack_debug(&my_stack);


    // You can ignore this 'free' statement for now
    free(stack_memory);

    return 0;
}