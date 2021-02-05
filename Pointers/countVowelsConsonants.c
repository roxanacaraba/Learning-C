//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

int main(){
    char string[] = "thisisastring";
    int count_vow = 0;
    int count_cons = 0;
    char *pointer;
    pointer = string;

    while(*pointer != '\0'){
        if ( *pointer == 'A' || *pointer == 'E' || *pointer == 'I' || *pointer == 'O' || *pointer == 'U' || *pointer == 'a' || *pointer == 'e' || *pointer == 'i' || *pointer == 'o' || *pointer == 'u' ){
            count_vow++;
        } 
        else{
            count_cons++;
        }
        pointer++;
    }

    printf("Vowels : %d\nConsonants: %d", count_vow, count_cons);

    return 0;
}