// Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

#include<stdio.h>

int main(void){

    printf("%d", dif(20));
}

    int dif(int n){

       const int num = 51;

       if (n > num){
            return ((n - num) * 3);
        }
    return num - n;
    }
