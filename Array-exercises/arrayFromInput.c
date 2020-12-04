// Write a program in C to store elements in an array and print it.

#include<stdio.h>

int main(){

    int arr[5] = {};

    printf("Introdu elementul 1: ");
    scanf("%d", &arr[0]);

    printf("Introdu elementul 2: ");
    scanf("%d", &arr[1]);

    printf("Introdu elementul 3: ");
    scanf("%d", &arr[2]);

    printf("Introdu elementul 4: ");
    scanf("%d", &arr[3]);

    printf("Introdu elementul 5: ");
    scanf("%d", &arr[4]);

    printf("arr[r] = {%d, %d, %d, %d, %d}", arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}