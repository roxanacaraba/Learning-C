#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){ // functie de partitionare a vectorului pe baza elementului pivot
    int pivot = arr[high]; // pivotul = ultimul element din vector
    int i = low - 1;
    
    // punem elementele mai mici ca pivotul in stanga si cele mai mari ca pivotul in dreapta pivotului
    for (int j = low; j < high; j++){
        if (arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
    
        }
    }
    swap(&arr[i+1], &arr[high]);
    return(i+1);
}
void quickSort(int arr[], int low, int high){ /* Selectați poziția pivot și puneți toate elementele mai mici
   decât pivot în stânga și mai mare decât pivot în dreapta */
    if(low < high){
        int pivot_index = partition(arr, low, high);

        quickSort(arr, low, pivot_index -1); // sorteaza elementele din stanga pivotului
        quickSort(arr, pivot_index + 1, high);        // sorteaza elementele din drepta pivotului
    }
}

void printArray(int arr[], int size)
{ // o functie care printeaza elementele unui array
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
      
    }
}

int main(){
    int arr[] = { 3, 7, 2, 5, 4, 0, 6};
    int n = sizeof(arr)/ sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);

    return 0;
}
    
    


