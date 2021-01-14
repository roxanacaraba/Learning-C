#include<stdio.h>

int main(){
    int num1, num2, p, q, sum;
   

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    p = *&num1;   // p = *&variabila afiseaza valoarea variabilei 
    q = *&num2;   
    
      
    printf(" Adresa primului numar: %d\n", &num1);/// &variabila afiseaza adresa unde se afla variabila
    printf("Adresa celui de-al doilea numar: %d\n", &num2);

    sum = p + q;

    printf("Suma celor doua numere : %d + %d = %d", p, q, sum);
    
    return 0;
}
