#include<stdio.h>

void bubblesort(int arr[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
       for(j = 0; j - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       }
    }
}
int main(){
    int arr[5] = {12, 46, 33, 17, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    for(int i = 0; i < n; i++){