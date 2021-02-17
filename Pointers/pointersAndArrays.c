#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *pointer_arr;
    pointer_arr = &arr[0]; // pointer_ arr = adresa primului element din arr
    int x;
    x = *pointer_arr; // x ia valoarea primul element din arr

    printf("x: %d\n\n", x);

    printf("adresa lui arr[0]: %p\n\n", &pointer_arr); // adresa primului element din arr

    printf("valoarea primului element din arr (arr[0]): %d\n\n", *pointer_arr);

    printf("adresa lui arr[1]: %p\n\n", &pointer_arr + 1); // adresa celui de al doilea element din arr

    printf("valoarea celui de al doilea element din arr (arr[1]): %d\n\n", *(pointer_arr +1));
    
    return 0;


}