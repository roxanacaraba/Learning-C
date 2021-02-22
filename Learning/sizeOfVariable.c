#include<stdio.h>

int main(){
    char character = 'a';
    short num = 1;
    int integer = 1000;
    long int li = 17823992;
    float f = 3.0 / 2.0;
    double d = 3.245 / 2.438;

    
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of short: %lu\n", sizeof(short));
    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of long int: %lu\n", sizeof(long int));
    printf("Size of float: %lu\n", sizeof(float));
    printf("Size of double: %lu\n", sizeof(double));

    return 0;
}