#include <stdio.h>
void Increment(int *p){
    *p = (*p) +1;
    printf("a = %d\n", (*p));

    //printf("Address of variable a in increment = %d\n", &a);
}
 
int main (int argc, char *argv[]) {

    int a = 10;
    Increment(&a);
    printf("a = %d\n", a);
    printf("Address of variable a in main = %d\n", &a);
    return 0;
}