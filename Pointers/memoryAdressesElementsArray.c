#include<stdio.h>
 
 int main(){
     int arr[5] = { 1, 2, 3, 4, 5};
     int *p = &arr[0];
     int sum = 0;
     int i;

     for (i = 0; i < 5; i++){
         printf("%lu\n", &arr[i]); // afiseaza adresele de memorie a fiecarui element din array ( pentru ca elementele sunt de tipul int, scale factor va fi 4, iar adresele voi fi din 4 in 4)
     }

     return 0;
 }