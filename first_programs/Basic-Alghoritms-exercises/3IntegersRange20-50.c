// Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false.

#include<stdio.h>

int func(int x, int y, int z);

int main(void){
    printf("%d\n", func(34, 80, 45));
    printf("%d\n", func(12, 90, 145));
    printf("%d\n", func(20, 30, 40));
}

int func(int x, int y, int z){
    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}
    

