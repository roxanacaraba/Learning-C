// Write a program in C to check whether a number is a prime number or not using the function.

#include<stdio.h>

int prime_or_not(int num){
    int i;
    int count = 0;
    for ( i = 1; i < num+ 1; i++){
        if(num % i == 0){
            count++;
        }
    }
        if (count == 2){
            return 1;
        }
        else{
            return 0;
            }
}

int main(){
    int num = 13;
    int result = prime_or_not(num);
    if(result  == 1 ){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    return 0;

}