//Program to print the Largest and Smallest using Global Declaration

#include<stdio.h>

int num1, num2;

int main(){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("The numbers are equal");
    }
    else if(num1 > num2){
        printf("%d is greater than %d", num1, num2);
    }
    else {
        printf("%d is smaller than %d", num1, num2);
    }
    return 0;
}