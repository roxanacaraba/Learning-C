// Write a C program to display the integer equivalents of letters (a-z, A-Z).

#include<stdio.h>

int main(){

    char i;
    printf("List of integer equivalents of letters (a-z, A-Z):\n");
    for (i = 'a'; i <= 'z'; i++){
        printf("%d ", i);
    }

    printf("\n");

    for (i = 'A'; i <= 'Z'; i++){
        printf("%d ", i);
    }
    return 0;
}