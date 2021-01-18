#include<stdio.h>

int main(){
    int i;
    for( i = 1; i > 0; i++){ // for ul are 3 pasi, primul pas e asignarea unei valori indexului de iterare, al doilea pas e verificarea conditiei de iesire din for, conditia de iesire reprezinta o operatie de comparare cu o alta valoare in cazul acesta, in general este o operatie logica, iar a treilea pas e incrementarea/decrementarea indexului pentru a parcurge vectorul.
        printf("%d", i*i);
    }
    return 0;
}