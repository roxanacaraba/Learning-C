// how to use conditional (tenary) operator:

#include<stdio.h>

int main(){
    int x;
    int a = 4;
    x = ( a > 0) ? a : (-a); 
    printf("%d", x);
    
    return 0;
}