//Write a C program to check if two given non-negative integers have the same last digit.

#include<stdio.h>

int test(int num1, int num2);

int main(void)
{
    printf("%d\n", test(123, 435));
    printf("%d\n", test(13, 523));
    printf("%d\n", test(15, 18765));
}
int test(int num1, int num2){
    return (num1 % 10) == (num2 % 10);
}