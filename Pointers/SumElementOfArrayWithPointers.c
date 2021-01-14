#include<stdio.h>
 
 int main(){
     int arr[5] = { 1, 2, 3, 4, 5};
     int *p = &arr[0];
     int sum = 0;
     int i;

     for (i = 0; i < 5; i++){
         sum += *&arr[i];
     }
     printf("%d", sum); // afiseaza suma tuturor valorilor elementelor din array

     return 0;
 }