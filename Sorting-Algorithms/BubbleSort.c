// works by repeatedly swapping the adjacent elements if they are in wrong order.
#include<stdio.h>

void swap(int *xp, int *yp)
{ // O functie swap pt a inversa elementele
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{  // o functie pentru a inversa 2 elemente adiacente daca primul element > al doilea element
    int i, j;
    for(i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        { //ultimele i elemente sunt deja la locul lor
            if(arr[j]>arr[j+1]) 
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
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
    int arr[] ={ 4, 8, 2, 9, 1, 6, 5, 3, 0, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("Sorted array : ");
    printArray(arr,n);
    return 0;
}

// Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

//Best Case Time Complexity: O(n). Best case occurs when array is already sorted.