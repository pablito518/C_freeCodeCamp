#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favNum = 90;
    char favChar = 'a';

    printf("Hello world!\n");

    //Prints Hello"World
    printf("Hello\"World");

    //prints text/integer
    printf("My favorite %s is %d","number",favNum);

    //prints float(decimal) number
    printf("My favorite number is %f",98.76543);

    //prints char
    printf("My favorite character is %c", favChar);

    return 0;
}
