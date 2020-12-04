//Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.

#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int count_positive = 0;
    int count_negative = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("Enter the fourth number: ");
    scanf("%d", &num4);
    printf("Enter the fifth number: ");
    scanf("%d", &num5);

    if (num1 >= 0){
        count_positive += 1;
    }
    else{
        count_negative +=1;
    }
    if (num2 >= 0){
        count_positive += 1;
    }
    else{
        count_negative += 1;
    }
    if (num3 >= 0){
        count_positive += 1;
    }
    else{
        count_negative += 1;
    }
    if (num4 >= 0){
        count_positive += 1;
    }
    else{
        count_negative += 1;
    }
    if (num5 >= 0){
        count_positive += 1;
    }
    else{
        count_negative += 1;
    }
    
    printf("Positive numbers = %d\nNegative numbers = %d", count_positive, count_negative);
    return 0;
    

}