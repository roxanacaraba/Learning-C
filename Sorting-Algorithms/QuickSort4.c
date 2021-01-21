#include<stdio.h>

int quickSort(int arr[], int start, int end){
    int pivot = start;
    int i = start + 1;
    int j = end;

    if(i < j){
        if(start >= end){
            return 0;
        }
        if(arr[i] < pivot){
            i += 1;
        }
        if(arr[j] > pivot){
            j -= 1;
        }
        if(i < j && arr[i] > pivot && arr[j] < pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i ++;
            j--;
        }
    }
    arr[start] = arr[i -1];
    arr[i-1] = pivot;

 quickSort(arr, start, i-2);
           quickSort(arr, i, end);
        
}
int main(){
   int arr [6] = { 10, 2, 16, 8, 12, 15};
   int n = sizeof(arr)/sizeof(arr[0]);

   quickSort(arr, 0, n-1);
   for(int i = 0; i < n; i++){
       printf("%d ", arr[i]);
   }
    return 0;
}
