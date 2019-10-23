#include <stdio.h>
#include <stdlib.h>
 
int *push(int val, int *c, int stack[]);
int pop(int *c, int stack[]);

int main(){
    //Hello World
    printf("hey\n");
    //initialise stack and counter for stack
    int *stack = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *c = 0 ;
    
    //pushs a size 9 array of values just to fiddle with, each with a corresponding number for ease of readability
    stack = push(0, c, stack);
    stack = push(1, c, stack);
    stack = push(2, c, stack);
    stack = push(3, c, stack);
    stack = push(4, c, stack);
    stack = push(5, c, stack);
    stack = push(6, c, stack);
    stack = push(7, c, stack);
    stack = push(8, c, stack);
    //prints before the pop to also check that push pushes
    for (int i = 0; i < *c; i++){
        printf("%d\n", stack[i]);
    }
    printf("\n");
    //call and print the pop method, just to prove I could store the values pop produces
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    printf("%d\n" , pop(c,stack));
    stack = push(23,c,stack);
    //formatting nonsense
    printf("\n");
    printf("\n");
    printf("\n");
    
   //print 
    for (int i = 0; i < *c; i++){
        printf("%d\n", stack[i]);
    }
  
    return 0;
}
 
int *push(int val, int *c, int stack[]){
    //creates new array with a size equal to the pointer plus one * int this technically creates an array that is too big, 
    //because for some reason you physically cannot create an array of size less than 4 with direct memory allocaation, I've tested it Mr. rangel, 1 and any fraction of 1 will produce an array of size 4 or 0 
    //the pattern goes -> 0.25-2.25 array size 4, 2.26-4.25 array size 6, 4.26-6.25 array size 8, etc,   it only does evens, for some strange reason, if you wanna see my methods refer to gamer.c and ask me
    if(stack = NULL){
        stack = malloc(sizeof(int));
        stack[*c] = val;
        ++(*c);
        return stack;
    }
    int *newArr = malloc(sizeof(int));
    newArr = realloc(stack, (*c+1)*sizeof(int));
    //then since the new array exists on top of stack it has all of stacks values plus 1 space so I just say that stack is the new array or stack is stack+1slot
    stack = newArr;
    //then I add the new value on top of stack
    stack[*c] = val;
    //incriment counter
    ++(*c);
    //incase of pointer nonsense you re output stack
    return stack;
}
 
int pop(int *c, int stack[]){
    //test incase you have an array that is empty, then you should not be able to pop
    if(!(*c)){
        return -1;
    }
    //formatting
    printf("You have popped:\n");
    //save the value you are going to pop before you pop it
    int x = stack[(*c) - 1];
    
    //see push but now I make a smaller array not a bigger array, same memory weirdness
    int *newArr = malloc(sizeof(int));
    newArr = realloc(stack, (*c-1)*sizeof(int));
    stack = newArr;
    //incriment c
    --(*c);
    //give back the value that has been popped
    return x; 
}