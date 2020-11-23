// Write a C program to convert a string to an unsigned long integer. 

#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[10] = "123a";
    char *pointer;
    unsigned long unsign_long;
    unsign_long = strtoul(str, &pointer, 10);

    printf("The number(unsigned long integer) is %lu\n", unsign_long);
    printf("String part is |%s|", pointer);
    return 0;
}