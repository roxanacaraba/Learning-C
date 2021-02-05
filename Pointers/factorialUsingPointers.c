//  Write a program in C to find the factorial of a given number using pointers.

#include<stdio.h>
/*
int factorial(int num){
    int factorial = 1;
    int *pointer = &factorial; 
    int i;
    for(i = 1; i <= num; i++){
        *pointer *= i;
    }
    printf("%d", *pointer);
}

int main(){
    int num = 5;
    factorial(num);      

    return 0;
}
*/
// sau


int factorial(int num, int *fact){
    *fact = 1;
    int i;
    for(i = 1; i <= num; i++){
        *fact *= i;
    }
}

int main(){
    int num = 5;
    int fact;
    
    factorial(num, &fact);      

    printf(" The Factorial of %d is : %d \n\n",num,fact);

    return 0;
}