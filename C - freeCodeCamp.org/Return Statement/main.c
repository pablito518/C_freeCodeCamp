#include <stdio.h>
#include <stdlib.h>

//Prototype or signature
double cube(double num);
//Allows creating functions after "main"

int main()
{
    printf("Answer: %f",cube(4));
    return 0;
}

double cube(double num){
    //double result = num * num * num;
    //return result;
    return pow(num, 3);
}

