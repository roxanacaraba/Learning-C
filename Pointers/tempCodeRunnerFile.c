#include<stdio.h>
 
 int main(){
     int arr[5] = { 1, 2, 3, 4, 5};
     int *p = &arr[0];
     int sum = 0;
     int i;

     for (i = 0; i < 5; i++){
         sum += *&arr[i];
         printf("%u", &arr[i]);
     }
     printf("%d", sum);
