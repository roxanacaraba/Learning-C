// Write a program in C to store n elements in an array and print the elements using pointer.

#include<stdio.h>

int main(){
    int n;
    printf("Cate numere doresti sa introduci?");
    scanf("%d", &n);

    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        printf("Introdu element: ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        int *pointer = &arr[i];
        printf("%d ", *pointer);
    }
    return 0;
}