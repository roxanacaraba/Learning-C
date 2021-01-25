// varianta 1

#include<stdio.h>

int main(){
    int a = 10, b = 20;
    int aux;
    aux = a;
    a = b;
    b = aux;

    printf("a = %d, b = %d\n", a, b);

    // varianta 2
    
    int c = 30, d = 40;
    c = c + d;
    d = c - d;
    c = c - d;

    printf("c = %d, d = %d\n", c, d);

    // varianta 3

    int e = 50, f = 60;
    e = e ^ f;
    f = e ^ f;
    e = e ^ f;

    printf("e = %d, f = %d\n", e, f);
    
    return 0;
}



