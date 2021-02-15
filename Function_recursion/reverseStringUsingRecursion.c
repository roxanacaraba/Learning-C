//  Write a program in C to reverse a string using recursion.

#include<stdio.h>
#define MAX 20


char* reverse(char str[MAX]){
    static int i = 0;
    static char rev_str[MAX];

    if(*str){
        reverse(str+1);
        rev_str[i++] = *str;
    }
    return rev_str;
}

int main(){
    char str[MAX] = {"string"};
    char *result = reverse(str);

    printf("%s", result);
    return 0;
}