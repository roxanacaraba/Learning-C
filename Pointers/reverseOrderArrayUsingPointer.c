//Write a program in C to print the elements of an array in reverse order.

#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int i;
    int *pointer;

    int len = sizeof(arr)/sizeof(arr[0]);
    pointer = &arr[len-1]; // pointer = adresa ultimului elem

    for(i = len; i > 0; i--){
        printf("%d ", *pointer);  // printeaza valoarile elementelor incepand cu ultimul
        pointer--;
    }
    return 0;
}