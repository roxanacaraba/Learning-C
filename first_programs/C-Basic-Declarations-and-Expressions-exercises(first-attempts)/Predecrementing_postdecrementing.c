// Write a C program to demonstrates the difference between predecrementing and postdecrementing using the decrement operator.

#include<stdio.h>

int main(){

    int num = 10;

    printf("Predecrementing:\n");
    printf("x = %d\n", num);
    printf("--x = %d\n", --num);
    printf("x = %d\n", num);
    
    num = 10;
    printf("Postdecrementing:\n");
    printf("x = %d\n", num);
    printf("x-- = %d\n", num--);
    printf("x = %d\n", num);

    return 0;

}
