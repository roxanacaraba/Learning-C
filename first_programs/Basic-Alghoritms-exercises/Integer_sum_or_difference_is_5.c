// Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5.

#include<stdio.h>


int Funct(int num1, int num2);

int main(void){

    printf("%d\n", Funct( 2, 3));
    printf("%d\n", Funct( 11, 6));
    printf("%d\n", Funct( 5, 4));
    printf("%d\n", Funct( 9, 28));
}

int Funct(int num1, int num2){
    return(num1 == 5 || num2 == 5 || (num1 + num2) == 5 || (num1 - num2) == 5);

}