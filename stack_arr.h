#include <stdio.h>
#include <stdbool.h>

#define MAX_ELEMENTS 100

typedef char StackEntry;

typedef struct Stack312 {
    int top;
    StackEntry elements[MAX_ELEMENTS];
} Stack312;


//Function: Initialize the stack
//Psuedo: Initialize the stack (array format) to 'z' and pointer to -1(empty)
//Inputs: 1. Pointer to stack
//Outputs: N/A
void makeStack(Stack312* s);


//Function: Check to see if stack is full
//Psuedo: If top value is initialized value, stack is not full
//Inputs: 1. stack itself
//Outputs: 1 if Full, 0 if not Full
bool isFull(Stack312 s);


//Function: Check to see if stack is empty
//Psuedo: Check if counter of top of stack is less than zero
//Inputs: 1. stack itself
//Outputs: 1 if Empty, 0 if not Empty
bool isEmpty(Stack312 s);


//Function: Push onto stack. Do not push if full
//Psuedo: If the stack is full, do not push. Assumption that no equation will have more than 100 brackets/parenthesis
//Inputs: 1. value to be pushed 2.pointer to stack
//Outputs: N/A
void push(StackEntry e,Stack312* s);


//Function: Pop from stack
//Psuedo: If the stack is empty, do not pop
//Inputs: 1. pointer to stack
//Outputs: 1. value popped from stack
StackEntry pop(Stack312* s);

void deallocate(Stack312* s);
