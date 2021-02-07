//Write a program in C to print individual characters of string in reverse order.

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = {"string"};
    int i;
    int len = strlen(str);
        for(i = len; i >= 0; i--){
            printf("%c ", str[i]);

        }
    return 0;
}