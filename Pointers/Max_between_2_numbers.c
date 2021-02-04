///Write a program in C to find the maximum number between two numbers using a pointer

#include<stdio.h>

int main(){
    int num1 = 6;
    int num2 = 9;
    int *pointer1 = &num1;
    int *pointer2 = &num2;

    if(*pointer1 > *pointer2){
        printf("%d", *pointer1);
    }
    else if (*pointer2 > *pointer1){
        printf("%d", *pointer2);
    }
    else{
        printf("num1 = num2");
    }
    return 0;

}
