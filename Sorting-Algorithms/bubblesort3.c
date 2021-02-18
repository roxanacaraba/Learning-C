#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    bool sorted = false;
    while(sorted == false){
       sorted = true;
       for(int i = 0; i < n -1; i++){
           if(arr[i] > arr[i+1]){
               swap(&arr[i], &arr[i+1]);
               sorted = false;
           }
        }
    }
}

int main(){
    int arr[] = {9, 1, 3, 4,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    int i;
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}

