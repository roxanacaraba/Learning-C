//Program to check if input character is a vowel using Switch Case.

#include<stdio.h>

int main(){

    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    switch (character)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        printf("%c is a vowel", character);
        break;
    
    default:
    printf("%c isn't a vowel", character);
        break;
    }
    return 0;
}