//Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.

#include<stdio.h>

int main(){
    int num1;
    int num2;
    int i;
    int sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number largest than the first number: ");
    scanf("%d", &num2);

    for (i = num1; i<=num2; i++){
        if ((i % 17) != 0){
            sum += i;
        }
    }
    printf("The sum of all number not divisible by 17 between %d and %d = %d", num1, num2, sum);

    return 0;
}