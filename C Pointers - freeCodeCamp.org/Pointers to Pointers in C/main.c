#include <stdio.h>

int main (int argc, char *argv[]) {
    int x = 5;
    int*p = &x;
    *p = 6;
    int** q = &p; //pointer to pointer
    int*** r = &q; //pointer to pointer to pointer
    
    printf("%d\n",*p); //6
    printf("%d\n",*q); //memory address
    printf("%d\n",*(*q)); //6
    printf("%d\n",*(*r)); //memory address
    printf("%d\n",*(*(*r))); //6
    ***r = 10;
    printf("x = %d\n",x);
    **q = *p+2;
    printf("x = %d\n", x);

    return 0;
}