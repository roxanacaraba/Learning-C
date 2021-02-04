#include<stdio.h>

int *mergeSort( int arr[], int start, int end){
    int len = (end - start) + 1;
    if(len == 0 || start > end){
        return 0;
    }
    if(start == end){
        return &arr[start];
    }

    int m = (start + end) / 2;

    int *a = mergeSort(arr, start, m);
    int len_a = (m - start) + 1;

    int *b = mergeSort(arr, m+1, end);
    int len_b = (end - (m +1)) + 1;
    int i = 0;
    int j = 0;
    
    int* mergelist = (int*)malloc(10 * sizeof(int));
    while(i < len_a && j < len_b){
        if (a[i] > b[j]){
            mergelist[10] += b[j];
            j += 1;
        }
        else{
            mergelist[10] += a[i];
            i += 1;
        }
        return mergelist;
    }
}

int main(int arr[], int start, int end){
    int arr[] = {5, 9, 2, 4, 0, 8, 1};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    
    mergeSort(arr, 0, len_arr -1);
    int i;
    for(i = 0; i < len_arr; i ++){
        printf("%d", arr[i]);
    }
    return 0;
}