// Write a function to insert 20 numbers into an array with size of 20 in C/C++.
#include<stdio.h>

int main(){
    int arr[20];
    int i;
    int len = sizeof(arr)/sizeof(arr[i]);
    for(i = 0; i < len; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("arr[20] = {");
    for(i = 0; i < len; i++){
        printf("%d, ", arr[i]);
    }
    printf("}");

    return 0;
}