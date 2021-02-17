// Use qsort() function to sort arrays in ascending order. With function pointers and void pointers, it is possible to use qsort for any data type

#include<stdio.h>
#include<stdlib.h>

int compare(const void *p1, const void *p2){ 

/*
<0 The element pointed by p1 goes before the element pointed by p2
 0 The element pointed by p1 is equivalent to the element pointed by p2
>0 The element pointed by p1 goes after the element pointed by p2 */

    return (*(int*)p1 - *(int*)p2);
}

int main(){
    int arr[] = { 4, 2, 9,6, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i;

    qsort(arr, len, sizeof(int), compare); //arr este pointer catre primul elem, len este nr de elemente ale array-ului, sizeof(int) este marimea in bytes a fiecarui element din array, compare este o functie care compara 2 elemente

    for (i=0; i< len; i++) 
        printf ("%d ", arr[i]); 
    return 0; 
}