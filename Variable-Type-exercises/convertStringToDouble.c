#include<stdio.h>
#include<stdlib.h>

int main(){

    char str[10] = " 34";
    char *pointer;
    double doub;
    doub = strtod(str, &pointer);

    printf("The number is %f", doub);
    return 0;
}