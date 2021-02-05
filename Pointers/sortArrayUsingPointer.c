//Write a program in C to sort an array using Pointer.

#include<stdio.h>

int main(){
    int arr[5] = {7, 52, 18, 26, 92};
    int i, j, temp;

    int *pointer
    int pointer = arr[0];

    int lenght = sizeof(arr)/sizeof(arr[0]);
    
    for(i = 0; i < lenght; i++){
        for( j = i+1; j < lenght; j++){
            if(*arr[i] > *arr[j]){
                temp = *arr[i];
                *arr[i] = *arr[j];
                *arr[j]= temp;

            }
        }
    }
    for(i = 0; i < lenght; i++){
        printf("%d ", *arr[i]);
    }

}