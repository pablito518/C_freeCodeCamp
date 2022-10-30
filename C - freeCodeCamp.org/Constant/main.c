#include <stdio.h>
#include <stdlib.h>

int main()
{
    //could be "int const" too, there's no difference
    const int NUM = 5;
    printf("%d\n", num);
    //can't modify a constant
    //num = 8;
    printf("%d", num);
    return 0;
}
