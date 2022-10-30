#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num = 6;

    //Also possible with "+", "-" and "/"
    //printf("%f", 5.4 * 4.5);

    //printing integer as if it were float (when doing an mathematical operation) results in 0.000000
    printf("%d \n", num);
    printf("%f \n", 5 + 4);

    /****Math functions*****/
    //Power
    printf("%f \n", pow(2, 3));

    //Square root
    printf("%f \n", sqrt(36));

    //Ceil ("rounding up")
    printf("%f \n", ceil(24.12));

    //Floor ("rounding down")
    printf("%f \n", floor(12.874));
    return 0;
}
