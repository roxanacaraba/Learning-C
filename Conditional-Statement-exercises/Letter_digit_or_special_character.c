// Write a C program to check whether a character is an alphabet, digit or special character.

#include<stdio.h>

int main(){
    char input;

    printf("Enter a letter, a digit or special character: ");
    scanf("%c", &input);
    
    if((input >= 'a' && input <= 'z') ||( input >= 'A' && input <= 'Z'))
    {
        printf("%c is a alphabet\n", input);
    }
    else if(input >= '0' && input <= '9')
    {
        printf("%c is a digit\n", input);
    }
    else{
        printf("%c is a special character", input);

    }
    return 0;
}