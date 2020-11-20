// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.

#include<stdio.h>

int main(){
    int num1 = 165;
    int num2 = 183;

    if ((num1 >= 100 && num1 <= 200) || (num2 >= 100 && num2 <= 200)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}