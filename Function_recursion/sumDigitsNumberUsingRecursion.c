// Write a program in C to find the sum of digits of a number using recursion.

#include<stdio.h>

int sum_digits(int num){
    
    if(num == 0){
        return 0;
    }
    else{
        return ((num % 10) + sum_digits(num / 10));
    }
}

int main(){
    int num = 258;
    int sum = sum_digits(num);
    printf("%d", sum);

    return 0;

}