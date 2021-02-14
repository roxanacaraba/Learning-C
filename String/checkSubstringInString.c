//Write a C program to check whether a given substring is present in the given string.

#include<stdio.h>
#include<string.h>


int compare(char str[], char substr[]){

    int len1 = strlen(str); //10
    int len2 = strlen(substr); //6
    int i, j = 0;
    
    
    for(i = 0; i < len1; i++){ // i incrementeaza de la 0 la 10
        if(str[i] == substr[j]){  // daca str[0]
            j++;
            if(j == len2){
                return 1;
            }
        }
    }
    if( j != len2){
        return 0;
    }
}
int main(){
    char str[] = {"javascript"};
    char substr[] = {"script"};

    int result = compare(str, substr);
    if(result == 1){
        printf("The substring is present in string");
    }
    else{
        printf("The substring is present in string");
    }
    return 0;
 }
