//Write a program in C to copy one string to another string.

#include<stdio.h>

int main(){
    char str1[100] = {"string"};
    char str2[100] = {};
    int i = 0;

    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[100] += '\0';
    printf("String: %s\n", str1);
    printf("String copy: %s", str2);
    
    return 0;

}