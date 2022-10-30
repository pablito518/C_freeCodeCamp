#include <stdio.h>

int main (int argc, char *argv[]) {
    int a =  1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);
    printf("Address = %d, value = %d\n",p+1,*(p+1));
    /*
    char *p0;
    p0 = (char*)p; //typecasting
    printf("size of char is %d bytes\n",sizeof(char));
    printf("Address = %d, value = %d\n",p0,*p0);
    printf("Address = %d, value = %d\n",p0+1,*(p0+1));
    // 1025 = 00000000 00000000 00000100 00000001 
    */

    void *p0;
    p0 = p;
    printf("Address = %d",p0);
    //printf("Address = %d, value = %d\n",p0, *p0); // cannot dereference
    //printf("Address = %d",p0+1); //impossible to go to next byte.

    return 0;
}