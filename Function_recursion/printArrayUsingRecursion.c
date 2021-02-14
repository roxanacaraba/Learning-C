 // Write a program in C to print the array elements using recursion.

#include<stdio.h>

 void print_elem(int arr[], int start, int len){
     
     if(start >= len){
         return;
     }
     printf("%d ", arr[start]);
     print_elem(arr, start + 1, len);
 }

 int main(){
     int arr[] = {1, 2, 3, 4, 5};
     int len = sizeof(arr)/sizeof(arr[0]);

     print_elem(arr, 0, len);
     return 0;
 }