//Program to reverse the case of input character

#include<stdio.h>
#include<ctype.h>

int main(){
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (islower(character)){
        printf("%c", toupper(character));
    }
    else{
        printf("%c", tolower(character));
    }

    return 0; 

}