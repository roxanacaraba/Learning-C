// Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    float *element;

    printf(" Input total number of elements(1 to 100): ");
    scanf("%d",&n);

    element = (float*)calloc(n,sizeof(float)); // elem este un pointer catre primul byte din memoria alocata
    if (element == NULL){
        printf("No memory is allocated.");
        exit(0);
    }
    printf("\n");

    for(i = 0; i < n; ++i){
        printf("Number %d: ", i+1);
        scanf("%f", element + i);
    }
    for(i = 1; i < n; ++i){
        if(*element < *(element+i)){
            *element = *(element +i);
        }
    printf("The larget element : %f", *element);
    return 0;
    }

}
