#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int num1;  /* daca vrem sa folosim numere cu virgula folosim double */
    int num2;
    printf("Introdu primul numar: ");
    scanf("%d", &num1); /* daca folosim double, folosim %lf */
    printf("Introdu al doilea numara: ");
    scanf("%d", &num2);
    
    printf("Rezultat: %d", num1 + num2); /* daca folosim double, folosim %f */
    return 0;
}
