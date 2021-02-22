#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "String";
    int str_len = strlen(str);
    printf("%d\n", str_len);
    int size_str = sizeof(str); // size_str este mai mare cu 1 byte decat str_len pentru ca size_str include si memoria alocata caracterului NUll de la finalul stringului;
    printf("%d", size_str);
    return 0;
}
