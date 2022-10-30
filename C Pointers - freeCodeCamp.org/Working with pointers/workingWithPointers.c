#include<stdio.h>
int main(){
    int a = 10;
    int *p = &a; //&a = address of a
    /*
    printf("%d\n",p); // variable "a" address 
    printf("%d\n",*p); // *p - value at address pointed by p
    printf("%d\n",&a); // address of "a"


    printf("a = %d\n", a);
    *p = 12; //dereferencing
    printf("a = %d\n", a);
    */

   /*
    printf("Address of p is %d\n", p);
    printf("Value of p is %d\n", *p);

    int b = 20;
    *p = b; //Will the address in p change to point to b?
    printf("Address of p is %d\n", p);
    printf("Value of p is %d\n", *p);
    */

   //Pointer arithmetic
    printf("Address p is %d\n", p); 
    printf("value at address p is %d\n", *p);
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("Address p+1 is %d\n",p+1);
    printf("value at address p+1 is %d\n", *(p+1));


}