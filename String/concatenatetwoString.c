// Write a program in C to Concatenate Two Strings Manually. 

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = {"Concatenate two "};
    char str2[20] = {"strings manually."};
    int len1 = strlen(str1); //16
    int len2 = strlen(str2); //17
    int j = len1; // 16
    int len_res = len1 + len2; // 33
    char res[50];
    int i = 0 , k = -1;


    while(str1[i] != '\0'){ // copiaza caracterele din str1 in res
        res[i] = str1[i];
        i++;  // i de la 0 la 15
    }

     for(j = len1; j < len_res; j++){ // j este incrementat de la 16 la 32
        k++;  // k este incrementat de la 0 la 16
        res[j] = str2[k]; //copiaza caracterele din str2 in res
        }
    
    res[len_res] = '\0';

    printf("%s", res);
    return 0;
}