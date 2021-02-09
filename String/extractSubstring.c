/* Write a program in C to extract a substring from a given string. 

Test Data :
Input the string : this is test string
Input the position to start extraction :9
Input the length of substring :4

Expected Output :

The substring retrieve from the string is : " test " */

#include<stdio.h>

int main(){

    char str[100], substr[100];
    int pos_extr;
    int len;
    int i = 0;

    printf("Input the string: ");
    fgets(str, sizeof str, stdin);

    printf("Input the position to start extraction: ");
    scanf("%d", &pos_extr);

    printf("Input the lenght of substring: ");
    scanf("%d", &len);

    while(i < len){
        substr[i] = str[pos_extr + i - 1];
        i++;
    }
    substr[i] = '\0';
    printf(" Substring: %s", substr);
    return 0;

}