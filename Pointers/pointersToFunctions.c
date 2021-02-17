//Exemplu de declarare si apelare a unei functii utilizand function pointers

#include<stdio.h>

void functie(int a){ // o functie normala avand ca parametru un integer
    printf("a = %d", a);
}

int main(){
    void (*pointer_functie)(int) = &functie; // pointer_functie este un pointer catre functia functie()
    (*pointer_functie)(5); // apelarea functiei functie() utilizand pointer_functie

    return 0;
}