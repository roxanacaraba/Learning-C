//Write a program in C to sort an array using Pointer.

#include<stdio.h>

int main(){
    int arr[5] = {3, 1, 5, 2, 4};
    int *pointer;
    pointer = arr;
    int i, temp;
    int len = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i < len; i++){
            if (*(&arr[i]) > *(&arr[i+1])){
                temp = *&arr[i];
                *&arr[i] = *&arr[i+1];
                *&arr[i+1] = temp;
            }
        }
        for(i = 0; i <len; i++){
            printf("%d ", arr[i]);
        }
    }