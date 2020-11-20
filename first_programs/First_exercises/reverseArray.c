//Schimba ordinea elementelor dintr-un array, astfel incat primul sa devina ultimul, al doilea sa devina penultimul, etc.

#include<stdio.h>

void swap(int &a, int &b) {

    int aux = a;
    a = b;
    b = aux;
    //https://www.tutorialspoint.com/cplusplus/cpp_function_call_by_reference.htm
}

/*
void swap(int[] arr, int i, int j) {
    
}
*/

int main(){

    int arr[5] = { 1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n/2; i++){
        swap(arr[i], arr[n-i]);
       
    }
    for (int j = 0; j < 5; j++){
        printf("arr[%d] = %d \n", j , arr[j]);
    }
    
    return 0;
}