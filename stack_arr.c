#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"




void makeStack(Stack312* s){
    int i;
    for (i = 0; i < MAX_ELEMENTS; i++){
        s->elements[i] = 'z';
    }
    s->top = -1; //-1 means empty
}     //No return needed since it's void


bool isFull(Stack312 s){
    if (s.top == (MAX_ELEMENTS - 1)){
        return true;
    }
    return false;
}


bool isEmpty(Stack312 s){
    if (s.top == -1){
        return true;
    }
    return false;
}


void push(StackEntry e,Stack312* s){
    if (isFull(*s) != true){     //Why *s?
        s->top = s->top + 1;
        s->elements[s->top] = e;
    }
}


StackEntry pop(Stack312* s){
    if (isEmpty(*s) != true){
        StackEntry myValue = s->elements[s->top];
        s->elements[s->top] = 'z';     //reinitialize empty space
        s->top = s->top - 1;
        return myValue;
    }
    else{
        return 'y';
    }
}

void deallocate(Stack312* s){
    //int i;
    free(s);
    //realloc(s, sizeof(Stack312));
}



