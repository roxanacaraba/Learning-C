// Write a program in C to Concatenate Two Strings Manually. 

#include<stdio.h>
#include<string.h>

int main(){
    char str1[20] = {"Concatenate two"};
    char str2[20] = {"strings manually."};
    int len1 = strlen(str1); //15
    int len2 = strlen(str2); //17
    int j = len1; // 15
    int len_res = len1 + len2; // 32
    char res[50];
    int i = 0 , k = 0;


    while(str1[i] != '\0'){ // copiaza caracterele din str1 in res
        res[i] = str1[i];
        i++;  // i de la 0 la 14
    }

     for(j = len1; j < len_res; j++){ // j este incrementat de la 15 la 31
        for(k = 0; k < len2; k++){   // k este incrementat de la 0 la 16
            res[j] = str2[k]; //copiaza caracterele din str2 in res
        }
    }
    
    res[len_res] = '\0';

    printf("%s", res);
    return 0;
}