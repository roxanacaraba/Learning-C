// Write a program in C to Calculate the length of the string using a pointer.

#include<stdio.h>

int main(){
    char str[] = "string";
    int lenght= 0;
    char *pointer = &str[0];

    while(*pointer != '\0'){
        lenght++;
        pointer++;

    }
    printf("Lenght = %d", lenght);
    return 0;


}
