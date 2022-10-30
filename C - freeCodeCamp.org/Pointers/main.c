#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    //p stands for "pointer"
    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);

    return 0;
}
