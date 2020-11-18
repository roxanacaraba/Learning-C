//Write a C program to shift given data by two bits to the left

#include<stdio.h>

int main(){
    int data;
    int shifted_data;

    printf("Enter a integer value: ");
    scanf("%d", &data);

    shifted_data = data << 2;
    printf("The left shifted %d = %d", data, shifted_data);

    return 0;
}
