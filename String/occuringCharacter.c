//Write a program in C to find maximum occurring character in a string

#include<stdio.h>

int main(){
    char str[] = "banana";
    int count = 0;
    int i = 0;
    char character = 'a';

    while (str[i] != '\0'){
        if(str[i] == character){
            count++;
        }
        i++;
    }
    printf("Occurence: %d", count);
    return 0;
}