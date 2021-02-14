#include<stdio.h>
#include<stdlib.h>

void funct(int a, int b){
    exit(0);
    printf("%d", a + b);
}

int main(){
    funct(2,4);
    return 0;
}
