// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>

/*
int suma(int n){
    if(n == 1)
        return 1;

    return n + suma(n - 1);  
}

int main(){

    int n = 1;
    int result = suma(n);

    printf("%d ", result);
    
    return 0;
}


int suma(int n, int i){
    static int result = 0;

    if(i <= n){
        result += i;
        suma(n, i + 1);
    }
    return result;
}

int main(){
    int n = 5;
    int res = suma(n, 0);
    printf("%d", res);

    return 0;
}
*/
void suma(int i, int *result, int n){
    if(i <= n){
        result += i;
        suma(n, i + 1, result);
    }
}

int main(){
    int n = 5;
    int i = 1;
    int result = 0;
    suma(i, &result, n);
    printf("%d", result);

    return 0;
}