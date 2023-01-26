#include <stdio.h>
#include "lab03.h"

int main(){
    int x = 3;
    double y = 2.13;
    struct Coordinate myCoord;

    myCoord.x = 2;
    myCoord.y = 3;
    myCoord.z = 4;

    for(int i = 0; i < 5; i++){
        x += i;
        myCoord.z += i;
        myCoord.y = addOne(myCoord.z);
    }

    if(x < 100){
        printf("x is less than 100\n");
    } else if (x < 1000){
        printf("x is less than 1000\n");
    } else {
        printf("x is big, y is %0.3f\n", y);
    }

    return 0;
}