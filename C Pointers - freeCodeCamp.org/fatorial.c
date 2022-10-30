#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fatorial(double *num){

    double result = (*num);

    while((*num) > 1){
    (--*num);
    result *= (*num);
    }
   printf("%.0lf\n", result);
}

int main()
{
    clock_t t;
    double num;
    int qte;
    printf("Entre com a quantidade de vezes que deseja fazer fatorial: ");
    scanf("%d", &qte);
    
    t = clock(); //armazena tempo

    while(qte > 0){
        printf("Entre com o numero que deseja fazer o fatorial: ");
        scanf("%lf", &num);
        
        fatorial(&num);
        qte--;
    }

    t = clock() - t; //tempo final - tempo inicial
     printf("Tempo de execucao: %.3lf segundos\n",  (((double)t)/((CLOCKS_PER_SEC/1000))/1000)); //conversão para double
    return 0;

}

