// Write a C program to return the absolute value of a long integer.

#include<stdio.h>
#include<stdlib.h>

int main(){
    long int num1 = 247024;
    long int num2 = - 37252;

    printf("%ld\n", labs(num1));
    printf("%ld", labs(num2));

    return 0;
}