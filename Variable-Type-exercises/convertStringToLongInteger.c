#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[10] = " 289a";
    char *pointer;  // It is used by the strtol function to indicate where the conversion stopped.
    long integer = strtol(str, &pointer, 10); // 10 - The base of the number being converted.

    printf("The number is %ld", integer);

    return 0;

}