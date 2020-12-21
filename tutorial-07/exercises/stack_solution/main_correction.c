/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

#include "stack.h"

void test_push(uint8_t *passed, uint8_t *failed);
void test_peek(uint8_t *passed, uint8_t *failed);
void test_pop(uint8_t *passed, uint8_t *failed);
void test_depth(uint8_t *passed, uint8_t *failed);
void test_print();

int main()
{

    uint8_t failed = 0, passed = 0;
    test_push(&passed, &failed);
    test_peek(&passed, &failed);
    test_pop(&passed, &failed);
    test_depth(&passed, &failed);

    printf("\n%u out of %u test cases passed.\n", passed, passed+failed);

    test_print();

    return 0;
}


void test_push(uint8_t *passed, uint8_t *failed)
{
    printf("Testing push...\n");

    // Make the buffer large enough to allow some padding on either side.
    char buffer[16] = {0};
    unsigned int offset = 5;
    unsigned int max = 5;

    char values[] = "fo\0o\0bar";
    int results[] = {
    	1,1,0,1,0,1,1,0,0,
    };

    int n_tests = sizeof (values) / sizeof (values[0]);
    
    int i;

    struct Stack stack;

    init_stack(&stack, buffer+offset, max);

    for (i = 0; i < n_tests; ++i)
    {
        int actual = push(&stack, values[i]);
        if (actual != results[i])
        {
            printf("Failed test case %u:\nInput: %i\nExpected Output: %i\nActual Output: %i\n", 
                   i+1,
                   values[i],
                   results[i],
                   actual);
            ++(*failed);
        }
        else
            ++(*passed);
    }
}


void test_peek(uint8_t *passed, uint8_t *failed)
{
    printf("Testing peek...\n");

    // Make the buffer large enough to allow some padding on either side.
    char buffer[16] = {0};
    unsigned int offset = 5;
    unsigned int max = 5;

    char values[] = "fo\0ob\0ar";
    char results[] = "\0fooobbaa";

    int n_tests = sizeof (values) / sizeof (values[0]);
    
    int i;

    struct Stack stack;

    init_stack(&stack, buffer+offset, max);

    for (i = 0; i < n_tests; ++i)
    {
        char actual = peek(&stack);
        if (actual != results[i])
        {
            printf("Failed test case %u:\nInput: %i\nExpected Output: %i\nActual Output: %i\n", 
                   i+1,
                   values[i],
                   results[i],
                   actual);
            ++(*failed);
        }
        else
            ++(*passed);
        push(&stack, values[i]);
    }
}


void test_pop(uint8_t *passed, uint8_t *failed)
{
    printf("Testing pop...\n");

    // Make the buffer large enough to allow some padding on either side.
    char buffer[16] = {0};
    unsigned int offset = 5;
    unsigned int max = 5;

    char values[] = "fo\0ob\0ar";
    char results[] = "aboof\0\0";

    int n_values = sizeof (values) / sizeof (values[0]);
    int n_results = sizeof (results) / sizeof (results[0]);
    
    int i;

    struct Stack stack;

    init_stack(&stack, buffer+offset, max);

    for (i = 0; i < n_values; ++i)
        push(&stack, values[i]);

    for (i = 0; i < n_results; ++i)
    {
        char actual = pop(&stack);
        if (actual != results[i])
        {
            printf("Failed test case %u:\nExpected Output: %i\nActual Output: %i\n", 
                   i+1,
                   results[i],
                   actual);
            ++(*failed);
        }
        else
            ++(*passed);
    }
}

void test_depth(uint8_t *passed, uint8_t *failed)
{
    printf("Testing depth...\n");

    // Make the buffer large enough to allow some padding on either side.
    char buffer[16] = {0};
    unsigned int offset = 5;
    unsigned int max = 5;

    int function[] = { // 0 == push, 1 == pop
    	0,0,0,1,0,0,0,0,1,1,1,0,1,1,1,1,1,
    };
    int results[] = {
    	0,1,2,3,2,3,4,5,5,4,3,2,3,2,1,0,0,
    };
    int n_tests = sizeof (results) / sizeof (results[0]);
    
    int i;

    struct Stack stack;

    init_stack(&stack, buffer+offset, max);

    for (i = 0; i < n_tests; ++i)
    {
        int actual = depth(&stack);

        if (actual != results[i])
        {
            printf("Failed test case %u:\nExpected Output: %i\nActual Output: %i\n", 
                   i+1,
                   results[i],
                   actual);
            ++(*failed);
        }
        else
            ++(*passed);

    	if (function[i])
    		pop(&stack);
    	else
    		push(&stack, 'a');
    }
}

void test_print()
{
    printf("\nTesting print_stack...\n");
    printf("Please check yourself whether the following pairs of lines match up.\n\n");


    // Make the buffer large enough to allow some padding on either side.
    char buffer[16] = {0};
    unsigned int offset = 5;
    unsigned int max = 5;

    struct Stack stack;

    init_stack(&stack, buffer+offset, max);

    push(&stack, 'a'); push(&stack, 'b'); push(&stack, 'c');
    printf("Expected: abc\n");
    printf("  Actual: ");
    print_stack(&stack);
    puts("\n");

    init_stack(&stack, buffer+offset, max);

    push(&stack, 'f'); push(&stack, 'o'); push(&stack, 'o'); push(&stack, 'b'); push(&stack, 'a'); push(&stack, 'r');
    printf("Expected: fooba\n");
    printf("  Actual: ");
    print_stack(&stack);
    puts("\n");

    init_stack(&stack, buffer+offset, max);

    push(&stack, 'a'); push(&stack, 'b'); push(&stack, 'c'); pop(&stack); pop(&stack); pop(&stack); pop(&stack); push(&stack, 'X');
    printf("Expected: X\n");
    printf("  Actual: ");
    print_stack(&stack);
    puts("\n");
}