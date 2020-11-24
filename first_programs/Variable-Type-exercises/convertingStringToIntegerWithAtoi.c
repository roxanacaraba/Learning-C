#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[10] = "122";
    char str2[10] = "Hello";
    char str3[10] = "99hello";

    int x = atoi(str);
    printf("%d\n", x);

    x = atoi(str2);
    printf("%d\n", x);

    x = atoi(str3);
    printf("%d\n", x);

    return 0;
}