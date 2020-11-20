//Write a C program that accepts some integers from the user and find the highest value and the input position.

#include<stdio.h>
 int main(){

     int numbers[3];
     int max;

    printf("Enter the first number: ");
    scanf("%d", &numbers[0]);
    printf("Enter the second number: ");
    scanf("%d", &numbers[1]);
    printf("Enter the third number: ");
    scanf("%d", &numbers[2]);
    
    if (numbers[0] > numbers[1] && numbers[0] > numbers[2]){
        max = numbers[0];
        printf("The highest value: %d\nInput position: 1", numbers[0]);
    }
    else if(numbers[1] > numbers[0] && numbers[1] > numbers[2]){
        max = numbers[1];
        printf("The highest value: %d\nInput position: 2", numbers[1]);
    }
    else{
        max = numbers[2];
        printf("The highest value: %d\nInput position: 3", numbers[2]);

    }
    return 0;

    }


 
