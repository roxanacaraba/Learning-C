// Write a program in C to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    //int *pointer = &sum;
    int sum = 0;
    int *pointer;
     pointer = arr;
    int i;

    int len = sizeof(arr)/sizeof(arr[0]);

    for(i = 0; i <= len; i++){
       // *pointer += i;
       sum += *pointer;
       pointer++;
    }
    printf("Sum = %d", sum);
    return 0;
}