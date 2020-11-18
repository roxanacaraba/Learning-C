#include<stdio.h>
#include<stdlib.h>

void sayHi(char name[], int age) 
{    
    printf("Hi, %s, you are %d age!\n", name, age);
}
int main()
{
    printf("TOP\n");
    sayHi("Roxana", 22);
    printf("BOTTOM");
    return 0;
}
