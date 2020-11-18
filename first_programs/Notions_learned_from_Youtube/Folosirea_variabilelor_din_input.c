#include<stdio.h>
#include<stdlib.h>

int main() 
{
    char nume[20];
    char sex;
    int varsta;

    printf("Introdu numele : ");
    fgets(nume, 20, stdin);
    printf("Introdu sexul : ");
    scanf("%c", &sex);
    printf("Introdu varsta: ");
    scanf("%d", &varsta);

    printf("%s, sex : %c , varsta: %d" , nume, sex, varsta);

    return 0;
}