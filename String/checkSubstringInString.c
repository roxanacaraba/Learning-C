//    Write a C program to check whether a given substring is present in the given string.

#include<stdio.h>
#include<string.h>


int main(){

    char str[] = {"javascript"};
    char substr[] = {"script"};
    int len1 = strlen(str);
    int len2 = strlen(substr);
    int i, j = 0;
    
    for( i = 0; i <= len1; i++){
        if(str[i] == substr[j]){
            j++;
            if(j == len2){
                return 1;
            }
        }
    }
    if( j != len2){
        return -1 ;
    }
}

