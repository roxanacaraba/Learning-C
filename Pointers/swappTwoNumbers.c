// Write a program in C to swap elements using call by reference.

#include<stdio.h>

int swap(int *pointer1, int *pointer2){
    int temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
    printf("%d %d", *pointer1, *pointer2);
}
int main(){
    int elem1 = 1;
    int elem2 = 2;

    swap(&elem1, &elem2);

    return 0;
}