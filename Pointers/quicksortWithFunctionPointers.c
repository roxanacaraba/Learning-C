// Use qsort() function to sort arrays in ascending order. With function pointers and void pointers, it is possible to use qsort for any data type

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int arr[] = { 4, 2, 9,6, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;

    qsort(arr, len, sizeof(int), compare);

    for (i=0; i< len; i++) 
        printf ("%d ", arr[i]); 
    return 0; 
}