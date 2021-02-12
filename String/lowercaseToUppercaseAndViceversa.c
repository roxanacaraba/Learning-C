// Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[] = {"Jack and Rose"};
    int i = strlen(str);
    int ch, number_char;
    number_char = i; // arata numarul caracterelor acceptate intr-p propozitie
    for(i = 0; i < number_char; i++){
        ch = islower(str[i])? toupper(str[i]):tolower(str[i]);
        putchar(ch);

    }
    return 0;

}