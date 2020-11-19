//Write a C program that accepts one seven-digit number and separates the number into its individual digits, and prints the digits separated from one another by two spaces each.

#include<stdio.h>

int main(){

    int num;

    printf("Enter a seven-digit number: ");
    scanf("%d", &num);

    printf("%d  ", num / 1000000);
    num = num - ((num / 1000000) * 1000000);

    printf("%d  ", num / 100000);
    num = num - ((num / 100000) * 100000);

    printf("%d  ", num / 10000);
    num = num - ((num / 10000) * 10000);

    printf("%d  ", num / 1000);
    num = num - ((num / 1000) * 1000);

    printf("%d  ", num / 100);
    num = num - ((num / 100) * 100);

    printf("%d  ", num / 10);
    num = num - ((num / 10) * 10);

    printf("%d\n", num % 10);

    return 0;

}