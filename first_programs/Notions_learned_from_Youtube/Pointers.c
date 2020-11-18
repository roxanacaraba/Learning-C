// a pointer = a type of data 
// a pointer = a memory address
// cand creez o variabila pointer stochez in ea adresa de memorie a altei variabile existente deja in program
#include<stdlib.h>
#include<stdio.h>

int main(){
    int age = 30;
    int * pAge = &age;  // pointer pt variabila age
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p\n", &age); // &age este un pointer (adresa de memorie a variabilei age)
    printf("%p", pAge);
    return 0;
}
