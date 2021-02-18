#include<stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    int ultim = n - 1;
    while(ultim > 0){
       int index = ultim;
       int i;
       ultim = 0;

       for(i = 0; i < index; i++){
           if(arr[i] > arr[i+1]){
               swap(&arr[i], &arr[i+1]);
               ultim = i;
           }
        }
    }
}

int main(){
    int arr[] = {3, 8, 1, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    int i;
    for(i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}

