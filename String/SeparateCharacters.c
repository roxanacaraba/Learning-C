//Write a program in C to separate the individual characters from a string.

#include<stdio.h>

int main(){

    char str[] = {"string"};
    int i = 0;

    while (str[i] != '\0'){

        printf("%c ", str[i]);
        i++;
    }
    return 0;
}