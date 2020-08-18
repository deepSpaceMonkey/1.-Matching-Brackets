//stack_arr.h
//Add documentation including Pre and Post conditions for functions

#include <stdio.h>
#include <stdbool.h>

#define MAX_ELEMENTS 100

typedef char StackEntry;

typedef struct Stack312 {
    int top;
    StackEntry elements[MAX_ELEMENTS];
} Stack312;

void makeStack(Stack312* s);

bool isFull(Stack312 s);

bool isEmpty(Stack312 s);

void push(StackEntry e,Stack312* s);

StackEntry pop(Stack312* s);
