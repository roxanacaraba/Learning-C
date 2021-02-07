//Write a program in C to find the length of a string without using library function.

#include<stdio.h>

int main(){
    char str[] = {"string"};
    int count = 0;

    while(str[count] != '\0'){
        count++;
    }
    
    printf("%d", count);
    return 0;

}