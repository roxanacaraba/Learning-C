//Write a program in C to add numbers using call by reference.

#include<stdio.h.>

int sum(int *num1, int *num2){
    int sum = *num1 + *num2;
    return sum;
}
int main(){
    int first_num = 7;
    int second_num = 2;
    
    int add = sum(&first_num, &second_num);
    printf("%d", add);
    return 0;
}

