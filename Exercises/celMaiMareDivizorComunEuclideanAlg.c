//Cel mai mare divizor comun utilizand Algoritmul lui Euclidean.
// Cel mai mare divizor comun a doua numere nu se schimba daca scadem numarul mai mic din numarul mai mare.

#include<stdio.h>

int gcd(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a == b)
        return a;
    if(a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
    
}
int main(){
    printf("%d", gcd(28,42));
    return 0;
}
