#ifndef __lab03__
#define __lab03__

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */


struct Coordinate{
    int x;
    int y;
    int z;
};

/*
Function adds one to a number
Takes an int, n
Returns an int, n+1
*/
int addOne(int n){
    n++;
    return n;
}


#endif