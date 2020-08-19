# 1.-Matching-Brackets
Determine symmetry of brackets in equation using stacks

Snippet:

     This is a fun little project I did to explore stacks through the implementation of arrays. 


Challenges and Solutions:

     1. Stack got jumbled after progressing a few lines
          - I did not allocate memory. Used malloc and initialized the stack (NEW SKILL)
     
     2. Had many memory leaks
          - Used Valgrind to locate them and deallocate the memory (NEW SKILL)
     
     3. Initially used too many redundant variables
          - Stepped through when debugging to monitor the value of the variables and locate the similarities 


PsuedoCode:
     
     1. Create struct (in case more variables of the same struct needed for future use)
     2. Allocate memory and initialize the array
     3. Read txt file and push open brackets/parenthesis onto stack
     4. When closed brackets/parenthesis encountered, pop stack for open brackets/parenthesis and compare
     5. If not the same, display what was expected and continue
     6. If the same, continue and display "valid expression" if equation is symetric 
     7. Edge cases for no brackets/parenthesis and exceeding MAX_LIMIT
     

How You Can Use This and Possible Improvements:

     1. Add your own equation by editing the txt file called equation.txt
     2. See if you can implment this using Linked Lists instead of arrays
     3. Try comparing multipule equations together
