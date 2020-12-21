/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 07
************************************************************************************/


#ifndef STACK_H
#define STACK_H

struct Stack {
    // Max number of elements the stack 
    // can hold
    int max;

    // Points to the char element that is 
    // currently at the top of the stack
    char *top;

    // Always points to the beginning of
    // the char array memory
    char *bottom;
};

// Already implemented for you:
void print_stack_debug(struct Stack *s);
void init_stack(struct Stack *s, char *buffer, int max);

// You have to implement these:
int push(struct Stack *s, char c);
char peek(struct Stack *s);
char pop(struct Stack *s);
int depth(struct Stack *s);
void print_stack(struct Stack *s);

#endif
