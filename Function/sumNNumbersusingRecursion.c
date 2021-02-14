// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>


int suma(int n){
    
    int sum;
     
    if(n == 1){
        return(1);
    }
    else{
        sum = n + suma(n - 1);
    }
    return(sum);
}

int main(){

    int n = 10;
    int result = suma(n);

    printf("%d ", result);
    
    return 0;
}