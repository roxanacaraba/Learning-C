// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int count_digits(int num){
    static int count = 0;

    if(num != 0){
        count++;
        count_digits(num/10);
    }
    return count;
}
int main(){
    int num = 195;
    int result = count_digits(num);

    printf("%d", result);
    return 0;
}