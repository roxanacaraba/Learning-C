#include<stdio.h>

int main(){
    int a = 11;
    int b = 9;
    int x = a - b;
    int c = (x >> (sizeof(int) * 8 - 1)) & 1; // c poate lua valorile 0 sau 1, 0 daca max = a si 1 daca max = b
    int max;
    max = (b * c) + a * ( 1 - c);
    printf("Max: %d", max);
    return 0;

    // sau folosim max = a - c * x 
}


