//Write a program in C to add two numbers using pointers.

#include<stdio.h>

int main(){
    int num1 = 1;
    int num2 = 2;

    int sum = *(&num1) + *(&num2);
    
    printf("sum = %d", sum);

    return 0;
}
