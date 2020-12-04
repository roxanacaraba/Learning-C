// Write a program in C to display n terms of natural number and their sum.Go to the editor
// Test Data : 7
// Expected Output :
// The first 7 natural number is :
// 1 2 3 4 5 6 7
// The Sum of Natural Number upto 7 terms : 28

#include<stdio.h>

int main(){

    int num;
    int i;
    int sum = 0;

    printf("The first how many numbers do you want to add? ");
    scanf("%d", &num);
    printf("The first %d natural numbers are:\n", num);

    for(i = 1; i <= num; i++){
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of Natural Number upto %d terms: %d", num, sum);
    return 0;
}