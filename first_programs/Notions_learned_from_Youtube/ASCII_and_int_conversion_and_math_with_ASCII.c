#include<stdio.h>

int main()
{
    char ASCII;
    printf("Introdu un caracter: ");
    scanf("%c", &ASCII);
    printf("Conversia caracterului in int: %d \n", ASCII);

    int number;
    printf("Introdu un numar intre 0 - 127: ");
    scanf("%d", &number);
    printf("Conversia numarului in char: %c", number);

    //math with ASCII:
    char math = 'A' + '\t';
    printf("A(65) + \\t(11) = %c(%d) \n", math, math);


    return 0;

    }