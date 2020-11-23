// Write a C program to check three given integers (small, medium and large) and return true if the difference between small and medium and the difference between medium and large is same.

#include<stdio.h>

int CheckDifferences(int small, int medium, int large);

int main(void){
    printf("%d\n", CheckDifferences( 3, 6, 19));
    printf("%d\n", CheckDifferences( 5, 15, 25));
    printf("%d\n", CheckDifferences( 42, 79, 109));
}

int CheckDifferences(int small, int medium, int large){
    return (medium - small) == (large - medium);
}