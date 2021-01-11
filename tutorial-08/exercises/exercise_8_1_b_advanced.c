/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 08
************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

/**
 * This implements a standard Stack-Data-Structure.
 * See: https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
 */
struct Stack {
    int max_depth;
    char* bottom;
    char* top;
};

struct Stack* init_stack (int max_depth);
void free_stack(struct Stack *stack);

int push(struct Stack *stack, char character);
char pop(struct Stack *stack);
char peek(struct Stack *stack);

int depth(struct Stack *stack);
void print_stack(struct Stack *stack);


/**
 * This method initializes a stack, meaning it reserves all memory
 * needed for the struct as well as the actual stack-memory-slots.
 *
 * After this method has been executed the stack is empty (all
 * memory is zero) and its pointers top/bottom both point to the
 * beginning of the data chuck in memory.
 *
 * @param max_depth - How many characters should fit onto the stack
 * @return A pointer to the stack.
 */
struct Stack* init_stack (int max_depth) {
    struct Stack *my_stack = calloc(1, sizeof(struct Stack));
    my_stack->max_depth = max_depth;
    my_stack->bottom = calloc(max_depth, sizeof(char));
    my_stack->top = my_stack->bottom;
    return my_stack;
}

/**
 * When you allocate memory you also have to free it after you are done
 * using it. This method frees all memory taken up by a given stack
 *
 * @param stack - struct Stack passed by reference
 */
void free_stack(struct Stack *stack) {
    free(stack->bottom);
    free(stack);
}


/**
 * This method pushes an element onto the stack and returns
 * whether this operation has been successful.
 *
 * @param stack - struct Stack passed by reference
 * @param character - character to be pushed onto the stack
 */
int push(struct Stack *stack, char character) {
    if (depth(stack) >= stack->max_depth) {
        // Element could not be added
        return 0;
    } else if (*(stack->bottom) == 0) {
        *(stack->top) = character;
        return 1;
    } else {
        stack->top++;
        *(stack->top) = character;
        return 1;
    }
}

/**
 * This function pops an element off the stack and returns it
 *
 * @param stack - struct Stack passed by reference
 */
char pop(struct Stack *stack) {
    char return_value;

    if (depth(stack) == 0) {
        return_value = 0;
    } else if (depth(stack) == 1) {
        return_value = *(stack->top);
        *(stack->top) = 0;
    } else {
        return_value = *(stack->top);
        *(stack->top) = 0;
        stack->top -= 1;
    }

    return return_value;
}

/**
 * This function returns the top element if the stack without
 * removing it from the stack.
 *
 * @param stack - struct Stack passed by reference
 */
char peek(struct Stack *stack) {
    return *(stack->top);
}



/**
 * This function returns how many elements are stored of the passed stack
 *
 * @param stack - struct Stack passed by reference
 */
int depth(struct Stack *stack) {
    if (stack->bottom == stack->top) {
        return *(stack->bottom) != 0;
    } else {
        return (stack->top - stack->bottom) + 1;
    }
}

/**
 * This function prints out a stacks state, including its content
 *
 * @param stack - struct Stack passed by reference
 */
void print_stack(struct Stack *stack) {
    printf("Printing Stack: max_depth = %d, depth = %d", stack->max_depth, depth(stack));
    for (int i=0; i<stack->max_depth; i++) {
        printf("\nIndex %d: '%c' == %d", i, *(stack->bottom + i), *(stack->bottom + i));
    }
}



/**
 * This function accepts a string (and its length) and tests, whether the
 * placement of the parentheses in that string is correct.
 * Correct strings are: "({}[]){()}", "([][()])", etc.
 * Incorrect strings are: "([]", "([)]", "([]))", etc.
 *
 * @param string - char array
 * @param max_length - length of the char array
 * @return 1 if the parentheses placement is correct, 0 otherwise
 */
int string_is_correct(char* string, int max_length) {
    struct Stack *parentheses_stack = init_stack(15);

    for (int i=0; i<max_length; i++) {
        char character = string[i];

        if (character == 0) {
            // If string has ended
            break;
        }

        switch (character) {
            case '(':
                push(parentheses_stack, character);
                break;
            case '[':
                push(parentheses_stack, character);
                break;
            case '{':
                push(parentheses_stack, character);
                break;
            case ')':
                // No need to handle the case that the stack is empty because
                // 'correct' also gets set to false in this case -> '\0' != '('
                if (pop(parentheses_stack) != '(') {
                    free_stack(parentheses_stack);
                    return 0;
                }
                break;
            case ']':
                // No need to handle the case that the stack is empty because
                // 'correct' also gets set to false in this case -> '\0' != '['
                if (pop(parentheses_stack) != '[') {
                    free_stack(parentheses_stack);
                    return 0;
                }
                break;
            case '}':
                // No need to handle the case that the stack is empty because
                // 'correct' also gets set to false in this case -> '\0' != '{'
                if (pop(parentheses_stack) != '{') {
                    free_stack(parentheses_stack);
                    return 0;
                }
                break;
            default:
                break;
        }
    }

    if (depth(parentheses_stack) != 0) {
        free_stack(parentheses_stack);
        return 0;
    }

    // All test cases passed.
    return 1;
}



/**
 * This program tests whether a bunch of strings which contain parentheses
 * of different types - (), [], {} - follow the regular rules for setting
 * parentheses in an equation.
 *
 * @return 0 if the program executed successfully, Some other integer otherwise
 */
int main() {
    char string_1[16] = "({ss}[]){(y)}";
    char string_2[16] = "([_][(s)])";
    char string_3[16] = "([]{}";  // Missing closing clip
    char string_4[16] = "([)]";  // Mixed up brackets/clips
    char string_5[16] = "([]))";  // No opening Clip

    int correct_1 = string_is_correct(string_1, 15);
    int correct_2 = string_is_correct(string_2, 15);
    int correct_3 = string_is_correct(string_3, 15);
    int correct_4 = string_is_correct(string_4, 15);
    int correct_5 = string_is_correct(string_5, 15);

    printf("\nstring_1 %s correct.", correct_1 ? "is" : "is not");
    printf("\nstring_2 %s correct.", correct_2 ? "is" : "is not");
    printf("\nstring_3 %s correct.", correct_3 ? "is" : "is not");
    printf("\nstring_4 %s correct.", correct_4 ? "is" : "is not");
    printf("\nstring_5 %s correct.", correct_5 ? "is" : "is not");

    return 0;
}
