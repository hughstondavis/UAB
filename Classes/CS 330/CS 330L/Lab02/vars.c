#include<stdio.h>
static int x = 5;
extern int z;
int y = 5;
void myFunc(){
    int i = 5;
    printf("inside funct, i is %d (%p)\n", i, &i);
    return;
}
void incrementAuto(){
    auto int i = 0;  // scope block, lifetime block
    i++;
    printf("inside incrementAuto, i is %d (%p)\n", i, &i);
    return;
}
void incrementStatic(){
    static int i = 0;  // scope block, lifetime program
    i++;
    printf("inside incrementStatic, i is %d (%p) .data\n", i, &i); 
    return;
}
int main(){
    int i = 10;
    printf("initial value of i is %d (%p)\n", i, &i);
    /* this block is just for demo, we wouldn't do this irl */
    {
        int i = 15;
        printf("inside block, i is %d (%p)\n", i, &i);
    }
    printf("outside block, i is %d (%p)\n", i, &i);
    myFunc();
    incrementAuto();
    incrementAuto();
    incrementStatic();
    incrementStatic();
    printf("static x is %d (%p) .data\n", x, &x); // x declare global, so it's in .data
    extern int y;
    //int y =  5;
    printf("extern y is %d (%p) .data\n", y, &y);  // y declare global, so it's in .data
    int z = 10;
    printf("extern z is %d (%p) stack\n", z, &z);  // z declared in main, so it's on the stack
    return 0;
}
