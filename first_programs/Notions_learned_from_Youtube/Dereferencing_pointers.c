#include<stdlib.h>
#include<stdio.h>

int main(){
    int age = 30;
    int *pAge = &age; // variabila pAge stocheaza pointerul &age care este = adresa de memorie a variabilei age , adica a valorii 30 continuta de variabila age

    printf("adresa de memorie a lui age, stocata in variabila pointer: %p \n", pAge); // printam adresa de memorie a lui age continuta de pointer
    printf("valoarea aflata la adresa de memorie a lui age: %d \n", *pAge); //dereference the pointer using * . Mergem la adresa de memorie a lui age continuta de pointer si printam valoarea lui age salvata acolo , adica 30.
// sau: 
    printf("adresa de memorie a lui age, stocata in pointerul &age: %p \n", &age);
    printf("valoarea aflata la adresa de memorie a lui age: %d \n" , *&age);
    

    return 0;

}