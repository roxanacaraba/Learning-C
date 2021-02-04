//Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
#include<stdio.h>

int main(){

    int a = 20;
    int *pointer_a = &a;


    printf("Using & : &a = %d\n", &a); // adresa
    printf("Using & and * : *(&a) = %d\n", *(&a)); // valoarea
    printf("using only pointer variable: pointer_a = %d\n", pointer_a); // adresa
    printf("Using * and pointer variable: *pointer_a = %d\n", *pointer_a); //valoarea
    printf("using only pointer variable: pointer_a = %d\n", pointer_a);


    return 0;

}
// Cand utilizam doar &/ variabila pointer obtinem adresa;
// Cand utilizam * si &/variabila pointer obtinem valoarea;