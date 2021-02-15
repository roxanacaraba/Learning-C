// Write a program in C to find the Factorial of a number using recursion.

#include<stdio.h>

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return num * factorial(num - 1);
}


int main(){
    int num = 5;
    int result = factorial(5);
    printf("%d", result);
}