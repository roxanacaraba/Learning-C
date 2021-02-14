// Write a program in C to print first 50 natural numbers using recursion.

#include<stdio.h>

int printnum(int num){
    if(num <= 50){
        printf("%d ", num);
        printnum(num + 1);
    }
}

int main(){
    int n = 1;
    printnum(1);
    return 0;
}






