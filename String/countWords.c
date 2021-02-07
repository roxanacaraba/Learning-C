//Write a program in C to count the total number of words in a string.

#include<stdio.h>

int main(){
        char str[] = {"this  . is a string"};
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == ' ' ){
            if(str[i+1] != ' '){
                count++;
            }
        }
           i++;
    }
    
    if(i > 0){
        count++;
    }

    printf("%d", count);
    return 0;
}