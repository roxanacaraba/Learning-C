// Write a program in C to Check whether a given string is Palindrome or not. 

/*
int main(){
    char str[] = "";
    int i, j;
    int len = strlen(str);

    for(i = 0; i < len; i++){
        for(j = len; j >=0; j--){
            if(str[i] = str[j]){
                printf("The string is palindrom\\n");
            }
            else{
                printf("The string is not palindrom\n");
            }
        }
    }
    return 0;
}
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[] = {"madam"};
    char reverse[10];
    int i,j;
    int len = strlen(str); // 5

    for( j = 0; j < len; j++){ // j incrementeaza de la 0 la 4
        for(i = len-1; i >= 0; i--){ // i decrementeaza de la 4 la 0
            reverse[j] = str[i];   // reverse[0] = str[4] , reverse[1] = str[3], reverse[2] = str[2], reverse[3]= str[1], reverse[4] = str[0]       
            }
        }
    reverse[10] += '\0';
    printf("%s\n", reverse);
    if(str == reverse){
        printf("The string is palindrom");
    }
    else{
        printf("The string is not palindrom");
    }
    printf("\n\n");
    return 0;
}