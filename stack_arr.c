#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack_arr.h"

void makeStack(Stack312* s){
    //Initialize the stack (array format)
    int i;
    for (int i = 0; i < MAX_ELEMENTS; i++){
        s->elements[i] = 'z';
    }
}

//If top value is initialized value, stack is not full
bool isFull(Stack312 s){
    if (s.top == (MAX_ELEMENTS - 1)){
        return true;
    }
    return false;
}

//If  value is initialized value, stack is not full
bool isEmpty(Stack312 s){
    if (s.top == -1){
        return true;
    }
    return false;
}

void push(StackEntry e,Stack312* s){
    if (isFull(*s)){     //Why *s?
        s->top = s->top + 1;
        s->elements[s->top] = e;
    }
}

//StackEntry pop(Stack312* s){
//    if (isEmpty(*s) != 1){
//
//    }
//}
int main(void){
    //Initialize pointer "s" to point to allocated memory of size Stack312
    Stack312* x;
    x = (Stack312* ) malloc(sizeof(Stack312));     //typecasting not necessarily needed. kept for C++ compatibility
    makeStack(x);

    bool v = isFull(*x);
    printf("%d \n", v);

    printf("done");
    return 0;
}

