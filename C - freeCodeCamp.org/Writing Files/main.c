#include <stdio.h>
#include <stdlib.h>

int main(){
    //Creating file in specified folder
    //FILE * fpointer = fopen("C:\Cursos\employees.txt", "w");

    //If the path is not specified, the file will be created in the same folder
    //as the c file is.
    //writing text in file (overwrites)¹

    //FILE * fpointer = fopen("employees.txt", "w");
    
    //writing text in file (overwrites)²
    //fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    
    //appending (adds)¹
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);
}