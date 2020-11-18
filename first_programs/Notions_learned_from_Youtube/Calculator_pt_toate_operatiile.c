#include<stdio.h>
#include<stdlib.h>
 
int main(){
    double num1;
    double num2;
    char op;
    double result;
    printf("Introdu primul numar: ");
    scanf("%lf", &num1);
    printf("Introdu operatia: ");
    scanf(" %c", &op);
    printf("Introdu al doilea numar: ");
    scanf("%lf", &num2);
    if ( op == '+')
    { 
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    } 
    else if (op == '/')
    {
        result = num1 / num2;
    }
    printf("%lf", result);
    return 0;


}