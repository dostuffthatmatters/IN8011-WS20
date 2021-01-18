/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 09
************************************************************************************/


#ifndef LIST_H
#define LIST_H

struct List {
    struct Node *head;
};

struct Node {
    int value;
    struct Node *next;
};

void print_list(struct List *list);

struct List *init_list();
void remove_list(struct List *list);

void append(struct List *list, int value);
int insert(struct List *list, int value, int index);

void remove_by_value(struct List *list, int value);
int remove_by_index(struct List *list, int index);

int get_value_at_index(struct List *list, int index);
int get_index_of_value(struct List *list, int value);

#endif
