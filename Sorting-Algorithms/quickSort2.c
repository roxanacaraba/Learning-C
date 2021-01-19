#include<stdio.h>

void quickSort(int arr[5], int first, int last){
    int i, j, pivot, temp;
    if(first < last){
        pivot = first;
        i = first + 1;
        j = last;
        while(i < j){
            while(arr[i] < arr[pivot] && i < last){
                i++;
            }
            while(arr[j] > arr[pivot]){
                j--;
            }
            if( i < j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i += 1;
                j -= 1;
            }
        }
    
    temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    quickSort(arr, first, j-1);
    quickSort(arr, j+1, last);
    }
}

int main(){
    int arr[5] = { 5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);

       
    }
    return 0;
}
    