#include <stdio.h>
#include "stdlib.h"
#include "stack_arr.h"

int main(void) {
    Stack312 *txtFileStack;
    StackEntry poppedChar;
    FILE *ptr_file;
    char charFromFile;
    int invalidExpressionCounter = 0;

    //create stack
    txtFileStack = (Stack312 *) malloc(sizeof(Stack312));     //typecasting not necessarily needed. kept for C++ compatibility
    makeStack(txtFileStack);

    //Open file and check if empty
    ptr_file = fopen("../fake_picture.txt", "r");     // "./" is important!!!!
    if (ptr_file == NULL) {
        printf("error. file is null");
        return 0;
    }

    //Routine to print txt file, then reset file pointer
    while ((charFromFile = fgetc(ptr_file)) != EOF) {
        printf("%c", charFromFile);
    }
    printf("\n");
    ptr_file = fopen("../fake_picture.txt", "r");     // "./" is important!!!!

    //Routine to check symmetry
    while ((charFromFile = fgetc(ptr_file)) != EOF) {     //First line received and placed in txtFileString

        if (charFromFile == '[' || charFromFile == '(') {
            push(charFromFile, txtFileStack);
        } else if (charFromFile == ']') {
            poppedChar = pop(txtFileStack);
            if (poppedChar != '[') {
                printf("Missing  ) \n");
                invalidExpressionCounter++;
            }
        } else if (charFromFile == ')') {
            poppedChar = pop(txtFileStack);
            if (poppedChar != '(') {
                printf("Missing  ] \n");
                invalidExpressionCounter++;
            }
        }

        //if it is symmetrical, move on

    }

    if (invalidExpressionCounter > 0){
        printf("Invalid expression");
    }
    else{
        printf("Valid expression");
    }
    return 0;
}
